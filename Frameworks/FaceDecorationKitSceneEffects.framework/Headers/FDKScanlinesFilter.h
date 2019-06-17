//
//  FDKScanlinesFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKScanlinesFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat count;
@property (nonatomic, assign) CGFloat linesAmount;
@property (nonatomic, assign) CGFloat noiseAmount;

@end

NS_ASSUME_NONNULL_END
