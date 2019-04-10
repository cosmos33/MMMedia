//
//  MLGPUImagePictureExtensions.h
//  Pods
//
//  Created by YuAo on 12/19/16.
//
//

@import GPUImage;

@interface MLGPUImagePictureUtilities : NSObject

+ (BOOL)processImageForGPUImagePicture:(GPUImagePicture *)picture waitUntilFinished:(BOOL)waitUntilFinished;

@end
