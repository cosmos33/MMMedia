//
//  GPUImageOutputExtensions.h
//  MLGPUImageUtilities
//
//  Created by YuAo on 12/09/2017.
//

#import <GPUImage/GPUImage.h>

@interface GPUImageOutput (MLExtensions)

@property (nonatomic,class) BOOL ml_preventsInputFrameBufferSetOnAddTarget;

@end

