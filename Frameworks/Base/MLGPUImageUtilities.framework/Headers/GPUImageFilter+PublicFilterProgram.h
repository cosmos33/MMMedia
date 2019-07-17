//
//  GPUImageFilter+PublicFilterProgram.h
//  Pods
//
//  Created by YuAo on 1/13/17.
//
//

@import GPUImage;

@interface GPUImageFilter (PublicFilterProgram)

@property (nonatomic, strong, readonly) GLProgram *ml_filterProgram;

@end
