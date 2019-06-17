//
//  FDKJitterFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/19.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

/**
 J抖
 */
@interface FDKJitterFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat amount;
@property (nonatomic, assign) CGFloat speed;

@end

NS_ASSUME_NONNULL_END
