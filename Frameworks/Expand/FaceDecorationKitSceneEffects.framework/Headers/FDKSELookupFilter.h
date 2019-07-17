//
//  FDKSELookupFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

#import <GPUImage/GPUImage.h>

NS_ASSUME_NONNULL_BEGIN

@interface FDKSELookupFilter : GPUImageFilterGroup

@property(readwrite, nonatomic) CGFloat intensity;

- (instancetype)initWithImage:(UIImage *)image;

- (void)setImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
