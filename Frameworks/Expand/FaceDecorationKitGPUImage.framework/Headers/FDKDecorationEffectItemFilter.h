//
//  FDKDecorationEffectItemFilter.h
//  FaceDecorationKit
//
//  Created by sunfei on 2018/10/26.
//

#import <GPUImage/GPUImage.h>
#import <FaceDecorationKit/FaceDecorationKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FDKDecorationEffectItemFilter : GPUImageFilterGroup <FDKDecorationFilterUpdating>

- (instancetype)initWithEffectItems:(NSArray<FDKBaseEffectItem *> *)effectItems;

@end

NS_ASSUME_NONNULL_END
