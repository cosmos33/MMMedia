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

#import "CXBackgroundBlurFilter.h"
#import "CXBeautyUtility.h"
#import "CXDelaunayEffectFilter.h"
#import "CXFocusLensBlurFilter.h"
#import "CXJointBilateralUpsamplingFilter.h"
#import "CXMinMaxFromBuffer.h"
#import "CXMotionBlurFilter.h"
#import "CXQuadPixelateFilter.h"
#import "CXSegmentationEffectFilter.h"
#import "CXSwirlyBokehFilter.h"
#import "CXZoomBlurFilter.h"
#import "CXBeautyConfigurationAdapter.h"
#import "CXColorAdjustFilter.h"
#import "CXConfiguration.h"
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
#import "CXAutoLevelInfo.h"
#import "CXBeautyFilter.h"
#import "CXBodyAdjustmentFilter.h"
#import "CXBoxBlurFilter.h"
#import "CXColorEnhancementFilter.h"
#import "CXColorTemperatureFilter.h"
#import "CXFaceAdjustmentFilter.h"
#import "CXFaceDefectsRemovingTool.h"
#import "CXFaceGeometry.h"
#import "CXFaceIlluminationFilter.h"
#import "CXFilmGrainFilter.h"
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

