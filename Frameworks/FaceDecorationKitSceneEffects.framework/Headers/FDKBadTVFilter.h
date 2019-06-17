//
//  FDKBadTVFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/23.
//

#import "FDKShaderToyFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKBadTVFilter : FDKShaderToyFilter

@property (nonatomic, assign) CGFloat thickDistort;
@property (nonatomic, assign) CGFloat fineDistort;
@property (nonatomic, assign) CGFloat rollSpeed;

@end

NS_ASSUME_NONNULL_END
