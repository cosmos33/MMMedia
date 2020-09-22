//
//  CXMPSGaussianBlurFallbackFilter.h
//  Pods
//
//  Created by Yu Ao on 14/03/2018.
//
#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CXMPSGaussianBlurFallback <NSObject>

+ (MTIImage *)imageByApplyingGaussianBlurToImage:(MTIImage *)image radius:(float)radius;

@end

NS_ASSUME_NONNULL_END

