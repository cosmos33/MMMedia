//
//  FDKMirrorFlipFilter.h
//  FaceDecorationKit+GPUImage
//
//  Created by sunfei on 2019/4/12.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, FDKMirrorFlipType) {
    FDKMirrorFlipTypeNone,
    FDKMirrorFlipTypeHorizontal,
    FDKMirrorFlipTypeVertical,
    FDKMirrorFlipType4
};

@interface FDKMirrorFlipFilter : GPUImageFilter

@property (nonatomic, assign) FDKMirrorFlipType type;

@end

NS_ASSUME_NONNULL_END
