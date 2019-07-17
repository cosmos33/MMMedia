//
//  FDKMEffectItemsFilter.h
//  FaceDecorationKit+MetalPetal
//
//  Created by 杨乃川 on 2018/10/27.
//

#import <Foundation/Foundation.h>
#import "FDKMUnaryFilterProtocol.h"
@import MetalPetal;
@import FaceDecorationKit;
@interface FDKMEffectItemsFilter : NSObject<MTIUnaryFilter, FDKMUnaryFilterProtocol>
- (instancetype)initWithEffectItems:(NSArray <FDKBaseEffectItem *> *)items NS_DESIGNATED_INITIALIZER;
- (void)updateWithRequest:(FDKDecorationFilterUpdateRequest *)request;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;
@end
