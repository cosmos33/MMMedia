//
//  MLGPUImageLookupFilter.h
//  Pods
//
//  Created by chenyi on 17/1/13.
//
//

@import GPUImage;

@interface MLGPUImageLookupFilter : GPUImageTwoInputFilter

@property (readwrite, nonatomic) CGFloat intensity;

@property (readwrite, nonatomic) NSInteger lookupTableDimension;

@end
