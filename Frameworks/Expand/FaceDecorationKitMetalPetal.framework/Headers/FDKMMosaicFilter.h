//
//  FDKMMosaicFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2018/4/23.
//

#import <MetalPetal/MetalPetal.h>
#import <FaceDecorationKit/FaceDecorationKit.h>
#import "FDKMUnaryFilterProtocol.h"

@interface FDKMMosaicFilter : MTIUnaryImageRenderingFilter<FDKMUnaryFilterProtocol>
- (instancetype)initWithEffectItem:(FDKMosaicEffectItem *)item;
@property (nonatomic, assign) float amount;
@end
