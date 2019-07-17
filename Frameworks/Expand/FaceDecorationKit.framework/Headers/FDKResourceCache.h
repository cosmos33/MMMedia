//
//  FDKResourceCache.h
//  Pods
//
//  Created by YuAo on 6/20/16.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FDKResource <NSObject>

- (nullable instancetype)initWithContentsOfURL:(NSURL *)URL options:(NSDictionary *)options;

- (NSInteger)cacheCost;

@end

@interface FDKResourceCache : NSObject

@property NSUInteger countLimit;

@property (nonatomic, strong) dispatch_queue_t releaseQueue;

+ (instancetype)sharedCache;

- (nullable id<FDKResource>)resourceWithContentsOfURL:(NSURL *)URL resourceClass:(Class)resourceClass options:(NSDictionary *)options;

- (void)prefetchResourcesWithContentsOfURL:(NSURL *)URL resourceClass:(Class)resourceClass options:(NSDictionary *)options;

- (void)removeAllCachedResources;

@end

NS_ASSUME_NONNULL_END
