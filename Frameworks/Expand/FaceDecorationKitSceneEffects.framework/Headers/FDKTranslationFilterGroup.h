//
//  FDKTranslationFilterGroup.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

#import <GPUImage/GPUImage.h>

NS_ASSUME_NONNULL_BEGIN

/**
 左滚胶片
 */
@interface FDKTranslationFilterGroup : GPUImageFilterGroup

- (instancetype)initWithImagePath:(NSString *)imagePath;

@end

NS_ASSUME_NONNULL_END
