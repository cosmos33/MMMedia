//
//  MLGPUImageCoreImageFilter.h
//  Pods
//
//  Created by YuAo on 08/04/2017.
//
//

@import GPUImage;
@import CoreImage;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT CIContext * MLGPUImageGetCoreImageContext(void);

@interface MLGPUImageCoreImageFilter : GPUImageFilter

@property (atomic, strong, nullable) CIFilter *filter;

@property (atomic, copy, nullable) CIImage *(^processor)(CIImage *input);

@property (atomic) BOOL clampAndCropImage;

@end

@interface MLGPUImageCoreImageTwoInputFilter : GPUImageTwoInputFilter

@property (atomic, copy, nullable) CIImage *(^processor)(CIImage *first, CIImage *second);

@end

NS_ASSUME_NONNULL_END
