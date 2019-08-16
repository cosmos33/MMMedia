//
//  FDKGlitchyDistortionFilterGroup.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

/**
 蓝色故障
 */
@interface FDKGlitchyDistortionFilterGroup : GPUImageFilterGroup

- (instancetype)initWithImagePath:(NSString *)imagePath;

- (instancetype)initWithImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
