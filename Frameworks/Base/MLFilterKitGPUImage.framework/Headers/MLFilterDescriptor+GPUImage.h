//
//  MLFilterDescriptor+GPUImage.h
//  Pods
//
//  Created by YuAo on 1/4/17.
//
//
#import <GPUImage/GPUImage.h>
#import <MLFilterKit/MLFilterKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef GPUImageOutput<GPUImageInput> * _Nullable (* MLFilterDescriptorGPUImageFilterProcessingUnitCreationCallback)(MLFilterProcessingUnit *unit);

@interface MLFilterDescriptor (GPUImage)

+ (void)registerGPUImageFilterProcessingUnitBuilder:(MLFilterDescriptorGPUImageFilterProcessingUnitCreationCallback)builder;

- (GPUImageFilterGroup<MLFilterUpdating> *)createGPUImageFilter;

+ (GPUImageFilterGroup *)createGPUImageFilterForProcessingUnit:(MLFilterProcessingUnit *)unit;

@end

@interface MLBlendMode (GPUImage)

- (nullable GPUImageTwoInputFilter *)createGPUImageFilter;

@end

NS_ASSUME_NONNULL_END
