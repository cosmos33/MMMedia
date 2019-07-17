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

#import "MLBackgroundMusicEffect.h"
#import "MLCloseUpEffect.h"
#import "MLCoverEffect.h"
#import "MLDisplayEffect.h"
#import "MLFilterEffect.h"
#import "MLMediaEditingContent.h"
#import "MLMediaEffectRepresentation.h"
#import "MLMediaMetadataItem.h"
#import "MLMediaMetadataItemExtensions.h"
#import "MLMediaMetadataTrack.h"
#import "MLMediaSerializable.h"
#import "MLMediaSerializableValueTransformers.h"
#import "MLMetadataTrackEffect.h"
#import "MLMovieEditingStyle.h"
#import "MLMovieTitleEffect.h"
#import "MLPOIEffect.h"
#import "MLTimeRangeEffect.h"
#import "MLTimeRangeMappingEffect.h"
#import "MLTrackingEffect.h"
#import "MLTransitionEffect.h"
#import "MLVideoAspectEffect.h"

FOUNDATION_EXPORT double MLMediaEditingModelVersionNumber;
FOUNDATION_EXPORT const unsigned char MLMediaEditingModelVersionString[];

