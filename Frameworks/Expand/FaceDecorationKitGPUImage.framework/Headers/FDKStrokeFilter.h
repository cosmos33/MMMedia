//
//  FDKStrokeFilter.h
//  Pods
//
//  Created by yi chen on 2017/8/8.
//
//

@import GPUImage;

//original image at index 0
//sobelFilter at index 1

@interface FDKStrokeFilter : GPUImageTwoInputFilter

@property (nonatomic, assign) int strokeRadius;

@property (nonatomic, readwrite) GPUVector4 strokeColor;

@property (nonatomic, assign) BOOL strokeEnabled;

@end

//original image at index 0
//segmentation mask at index 1

@interface FDKEdgeDetectionStrokeFilter : GPUImageFilterGroup

@property (nonatomic, assign) int strokeRadius;

@property (nonatomic, readwrite) GPUVector4 strokeColor;

@property (nonatomic, assign) float threshold;

@property (nonatomic, assign) BOOL strokeEnabled;

@end
