//
//  FDKBWReliefFilterGroup.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/25.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

/**
 黑白浮雕
 */
@interface FDKBWReliefFilterGroup : GPUImageFilterGroup

- (instancetype)initWithImagePath:(NSString *)imagePath;

- (instancetype)initWithImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
