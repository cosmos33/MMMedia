//
//  FDKTiltFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/25.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKTiltFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat amount;

@property (nonatomic, assign) CGFloat position;

@end

NS_ASSUME_NONNULL_END
