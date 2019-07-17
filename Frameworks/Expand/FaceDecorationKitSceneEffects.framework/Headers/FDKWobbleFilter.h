//
//  FDKWobbleFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKWobbleFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat strength;

@property (nonatomic, assign) NSInteger size;

@end

NS_ASSUME_NONNULL_END
