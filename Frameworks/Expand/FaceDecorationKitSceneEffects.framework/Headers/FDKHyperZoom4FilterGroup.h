//
//  FDKHyperZoom4FilterGroup.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/24.
//

#import <GPUImage/GPUImage.h>

NS_ASSUME_NONNULL_BEGIN

/**
 闪现4格
 */
@interface FDKHyperZoom4FilterGroup : GPUImageFilterGroup

- (instancetype)initWithImagePath:(NSString *)imagePath;

- (instancetype)initWithImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
