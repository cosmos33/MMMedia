//
//  CXBackgroundBlurFilter.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2019/1/2.
//

#import <UIKit/UIKit.h>
#import <MetalPetal/MetalPetal.h>
#import "CXFilterInputType.h"
@class MMImageSegmentationResult;
NS_ASSUME_NONNULL_BEGIN
typedef NSString * CXBackgroundBlurMode NS_STRING_ENUM;
extern CXBackgroundBlurMode const CXBackgroundBlurModeLens;
extern CXBackgroundBlurMode const CXBackgroundBlurModeSwirly;
extern CXBackgroundBlurMode const CXBackgroundBlurModeMotion;
extern CXBackgroundBlurMode const CXBackgroundBlurModeZoom;
extern CXBackgroundBlurMode const CXBackgroundBlurModeHalftone;
//extern CXBackgroundBlurMode const CXBackgroundBlurModeTriangle;
extern CXBackgroundBlurMode const CXBackgroundBlurModePixel;

@interface CXBackgroundBlurFilter : NSObject<MTIUnaryFilter>
@property (nonatomic, copy) CXBackgroundBlurMode mode;
@property (nonatomic, assign) CXFilterInputType inputType;
@property (nonatomic, assign) float intensity;
@property (nonatomic, strong) MTIMask *mask;
@property (nonatomic, strong) MTIImage *bokehImage;
@property (nonatomic, assign) BOOL disable;
- (void)setMaskWithSegmentationMask:(MMImageSegmentationResult *) segmentationMask;
@end

NS_ASSUME_NONNULL_END
