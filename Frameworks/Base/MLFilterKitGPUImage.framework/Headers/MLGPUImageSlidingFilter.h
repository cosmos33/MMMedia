//
//  MLGPUImageHorizontalSlidingFilter.h
//  Pods
//
//  Created by YuAo on 1/13/17.
//
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

@interface MLGPUImageSlidingFilter : GPUImageFilterGroup

@property (nonatomic) double offset; //-1...0...1

@property (nonatomic,strong,nullable) GPUImageOutput<GPUImageInput> *leftFilter;
@property (nonatomic,strong,nullable) GPUImageOutput<GPUImageInput> *rightFilter;

- (instancetype)init NS_UNAVAILABLE;

@end

@interface MLGPUImageHorizontalSlidingFilter : MLGPUImageSlidingFilter

- (instancetype)init;

@end

@interface MLGPUImageVerticalSlidingFilter : MLGPUImageSlidingFilter

- (instancetype)init;

@end

NS_ASSUME_NONNULL_END
