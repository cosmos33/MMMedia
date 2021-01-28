//
//  FDKMFacialMasksFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2017/12/19.
//

#import <Foundation/Foundation.h>
#import "FDKMUnaryFilterProtocol.h"
@import MetalPetal;
@import FaceDecorationKit;

@interface FDKMFacialMasksFilter : NSObject<MTIUnaryFilter, FDKMUnaryFilterProtocol>
- (instancetype)initWithFacialMasks:(NSArray <FDKFacialMask *>*)masks;

@property (nonatomic, strong) MTIImage *inputImage;

- (void)updateWithRequest:(FDKDecorationFilterUpdateRequest *)request;
@end
