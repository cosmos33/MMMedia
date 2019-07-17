//
//  FDKVignetteFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKVignetteFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat amount;
@property (nonatomic, assign) CGFloat darkness;

@end

NS_ASSUME_NONNULL_END
