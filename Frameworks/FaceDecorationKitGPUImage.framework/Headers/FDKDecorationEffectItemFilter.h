//
//  FDKDecorationEffectItemFilter.h
//  FaceDecorationKit
//
//  Created by sunfei on 2018/10/26.
//

@import GPUImage;
@import FaceDecorationKit;

NS_ASSUME_NONNULL_BEGIN

@interface FDKDecorationEffectItemFilter : GPUImageFilterGroup

- (instancetype)initWithEffectItems:(NSArray<FDKBaseEffectItem *> *)effectItems;

@end

NS_ASSUME_NONNULL_END
