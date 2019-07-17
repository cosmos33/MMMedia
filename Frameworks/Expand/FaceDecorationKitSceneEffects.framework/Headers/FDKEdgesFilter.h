//
//  FDKEdgesFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/19.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKEdgesFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat amount;

@property (nonatomic, assign) CGFloat passthru;

@end

NS_ASSUME_NONNULL_END
