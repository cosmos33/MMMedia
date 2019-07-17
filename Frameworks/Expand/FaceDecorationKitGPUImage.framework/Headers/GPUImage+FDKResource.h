//
//  GPUImagePicture+FDKResource.h
//  FaceDecorationKitDemo
//
//  Created by YuAo on 6/20/16.
//  Copyright © 2016 Momo. All rights reserved.
//

@import GPUImage;
@import FaceDecorationKit;

NS_ASSUME_NONNULL_BEGIN

@protocol FDKGPUImageResource <FDKResource>

- (void)removeAllTargets;

- (void)addTarget:(id<GPUImageInput>)newTarget;

- (void)processResource;

+ (BOOL)canInitWithContentsOfURL:(NSURL *)URL;

@optional

- (void)processResourceForFrameTime:(CMTime)frameTime;

@end

@interface GPUImagePicture (FDKGPUImageResource) <FDKGPUImageResource>

@end

@interface FDKAspectFitResizeFilter : GPUImageFilter

@end

NS_ASSUME_NONNULL_END
