//
//  MLGPUImagePixelBufferOutput.h
//  MomoLive
//
//  Created by YuAo on 7/14/16.
//  Copyright © 2016 wemomo.com. All rights reserved.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

typedef void (^MLGPUImageCVPixelBufferOutputCallback)(CVPixelBufferRef pixelBuffer, CMTime frameTime);

@interface MLGPUImageCVPixelBufferOutput : NSObject <GPUImageInput>

@property (atomic) BOOL forcesGLFinish;

//do not use GPUImage's queue here.
- (void)setPixelBufferOutputCallback:(nullable MLGPUImageCVPixelBufferOutputCallback)callback queue:(nullable dispatch_queue_t)queue;

@property (nonatomic,copy) void (^endProcessingSignalHandler)(void);

@end

NS_ASSUME_NONNULL_END
