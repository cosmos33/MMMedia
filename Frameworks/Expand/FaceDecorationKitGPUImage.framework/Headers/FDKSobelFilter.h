//
//  FDKSobelFilter.h
//  Pods
//
//  Created by yi chen on 2017/8/8.
//
//

@import GPUImage;

@interface FDKSobelFilter : GPUImageFilter

@property (nonatomic, assign) float threshold;

@property (nonatomic, assign) BOOL sobelEnabled;

@end
