//
//  FDKVHSStreakFilterGroup.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/22.
//

#import <GPUImage/GPUImage.h>

NS_ASSUME_NONNULL_BEGIN

/**
 彩烁
 */
@interface FDKVHSStreakFilterGroup : GPUImageFilterGroup

- (instancetype)initWithImagePath:(NSString *)imagePath;

- (instancetype)initWithImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
