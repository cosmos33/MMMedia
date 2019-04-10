//
//  FDKFilterEffect+GPUImage.h
//  Pods
//
//  Created by YuAo on 11/17/16.
//
//

@import FaceDecorationKit;
@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

@interface FDKFilterEffectFilterGroup : GPUImageFilterGroup

@property (nonatomic) CGFloat intensity;

- (instancetype)initWithFilterEffect:(FDKFilterEffect *)filterEffect;

@end

@interface FDKFilterEffectFilterGroup (FDKDecorationFilterUpdating) <FDKDecorationFilterUpdating>

@end

NS_ASSUME_NONNULL_END
