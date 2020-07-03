//
//  CXSkinSmoothingFilter.h
//  Pods
//
//  Created by Yu Ao on 26/01/2018.
//

#import <Foundation/Foundation.h>
#import "CXSkinSmoothingSettings.h"
#import "CXFilterInputType.h"
@import MomoCV;
@import MetalPetal;

NS_ASSUME_NONNULL_BEGIN

@interface CXSkinSmoothingFilterInputParameter: NSObject

@property (nonatomic, copy, readonly) MMFaceFeature *faceFeature;

@property (nonatomic, copy, readonly) CXSkinSmoothingSettings *settings;

- (instancetype)initWithFaceFeature:(MMFaceFeature *)faceFeature settings:(CXSkinSmoothingSettings *)settings;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

@end

typedef NS_ENUM(NSUInteger, CXSkinSmoothingFilterVersion) {
    CXSkinSmoothingFilterVersionA = 0,
    CXSkinSmoothingFilterVersionB = 1,
    CXSkinSmoothingFilterVersionDefault = CXSkinSmoothingFilterVersionB
};

@interface CXSkinSmoothingFilter : NSObject <MTIUnaryFilter>

@property (nonatomic, assign) BOOL disable;

@property (nonatomic) CXFilterInputType inputType;

@property (nonatomic, copy) NSArray<CXSkinSmoothingFilterInputParameter *> *parameters;

@property (nonatomic) BOOL processesFaceAreaOnly;

@property (nonatomic) float smoothingAmountForInputWithoutFaces;

@property (nonatomic) float maximumSmoothingAmountForBackground;

@property (nonatomic, class, readwrite) CXSkinSmoothingFilterVersion filterVersion;

@property (nonatomic, assign) BOOL skinEnhanceEnable;

@end

@interface CXSkinQuality: NSObject

@property (nonatomic, readonly) float value;

@property (nonatomic, strong, readonly) MTIImage *debugImage;

@end

@interface CXSkinQualityAnalyzer: NSObject

- (NSArray<CXSkinQuality *> *)analyzeFacesInPixelBuffer:(CVPixelBufferRef)pixelBuffer faceFeatures:(NSArray<MMFaceFeature *> *)faceFeatures;

@end

NS_ASSUME_NONNULL_END
