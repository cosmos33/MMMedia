//
//  WLGPUImageVibranceFilter.h
//  Pods
//
//  Created by YuAo on 4/16/14.
//
//

#import <GPUImage/GPUImage.h>

@interface WLGPUImageVibranceFilter : GPUImageFilter

@property (nonatomic) CGFloat amount;

@property (nonatomic) BOOL avoidSaturatingSkinTones;

@end
