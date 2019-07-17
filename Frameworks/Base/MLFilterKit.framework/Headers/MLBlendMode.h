//
//  MLFilterBlendMode.h
//  Pods
//
//  Created by YuAo on 2/13/17.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const MLBlendModeNameNormal;
FOUNDATION_EXPORT NSString * const MLBlendModeNamePixellate;
FOUNDATION_EXPORT NSString * const MLBlendModeNameBlurBlend;
FOUNDATION_EXPORT NSString * const MLBlendModeNameBlur;

@interface MLBlendMode : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,readonly,copy) NSString *name;

@property (nonatomic,copy,readonly,nullable) NSDictionary<NSString *,id> *parameters;

@property (nonatomic,copy,readonly,nullable) NSString *customFragmentShader;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithName:(NSString *)name
                  parameters:(nullable NSDictionary<NSString *,id> *)parameters
        customFragmentShader:(nullable NSString *)customFragmentShader NS_DESIGNATED_INITIALIZER;

- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
