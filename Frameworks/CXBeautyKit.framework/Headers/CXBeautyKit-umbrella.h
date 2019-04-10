#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "CXBeautyConfigurationAdapter.h"
#import "CXDelaunayTriangulation.h"
#import "CXFaceIlluminationDetector.h"
#import "CXFaceTriangulation.h"
#import "CXMakeupResourceCache.h"
#import "CXPresets.h"
#import "MMFaceLandmarks2DCX.h"
#import "CXBeautyConfiguration.h"
#import "CXFaceAdjustments.h"
#import "CXInterpolable.h"
#import "CXMakeup.h"
#import "CXResourceLoader.h"
#import "CXSkinSmoothingSettings.h"
#import "CXTeethWhitenSettings.h"
#import "MMFaceFeatureCX.h"
#import "CXBeautyFilter.h"
#import "CXColorEnhancementFilter.h"
#import "CXFaceAdjustmentFilter.h"
#import "CXFaceGeometry.h"
#import "CXFilterInputType.h"
#import "CXMakeupFilter.h"
#import "CXMakeupLayerRender.h"
#import "CXMetalDebugFix.h"
#import "CXMPSGaussianBlurFallback.h"
#import "CXShaderTypes.h"
#import "CXSkinSmoothingFilter.h"
#import "CXSoftEdgeFilter.h"
#import "CXTextureCoordinates.h"
#import "CXVertices.h"

FOUNDATION_EXPORT double CXBeautyKitVersionNumber;
FOUNDATION_EXPORT const unsigned char CXBeautyKitVersionString[];

