//
//  FDKFacialMaskGenerator.h
//  Pods
//
//  Created by YuAo on 10/10/16.
//
//

@import GPUImage;

@protocol FDKFaceFeature;

NS_ASSUME_NONNULL_BEGIN

@interface FDKFacialMaskGenerator : GPUImageFilter

@property (nonatomic,strong,nullable) GPUImagePicture *maskTexture;

@property (atomic,copy,nullable) NSArray<NSValue *> *maskLandmarks;

@property (atomic,copy,nullable) NSArray<NSValue *> *landmarks;

@property (nonatomic) CGFloat maskOpacity;

@property (nonatomic) BOOL maskHasPremultipliedAlpha;

@property (nonatomic) BOOL maskDisabled;

- (NSInteger)numberOfTriangles;
- (NSInteger const *)maskTriangulationIndexes;
- (NSInteger)numberOfLandmarks;

@end

@interface FDKFacialMaskFilter : GPUImageFilterGroup

@property (nonatomic,strong,nullable) GPUImagePicture *maskTexture;

@property (nonatomic,copy,nullable) NSArray<NSValue *> *maskLandmarks;

- (void)setLandmarks:(nullable NSArray<NSValue *> *)landmarks inputFrameSize:(CGSize)inputFrameSize;

@property (nonatomic) CGFloat maskOpacity;

@property (nonatomic) BOOL maskHasPremultipliedAlpha;

@property (nonatomic) BOOL maskDisabled;

- (__kindof FDKFacialMaskGenerator *)createMaskGenerator;
- (__kindof GPUImageTwoInputFilter *)createBlendFilter;

@end

NS_ASSUME_NONNULL_END

@import FaceDecorationKit;

NS_ASSUME_NONNULL_BEGIN

@interface FDKFacialMaskFilter (FDKDecorationFilterUpdating) <FDKDecorationFilterUpdating>

+ (instancetype)filterWithFacialMask:(FDKFacialMask *)mask;

@property (nonatomic, readonly) FDKMaskModel *maskModel;

@end

NS_ASSUME_NONNULL_END
