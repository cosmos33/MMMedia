//
//  FDKGlowFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/19.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKGlowFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat amount;
@property (nonatomic, assign) CGFloat size;
@property (nonatomic, assign) CGFloat darkness;

@end

NS_ASSUME_NONNULL_END
