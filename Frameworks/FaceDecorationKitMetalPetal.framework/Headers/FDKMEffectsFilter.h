//
//  FDKMEffectFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2018/4/10.
//

#import <Foundation/Foundation.h>
#import "FDKMUnaryFilterProtocol.h"
@import MetalPetal;
@class FDKFilterEffect;
@interface FDKMEffectsFilter : NSObject<MTIUnaryFilter, FDKMUnaryFilterProtocol>
@property (nonatomic) CGFloat intensity;
- (instancetype)initWithFilterEffects:( NSArray <FDKFilterEffect *> *)filterEffects;
@end

