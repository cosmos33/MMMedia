//
//  FDKMFaceStickerFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2017/12/28.
//

#import <Foundation/Foundation.h>
#import "FDKMUnaryFilterProtocol.h"
@import MetalPetal;
@import FaceDecorationKit;
NS_ASSUME_NONNULL_BEGIN
@interface FDKMFaceStickerFilter : NSObject<MTIUnaryFilter, FDKMUnaryFilterProtocol>
@property (nonatomic, assign) NSInteger preferredFrameRate;
- (instancetype)initWithItem:(FDKDecorationItem *)item;

- (void)updateWithRequest:(FDKDecorationFilterUpdateRequest *)request;
@end
NS_ASSUME_NONNULL_END
