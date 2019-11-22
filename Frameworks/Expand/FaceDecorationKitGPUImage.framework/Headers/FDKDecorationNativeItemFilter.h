//
//  FDKDecorationNativeItemFilter.h
//  FaceDecorationKit+GPUImage
//
//  Created by momo783 on 31/01/2018.
//

#import <GPUImage/GPUImage.h>
#import <FaceDecorationKit/FaceDecorationKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FDKDecorationNativeItemFilter : GPUImageFilterGroup

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithItem:(FDKDecorationItem *)item;

+ (void)registerRenderBinderClass:(Class<FDKNativeBinder>)binderClass;

@end

@interface FDKDecorationNativeItemFilter (FDKDecorationFilterUpdating) <FDKDecorationFilterUpdating>

@end

NS_ASSUME_NONNULL_END
