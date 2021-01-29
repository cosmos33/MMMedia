//
//  FDKOldFilmFilterGroup.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

#import <GPUImage/GPUImage.h>

NS_ASSUME_NONNULL_BEGIN

/**
 白色胶片
 */
@interface FDKOldFilmFilterGroup : GPUImageFilterGroup

- (instancetype)initWithImagePath:(NSString *)imagePath;

- (instancetype)initWithImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
