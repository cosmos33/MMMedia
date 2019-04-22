//
//  CXSwirlyBokehFilter.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2019/1/4.
//

#import <Foundation/Foundation.h>
@import MetalPetal;
NS_ASSUME_NONNULL_BEGIN

@interface CXSwirlyBokehFilter : NSObject<MTIUnaryFilter>
@property (nonatomic, assign) float power;
@property (nonatomic, assign) float radius;
@property (nonatomic, assign) float intensity;

@property (nonatomic, assign) simd_float2 step;
@property (nonatomic, strong) MTIImage *bokehImage;
@property (nonatomic, strong) MTIMask *inputMask;


@end

NS_ASSUME_NONNULL_END
