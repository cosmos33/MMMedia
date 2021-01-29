//
//  FDKPsychedelicLondon2FilterGroup.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

#import <GPUImage/GPUImage.h>

NS_ASSUME_NONNULL_BEGIN

/**
 色彩扭曲
 */
@interface FDKPsychedelicLondon2FilterGroup : GPUImageFilterGroup

- (instancetype)initWithImagePath:(NSString *)imagePath;

- (instancetype)initWithImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
