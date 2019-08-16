//
//  FDKVCRDistortionFilterGroup.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/22.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

/**
 灵异电视
 */
@interface FDKVCRDistortionFilterGroup : GPUImageFilterGroup

- (instancetype)initWithImagePath:(NSString *)imagePath;

- (instancetype)initWithImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
