//
//  MLGPUImageRawDataInput.h
//  Pods
//
//  Created by YuAo on 1/13/17.
//
//

@import GPUImage;

@interface MLGPUImageRawDataInput : GPUImageOutput

- (id)initWithBytes:(const GLubyte *)bytesToUpload size:(CGSize)imageSize pixelFormat:(GPUPixelFormat)pixelFormat type:(GPUPixelType)pixelType;

- (void)uploadBytes:(const GLubyte *)bytesToUpload size:(CGSize)imageSize pixelFormat:(GPUPixelFormat)pixelFormat type:(GPUPixelType)pixelType;

- (void)processData;

- (void)processDataForTimestamp:(CMTime)frameTime;

- (CGSize)outputImageSize;

@end
