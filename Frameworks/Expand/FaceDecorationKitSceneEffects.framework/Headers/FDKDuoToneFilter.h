//
//  FDKDuoToneFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/19.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKDuoToneFilter : FDKShaderToyFilter

@property (nonatomic) GPUVector3 lightColor;

@property (nonatomic) GPUVector3 darkColor;

@end

NS_ASSUME_NONNULL_END
