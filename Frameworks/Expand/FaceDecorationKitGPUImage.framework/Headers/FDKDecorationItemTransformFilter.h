//
//  FDKDecorationItemTransformFilter.h
//  Pods
//
//  Created by YuAo on 3/15/17.
//
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

@interface FDKDecorationItemTransformFilter : GPUImageFilter

@property (nonatomic) CGPoint decorationCenter;

@property (nonatomic) CGSize decorationSize;

@property (nonatomic) CGFloat decorationRotation;

@property (nonatomic) CGFloat opacity;

@property (nonatomic) BOOL removesPremultipliedAlpha;

@property (nonatomic) CGSize renderSize;

@property (nonatomic) BOOL textureBatchEnabled;

@property (nonatomic) CGRect decorationTextureFrame;

@property (nonatomic) BOOL decorationTextureRorateEnabled;

@end

NS_ASSUME_NONNULL_END
