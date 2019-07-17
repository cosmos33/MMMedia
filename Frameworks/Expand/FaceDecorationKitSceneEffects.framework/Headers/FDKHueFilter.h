//
//  FDKHueFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/19.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

/**
 色相
 */
@interface FDKHueFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat saturation;

@end

NS_ASSUME_NONNULL_END
