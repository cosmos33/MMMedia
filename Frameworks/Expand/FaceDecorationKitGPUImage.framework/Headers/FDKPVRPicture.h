//
//  FDKPVRPicture.h
//  Pods
//
//  Created by momo783 on 05/09/2017.
//
//

@import GPUImage;
#import "GPUImage+FDKResource.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKPVRPicture : GPUImageOutput <FDKGPUImageResource>

@property (nonatomic, readonly) CGSize textureSize;

- (instancetype)initWithPvrTextureURL:(NSURL *)textureURL;
- (instancetype)initWithPvrTextureData:(NSData *)textureData;

- (void)processImage;

@end

NS_ASSUME_NONNULL_END
