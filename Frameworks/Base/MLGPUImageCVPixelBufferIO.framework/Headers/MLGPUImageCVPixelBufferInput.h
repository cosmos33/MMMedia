//
//  YUGPUImageCVPixelBufferInput.h
//  Pods
//
//  Created by YuAo on 3/28/16.
//
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MLGPUImageCVPixelBufferInputRenderingAPI) {
    MLGPUImageCVPixelBufferInputRenderingAPIDefault,
    MLGPUImageCVPixelBufferInputRenderingAPICoreImage
};

@interface MLGPUImageCVPixelBufferInput : GPUImageOutput

@property (nonatomic) MLGPUImageCVPixelBufferInputRenderingAPI renderingAPI;

- (BOOL)processPixelBuffer:(CVPixelBufferRef)pixelBuffer;

- (BOOL)processPixelBuffer:(CVPixelBufferRef)pixelBuffer frameTime:(CMTime)frameTime;

/// Passing a `CVPixelBuffer` object to `GPUImage`'s filter pipeline.
///
/// @param pixelBuffer The `CVPixelBuffer` to be processed.
/// @param frameTime The presentation time of the `pixelBuffer`.
/// @param prepareForProcessing A block object to be executed when the processing is about to begin. This block will be called on the internal processing queue.
/// @param completion A block object to be executed when the processing is complete. This block will be called on the internal processing queue.
///
/// @returns Whether the process request is accepted.
///
/// @note This method will return `NO` when the receiver is busy processing another pixel buffer.
///
- (BOOL)processPixelBuffer:(CVPixelBufferRef)pixelBuffer
                 frameTime:(CMTime)frameTime
      prepareForProcessing:(nullable void (^)(void))prepareForProcessing
                completion:(nullable void (^)(void))completion;

@property (readonly, getter=isReadyForMorePixelBuffer) BOOL readyForMorePixelBuffer;

- (void)waitUntilReadyForMorePixelBuffer;

@end

NS_ASSUME_NONNULL_END


#import "MLGPUImageCVPixelBufferOutput.h"

NS_ASSUME_NONNULL_BEGIN

@interface MLGPUImageCVPixelBufferInput (MLGPUImageCVPixelBufferOutput)

- (BOOL)processPixelBuffer:(CVPixelBufferRef)pixelBuffer
                 frameTime:(CMTime)frameTime
         pixelBufferOutput:(MLGPUImageCVPixelBufferOutput *)pixelBufferOutput
            outputCallback:(MLGPUImageCVPixelBufferOutputCallback)outputCallback
       outputCallbackQueue:(nullable dispatch_queue_t)outputCallbackQueue;

@end

NS_ASSUME_NONNULL_END
