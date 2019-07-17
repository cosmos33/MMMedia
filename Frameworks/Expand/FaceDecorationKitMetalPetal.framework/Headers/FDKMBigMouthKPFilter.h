//
//  FDKMBigMouthFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2018/8/29.
//

@import MetalPetal;
#import "FDKMUnaryFilterProtocol.h"
@import FaceDecorationKit;
@interface FDKMBigMouthKPFilter : MTIUnaryImageRenderingFilter<FDKMUnaryFilterProtocol, FDKDecorationFilterUpdating>
- (instancetype)initWithEffectItem:(FDKBigMouthKPEffectItem *)item;
@property (nonatomic, assign) float amount;
@end
