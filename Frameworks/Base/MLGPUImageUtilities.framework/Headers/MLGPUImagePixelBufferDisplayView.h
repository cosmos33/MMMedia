//
//  MLGPUImagePixelBufferDisplayView.h
//  Pods
//
//  Created by YuAo on 08/04/2017.
//
//

@import UIKit;
#import <MLMediaFoundation/MLMediaFoundation.h>
#import <GPUImage/GPUImage.h>

@interface MLGPUImagePixelBufferDisplayView : UIView <MLPixelBufferDisplay>

//callbacks on GPUImage queue
- (void)presentPixelBuffer:(CVPixelBufferRef)pixelBuffer
                completion:(void (^)(void))completion
                   failure:(void (^)(void))failure;

@end
