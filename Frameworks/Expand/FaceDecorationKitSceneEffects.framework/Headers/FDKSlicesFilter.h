//
//  FDKSlicesFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKSlicesFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat count;
@property (nonatomic, assign) CGFloat offset;
@property (nonatomic, assign) CGFloat speedV;

@end

NS_ASSUME_NONNULL_END
