//
//  FDKMMotionCameraFilter.h
//  FaceDecorationKit+MetalPetal
//
//  Created by Yunc on 2020/2/21.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>
#import "FDKMUnaryFilterProtocol.h"
#import <FaceDecorationKit/FaceDecorationKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface FDKMMotionCameraFilter : MTIUnaryImageRenderingFilter<FDKMUnaryFilterProtocol, FDKDecorationFilterUpdating>
- (instancetype)initWithEffectItem:(FDKMotionCameraItem *)item;
@end

NS_ASSUME_NONNULL_END
