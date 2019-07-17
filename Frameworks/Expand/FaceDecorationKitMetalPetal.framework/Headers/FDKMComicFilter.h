//
//  FDKMComicFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2018/4/26.
//

#import <MetalPetal/MetalPetal.h>
#import "FDKMUnaryFilterProtocol.h"
@interface FDKMComicFilter : MTIUnaryImageRenderingFilter<FDKMUnaryFilterProtocol>
@property (nonatomic, assign) float amount;
@end
