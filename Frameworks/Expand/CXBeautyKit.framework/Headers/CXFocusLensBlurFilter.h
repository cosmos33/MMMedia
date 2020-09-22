//
//  CXFocusLensBlurFilter.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2019/1/4.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "CXBeautyUtility.h"
#import "CXFilterInputType.h"
#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXFocusLensBlurFilter : NSObject<MTIUnaryFilter>
@property (nonatomic, assign) float aperture;

@property (nonatomic, assign) float radius;
@property (nonatomic, assign) CXFilterInputType inputType;

@property (nonatomic, strong) MTIMask *inputMask;

@property (nonatomic, assign) matrix_float3x3 intrinsicMatrix;

// The size of one pixel in millimeters
@property (nonatomic, assign) float pixelSize;

@property (nonatomic, assign, nullable) CVPixelBufferRef depthDataMap;
@property (nonatomic, assign) MTLPixelFormat depthPixelFormat;
@property (nonatomic, assign) UIDeviceOrientation orientation;


@end

NS_ASSUME_NONNULL_END
