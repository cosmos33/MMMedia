//
//  FDKMMirrorFlipFilter.h
//  FaceDecorationKit+MetalPetal
//
//  Created by 杨乃川 on 2018/11/8.
//

#import <Foundation/Foundation.h>
#import "FDKMUnaryFilterProtocol.h"
#import <FaceDecorationKit/FaceDecorationKit.h>
#import <MetalPetal/MetalPetal.h>
@interface FDKMMirrorFlipFilter : MTIUnaryImageRenderingFilter<FDKMUnaryFilterProtocol>
- (instancetype)initWithEffectItem:(FDKMirrorFlipEffectItem *)item;
@end
