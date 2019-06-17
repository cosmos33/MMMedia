//
//  FDKSolarizeFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKSolarizeFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat brightness;
@property (nonatomic, assign) CGFloat power;
@property (nonatomic, assign) CGFloat colorize;

@end

NS_ASSUME_NONNULL_END
