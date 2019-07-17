//
//  MDGPUImageMovieRenderOperation.h
//  MomoChat
//
//  Created by YuAo on 11/12/16.
//  Copyright © 2016 wemomo.com. All rights reserved.
//

@import GPUImage;

@class MLGPUImageMovie;

@interface MLGPUImageMovieRenderOperation : NSOperation

@property (nonatomic,copy) void (^renderingStartedHandler)(void);

- (instancetype)initWithMovie:(MLGPUImageMovie *)movie filter:(GPUImageOutput<GPUImageInput> *)filter renderTarget:(id<GPUImageInput>)target;

@end
