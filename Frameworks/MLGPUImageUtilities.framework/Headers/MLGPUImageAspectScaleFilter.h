//
//  MLGPUImageAspectScaleFilter.h
//  Pods
//
//  Created by YuAo on 31/03/2017.
//
//

@import GPUImage;

typedef NS_ENUM(NSInteger, MLGPUImageAspectScaleMode) {
    MLGPUImageAspectScaleModeFit,
    MLGPUImageAspectScaleModeFill,
    MLGPUImageAspectScaleModeFillAndFitInAspectRatio
};

@interface MLGPUImageAspectScaleFilter : GPUImageFilter

@property (nonatomic) MLGPUImageAspectScaleMode mode;

@property (nonatomic) CGAffineTransform transformBeforeAspectScale;

@property (nonatomic) CGSize fitInAspectRatio;

@property (nonatomic) CGSize renderSize;

@end

