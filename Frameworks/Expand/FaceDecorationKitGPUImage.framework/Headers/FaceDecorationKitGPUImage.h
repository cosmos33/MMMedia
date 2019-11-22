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

#import "FDKAlphaMaskFilter.h"
#import "FDKBigMouthFilter.h"
#import "FDKBigMouthKPFilter.h"
#import "FDKBodyWarpFilter.h"
#import "FDKColorChangeFilter.h"
#import "FDKCrosshatchFilter.h"
#import "FDKDecoration3DItemFilter.h"
#import "FDKDecorationEffectItemFilter.h"
#import "FDKDecorationFilter.h"
#import "FDKDecorationItemFilter.h"
#import "FDKDecorationItemOverlayFilter.h"
#import "FDKDecorationItemSource.h"
#import "FDKDecorationItemTransformFilter.h"
#import "FDKDecorationNativeItemFilter.h"
#import "FDKFaceStickerFilter.h"
#import "FDKFaceWarpFilter.h"
#import "FDKFacialMaskFilter.h"
#import "FDKFilterEffectFilterGroup.h"
#import "FDKFishEyeFilter.h"
#import "FDKMangaFacialMaskFilter.h"
#import "FDKMirrorFlipFilter.h"
#import "FDKMirrorHorizontalFlipFilter.h"
#import "FDKMirrorVerticalFlipFilter.h"
#import "FDKMosaicFilter.h"
#import "FDKPVRPicture.h"
#import "FDKSketchEffectFilter.h"
#import "FDKSkinSmoothingFilter.h"
#import "FDKSkinWhitenFilter.h"
#import "FDKSobelFilter.h"
#import "FDKStrokeFilter.h"
#import "FDKWaterReflectionFilter.h"
#import "GPUImage+FDKResource.h"

FOUNDATION_EXPORT double FaceDecorationKitGPUImageVersionNumber;
FOUNDATION_EXPORT const unsigned char FaceDecorationKitGPUImageVersionString[];

