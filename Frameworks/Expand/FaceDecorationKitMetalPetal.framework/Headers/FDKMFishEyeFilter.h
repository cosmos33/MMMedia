//
//  FDKMFishEyeFilter.h
//  FaceDecorationKit+MetalPetal
//
//  Created by 杨乃川 on 2018/10/27.
//

@import MetalPetal;
@import FaceDecorationKit;
#import "FDKMUnaryFilterProtocol.h"
@interface FDKMFishEyeFilter : MTIUnaryImageRenderingFilter<FDKMUnaryFilterProtocol>
- (instancetype)initWithEffectItem:(FDKFishEyeEffectItem *)item;
@end
