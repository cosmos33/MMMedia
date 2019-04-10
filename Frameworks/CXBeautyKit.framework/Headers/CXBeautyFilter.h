//
//  CXBeautyFilter.h
//  Pods
//
//  Created by Yu Ao on 26/01/2018.
//

#import <Foundation/Foundation.h>
#import "CXBeautyConfiguration.h"
#import "CXFilterInputType.h"
#import "CXMPSGaussianBlurFallback.h"

@import MomoCV;
@import MetalPetal;

@class CXAutoLevelInfo;

NS_ASSUME_NONNULL_BEGIN

@interface CXBeautyFilterFaceAdditionalInfo: NSObject <NSCopying>

@property (nonatomic, readonly) float leftEyeOpenProbability;
@property (nonatomic, readonly) float rightEyeOpenProbability;

@property (nonatomic, readonly) BOOL isLeftEyeClosed;
@property (nonatomic, readonly) BOOL isRightEyeClosed;

@property (nonatomic, readonly) MMFaceGender gender;

- (instancetype)init;

- (instancetype)initWithExpressions:(NSArray<MMFacialExpression *> *)expressions gender:(MMFaceGender)gender;

@end

@interface CXBeautyFilterInputParameter: NSObject

@property (nonatomic, copy, readonly) MMFaceFeature *faceFeature;

@property (nonatomic, copy, readonly) CXBeautyFilterFaceAdditionalInfo *faceAdditionalInfo;

@property (nonatomic, copy, readonly) CXBeautyConfiguration *configuration;

- (instancetype)initWithFaceFeature:(MMFaceFeature *)faceFeature faceAdditionalInfo:(CXBeautyFilterFaceAdditionalInfo *)faceAdditionalInfo configuration:(CXBeautyConfiguration *)configuration;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

@end

@interface CXBeautyMasks: NSObject <NSCopying>

@property (nonatomic, copy, nullable) MTIImage *lipsMask;

@end

@interface CXBeautyFilterOutput: NSObject <NSCopying>

@property (nonatomic, strong, readonly) MTIImage *image;

@property (nonatomic, readonly) CGRect contentsRect;

@end

@interface CXBeautyFilter : NSObject <MTIUnaryFilter>

@property (nonatomic, assign) BOOL enable;

@property (nonatomic) CXFilterInputType inputType;

@property (nonatomic, copy) NSArray<CXBeautyFilterInputParameter *> *parameters;

@property (nonatomic, copy) CXBeautyMasks *masks;

@property (nonatomic, strong, nullable) CXAutoLevelInfo *autoLevelInfo;

@property (nonatomic) float colorEnhancementAmount;

@property (nonatomic) BOOL skinSmoothingProcessesFaceAreaOnly;

@property (nonatomic, strong, nullable) MTIContext *context;

+ (Class<CXMPSGaussianBlurFallback>)MPSGaussianBlurFallback;

+ (void)registerMPSGaussianBlurFallback:(Class<CXMPSGaussianBlurFallback>)cls;

@property (nonatomic, readonly, nullable) CXBeautyFilterOutput *output;

@property (nonatomic, assign) float skinSmoothingFactorWithoutFaces;

@end

NS_ASSUME_NONNULL_END
