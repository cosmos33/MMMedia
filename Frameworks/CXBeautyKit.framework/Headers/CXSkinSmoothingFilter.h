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

@interface CXSkinSmoothingFilter : NSObject <MTIUnaryFilter>

@property (nonatomic) CXFilterInputType inputType;

@property (nonatomic, copy) NSArray<CXSkinSmoothingFilterInputParameter *> *parameters;

@property (nonatomic) BOOL processesFaceAreaOnly;

@property (nonatomic, assign) float skinSmoothingFactorWithoutFaces;

@end

@interface CXSkinQuality: NSObject

@property (nonatomic, readonly) float value;

@property (nonatomic, strong, readonly) MTIImage *debugImage;

@end

@interface CXSkinQualityAnalyzer: NSObject

- (NSArray<CXSkinQuality *> *)analyzeFacesInPixelBuffer:(CVPixelBufferRef)pixelBuffer faceFeatures:(NSArray<MMFaceFeature *> *)faceFeatures;

@end

NS_ASSUME_NONNULL_END
