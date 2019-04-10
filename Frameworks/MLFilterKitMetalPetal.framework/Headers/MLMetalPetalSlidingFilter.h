//
//  MLMetalPetalSlidingFilter.h
//  Pods
//
//  Created by Yu Ao on 30/11/2017.
//

@import MetalPetal;

typedef NS_ENUM(NSUInteger, MLMetalPetalSlidingFilterMode) {
    MLMetalPetalSlidingFilterModeHorizontal,
    MLMetalPetalSlidingFilterModeVertical
};

@interface MLMetalPetalSlidingFilter : NSObject <MTIFilter>

@property (nonatomic) float offset;

@property (nonatomic, strong, nullable) id<MTIUnaryFilter> filterA;
@property (nonatomic, strong, nullable) id<MTIUnaryFilter> filterB;

@property (nonatomic) MLMetalPetalSlidingFilterMode mode;

@property (nonatomic, strong, nullable) MTIImage *inputImage;

@end
