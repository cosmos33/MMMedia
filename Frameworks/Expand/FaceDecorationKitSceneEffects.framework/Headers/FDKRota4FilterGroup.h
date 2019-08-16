//
//  FDKRota4FilterGroup.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/25.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

/**
 旋转4格
 */
@interface FDKRota4FilterGroup : GPUImageFilterGroup

- (instancetype)initWithImagePath:(NSString *)imagePath;

- (instancetype)initWithImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
