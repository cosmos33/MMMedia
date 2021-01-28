//
//  GPUImagePassthroughFilter.h
//  Pods
//
//  Created by YuAo on 3/8/17.
//
//

#import <GPUImage/GPUImage.h>

@interface MLGPUImagePassthroughFilter : GPUImageFilter

@end

@interface MLGPUImageFreezeFrameFilter : MLGPUImagePassthroughFilter

@property (atomic) BOOL freezed;

- (void)updateFreezedFrame;

@end
