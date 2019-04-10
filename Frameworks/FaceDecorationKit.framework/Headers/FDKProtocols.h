//
//  FDKProtocols.h
//  Pods
//
//  Created by YuAo on 9/7/16.
//
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreVideo/CoreVideo.h>
#import <UIKit/UIKit.h>

@class FDKBeautySettings,FDKFacialDistortion;

NS_ASSUME_NONNULL_BEGIN

@protocol FDKFaceFeature <NSObject>

@property (readonly) NSArray<NSValue *> *landmarks;

@property (readonly) CGFloat rollAngle;

@property (readonly) CGRect bounds;

@end

@protocol FDKObjectFeature <NSObject>

@property (readonly,copy) NSString *type;

@property (readonly) CGRect bounds;

@optional
@property (readonly) CGFloat roll;

@end

@protocol FDKBodySegmentationData <NSObject>

@property (readonly,copy) NSData *data;

@property (readonly) size_t width;

@property (readonly) size_t height;

@end

@protocol FDKFacialExpression <NSObject>

@property (nonatomic,readonly) NSUInteger expressionType;

@end

@protocol FDKFaceWarpResult <NSObject>

@property (nonatomic,copy,readonly) NSData *sourceVerticesData;
@property (nonatomic,copy,readonly) NSData *destinationVerticesData;

@property (nonatomic,copy,readonly) NSArray<id<FDKFaceFeature>> *faceFeatures;

@end

@protocol FDKFaceWarper <NSObject>

- (id<FDKFaceWarpResult>)warpWithFaceFeatures:(NSArray *)faceFeatures
                               beautySettings:(FDKBeautySettings *)beautySettings
                                    frameSize:(CGSize)frameSize;

- (id<FDKFaceWarpResult>)warpWithFaceFeatures:(NSArray *)faceFeatures
                           distortionSettings:(FDKFacialDistortion *)distortionSettings
                                    frameSize:(CGSize)frameSize;

@end

@protocol FDKAudioPrism <NSObject>

@property (nonatomic,readonly) CVPixelBufferRef spectrumPixelBufferRepresentation CF_RETURNS_NOT_RETAINED;

@end

@protocol FDK3DRendering <NSObject>

@property (nonatomic) BOOL multisampleEnabled;

- (instancetype)initWithModelURL:(NSURL *)modelURL;

- (nullable CVPixelBufferRef)renderWithInputBuffer:(nullable CVPixelBufferRef)pixelBuffer inputframeSize:(CGSize)inputFrameSize;

- (nullable CVPixelBufferRef)renderWithFaceFeature:(nullable id<FDKFaceFeature>)faceFeature
                                 facialExpressions:(nullable NSArray<id<FDKFacialExpression>> *)facialExpressions
                                     objectFeature:(nullable id<FDKObjectFeature>)objectFeature
                                    inputFrameSize:(CGSize)inputFrameSize API_DEPRECATED("Use renderWithInputBuffer:inputframeSize instead", ios(8.0, 9.0));

@end

@protocol FDKNativeBinder <NSObject>

@property (readonly) UIView *renderBindView;

@property (readonly) CGSize previewSize;

@property (readonly) CGRect renderRectInPreview;

- (instancetype)initWithModelURL:(NSURL *)modelURL binderID:(NSString *)renderID;

@end

@protocol FDKBodyFeature <NSObject>
@property (nonatomic,copy,readonly) NSArray *joints;
@end

@protocol FDKBodyWarpResult <NSObject>

@property (nonatomic,copy,readonly) NSData *sourceVerticesData;
@property (nonatomic,copy,readonly) NSData *destinationVerticesData;

@property (nonatomic,copy,readonly) NSArray<id<FDKBodyFeature>> *bodyFeatures;

@end

@protocol FDKBodyWaper<NSObject>
- (id<FDKBodyWarpResult>)warpWithBodyFeatures:(NSArray *)bodyFeatures
                               beautySettings:(FDKBeautySettings *)beautySettings
                                    frameSize:(CGSize)frameSize;
@end

@protocol FDKMangaWarpResult <NSObject>

@property (nonatomic, copy, readonly)  NSArray<NSValue *> *landmarks96Plus4CornerPoints;

@end

@protocol FDKMangaWarper <NSObject>

- (id<FDKMangaWarpResult>)warpWithFaceFeatures:(NSArray *)facefeatures
                                  mangaTexture:(UIImage *)texture
                                mangaLandmarks:(NSArray *)mangaLandmarks
                                     frameSize:(CGSize)frameSize;

@end

NS_ASSUME_NONNULL_END
