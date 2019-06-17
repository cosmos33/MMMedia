//
//  FDKBrightnessFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKBrightnessFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat contrast;
@property (nonatomic, assign) CGFloat brightness;

@end

NS_ASSUME_NONNULL_END
