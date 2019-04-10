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

#import "FDKAudioEnginePlayer.h"
#import "FDKAudioPlayer.h"
#import "FDKAudioPlayerProtocol.h"
#import "FDKBaseEffectItem.h"
#import "FDKBeautySettings.h"
#import "FDKDecoration.h"
#import "FDKDecorationBlending.h"
#import "FDKDecorationFilterUpdating.h"
#import "FDKDecorationItem.h"
#import "FDKFaceStickerAnimation.h"
#import "FDKFacialDistortion.h"
#import "FDKFacialMask.h"
#import "FDKFacialMaskTriangulation.h"
#import "FDKFilterEffect.h"
#import "FDKLandmarksConverter.h"
#import "FDKProtocols.h"
#import "FDKPVRTexture.h"
#import "FDKResourceCache.h"
#import "FDKSoundableFilter.h"
#import "FDKTriggerable.h"
#import "FDKTriggerTip.h"

FOUNDATION_EXPORT double FaceDecorationKitVersionNumber;
FOUNDATION_EXPORT const unsigned char FaceDecorationKitVersionString[];

