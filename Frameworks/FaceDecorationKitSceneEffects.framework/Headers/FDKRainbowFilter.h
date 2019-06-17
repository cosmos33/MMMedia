//
//  FDKRainbowFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/19.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

/**
 彩虹🌈
 */
@interface FDKRainbowFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat amount;
@property (nonatomic, assign) CGFloat offset;

@end

NS_ASSUME_NONNULL_END
