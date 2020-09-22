//
//  CXJointBilateralUpsamplingFilter.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2019/1/7.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>
NS_ASSUME_NONNULL_BEGIN

@interface CXJointBilateralUpsamplingFilter : NSObject<MTIUnaryFilter>
@property (nonatomic, assign) BOOL blurGuidedImageBeforeUpsampling;
@property (nonatomic, assign) simd_float2 stepWidth;
@property (nonatomic, assign) float spatialSigma;
@property (nonatomic, assign) float lumSigma;
@property (nonatomic, assign) float lumGaussRadius;
@property (nonatomic, assign) int radius;
@property (nonatomic, strong) MTIImage *guidedImage;


@end

NS_ASSUME_NONNULL_END
