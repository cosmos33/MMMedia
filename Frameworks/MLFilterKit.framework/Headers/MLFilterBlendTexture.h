//
//  MLFilterBlendTexture.h
//  Pods
//
//  Created by YuAo on 1/4/17.
//
//

#import <UIKit/UIKit.h>
#import "MLBlendMode.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, MLFilterBlendTextureOrder) {
    MLFilterBlendTextureOrderAboveColorLookup,
    MLFilterBlendTextureOrderBelowColorLookup
};

@interface MLFilterBlendTexture : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,copy,readonly) MLBlendMode *blendMode;

@property (nonatomic,strong,readonly) UIImage *texture;

@property (nonatomic,strong,readonly,nullable) UIImage *mask;

@property (nonatomic,readonly) MLFilterBlendTextureOrder order;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithBlendMode:(MLBlendMode *)mode texture:(UIImage *)texture;

- (instancetype)initWithBlendMode:(MLBlendMode *)mode texture:(UIImage *)texture order:(MLFilterBlendTextureOrder)order;

- (instancetype)initWithBlendMode:(MLBlendMode *)mode texture:(UIImage *)texture mask:(nullable UIImage *)mask order:(MLFilterBlendTextureOrder)order NS_DESIGNATED_INITIALIZER;

- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
