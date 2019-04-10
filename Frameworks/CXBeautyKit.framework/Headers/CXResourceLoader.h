//
//  CXResourceLoader.h
//  Pods
//
//  Created by Yu Ao on 29/01/2018.
//

#import <Foundation/Foundation.h>

@class CXBeautyConfiguration;

NS_ASSUME_NONNULL_BEGIN

@protocol CXResourceLoader <NSObject>

- (nullable NSURL *)contentsURLForResourceWithIdentifier:(NSString *)identifier;

- (void)contentsURLForResourceWithIdentifier:(NSString *)identifier completion:(void(^)( NSURL * _Nullable url,  NSError * _Nullable error))completionHandler;

@end

@interface CXResourceLoaderRegistration: NSObject

+ (void)registerResourceLoader:(id<CXResourceLoader>)resourceLoader;

@property (nonatomic, class, readonly) id<CXResourceLoader> resourceLoader;

@end

@interface CXLocalResourceLoader: NSObject <CXResourceLoader>

- (instancetype)initWithBundle:(NSBundle *)bundle;

- (void)fillLayersForConfiguration:(CXBeautyConfiguration *)configuration;

@end

NS_ASSUME_NONNULL_END
