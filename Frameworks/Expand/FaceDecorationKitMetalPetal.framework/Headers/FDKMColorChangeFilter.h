//
//  FDKMColorChangeFilter.h
//  FaceDecorationKit+MetalPetal
//
//  Created by 杨乃川 on 2018/10/27.
//

#import <FaceDecorationKit/FaceDecorationKit.h>
#import <MetalPetal/MetalPetal.h>

#import "FDKMUnaryFilterProtocol.h"
@interface FDKMColorChangeFilter : MTIUnaryImageRenderingFilter<FDKMUnaryFilterProtocol>
- (instancetype)initWithEffectItem:(FDKChangeColorEffectItem *)item;
@property (nonatomic, assign) float amont;
@end
