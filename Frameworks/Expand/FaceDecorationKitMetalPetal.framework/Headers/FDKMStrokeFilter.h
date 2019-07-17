//
//  FDKMStrokeFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2017/12/7.
//


#import <Foundation/Foundation.h>
@import MetalPetal;

NS_ASSUME_NONNULL_BEGIN

@interface FDKMStrokeFilter : NSObject<MTIFilter>

@property (nonatomic, assign) int strokeRadius;

@property (nonatomic, readwrite) simd_float4 strokeColor;

@property (nonatomic, assign) BOOL strokeEnabled;

@property (nonatomic, strong) MTIImage *inputOriginImage;

@property (nonatomic, strong) MTIImage *inputFilterImage;

@end


@interface FDKMEdgeDetectionStrokeFilter: NSObject <MTIFilter>

@property (nonatomic, assign) int strokeRadius;

@property (nonatomic, assign) simd_float4 strokeColor;

@property (nonatomic, assign) float threshold;

@property (nonatomic, assign) BOOL strokeEnabled;

@property (nonatomic, strong) MTIImage *inputOriginImage;

@property (nonatomic, strong) MTIImage *inputMaskImage;

@end

NS_ASSUME_NONNULL_END
