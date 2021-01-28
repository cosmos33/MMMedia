//
//  FDKMCrosshatchFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2018/4/24.
//
@import MetalPetal;
@import FaceDecorationKit;
#import "FDKMUnaryFilterProtocol.h"
@interface FDKMCrosshatchFilter : MTIUnaryImageRenderingFilter<FDKMUnaryFilterProtocol>
- (instancetype)initWithEffectItem:(FDKCrosshatchEffectItem *)item;
@property (nonatomic, assign) float amount;
@end
