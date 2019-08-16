//
//  FDKRainbow4FilterGroup.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/24.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

/**
 彩虹4格
 */
@interface FDKRainbow4FilterGroup : GPUImageFilterGroup

- (instancetype)initWithImagePath:(NSString *)imagePath;

- (instancetype)initWithImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
