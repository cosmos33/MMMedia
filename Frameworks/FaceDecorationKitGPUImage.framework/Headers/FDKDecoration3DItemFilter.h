//
//  FDKDecoration3DItemFilter.h
//  Pods
//
//  Created by YuAo on 12/20/16.
//
//

@import GPUImage;
@import FaceDecorationKit;

NS_ASSUME_NONNULL_BEGIN

@interface FDKDecoration3DItemFilter : GPUImageFilterGroup

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithItem:(FDKDecorationItem *)item;

+ (void)registerRendererClass:(Class<FDK3DRendering>)rendererClass;

@end

@interface FDKDecoration3DItemFilter (FDKDecorationFilterUpdating) <FDKDecorationFilterUpdating>

@end

@interface FDKPremultipliedAlphaNormalBlendFilter : GPUImageTwoInputFilter

@end

NS_ASSUME_NONNULL_END
