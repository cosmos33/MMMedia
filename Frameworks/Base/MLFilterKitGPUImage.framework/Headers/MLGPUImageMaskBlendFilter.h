//
//  MLGPUImageMaskBlendFilter.h
//  Pods
//
//  Created by chenyi on 17/3/16.
//
//

@import GPUImage;

//overlay at texture 0
//alphaMask at texture 1
//background at texture 2

typedef NS_ENUM(NSInteger, MLGPUImageMaskBlendComponent) {
    MLGPUImageMaskBlendComponentAlpha,
    MLGPUImageMaskBlendComponentRed
};

@interface MLGPUImageMaskBlendFilter : GPUImageThreeInputFilter

@property (nonatomic) MLGPUImageMaskBlendComponent maskComponent;

@end
