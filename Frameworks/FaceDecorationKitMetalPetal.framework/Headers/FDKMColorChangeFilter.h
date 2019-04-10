//
//  FDKMColorChangeFilter.h
//  FaceDecorationKit+MetalPetal
//
//  Created by 杨乃川 on 2018/10/27.
//

@import FaceDecorationKit;
@import MetalPetal;

#import "FDKMUnaryFilterProtocol.h"
@interface FDKMColorChangeFilter : MTIUnaryImageRenderingFilter<FDKMUnaryFilterProtocol>
- (instancetype)initWithEffectItem:(FDKChangeColorEffectItem *)item;
@property (nonatomic, assign) float amont;
@end
