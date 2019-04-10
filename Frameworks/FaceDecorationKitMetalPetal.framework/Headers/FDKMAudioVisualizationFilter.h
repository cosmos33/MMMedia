//
//  FDKMAudioVisualizationFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2017/11/29.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "FDKMUnaryFilterProtocol.h"
@import MetalPetal;
NS_ASSUME_NONNULL_BEGIN

@interface FDKMAudioVisualizationFilter : MTIUnaryImageRenderingFilter<FDKMUnaryFilterProtocol>
@property (nonatomic) CMTime frameTime;
@property (nonatomic, assign) CGSize renderSize;
@end

NS_ASSUME_NONNULL_END
