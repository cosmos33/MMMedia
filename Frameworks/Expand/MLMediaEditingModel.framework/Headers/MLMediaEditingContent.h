//
//  MLMediaEditingDocument.h
//  Pods
//
//  Created by YuAo on 1/17/17.
//
//

#import "MLTimeRangeMappingEffect.h"
#import "MLTrackingEffect.h"
#import "MLFilterEffect.h"
#import "MLBackgroundMusicEffect.h"
#import "MLTimeRangeEffect.h"
#import "MLMovieTitleEffect.h"
#import "MLMediaMetadataTrack.h"
#import "MLPOIEffect.h"
#import "MLTransitionEffect.h"
#import "MLDisplayEffect.h"
#import "MLCoverEffect.h"
#import "MLVideoAspectEffect.h"

NS_ASSUME_NONNULL_BEGIN

@class MLMutableMediaEditingContent;

typedef MLMutableMediaEditingContent MLMediaEditingDocumentContent NS_SWIFT_UNAVAILABLE("Use MLMediaEditingContent/MLMutableMediaEditingContent.");

@interface MLMediaContentAuthor : MTLModel

@property (nonatomic,copy,readonly) NSString *name;

@property (nonatomic,copy,readonly) NSString *identifier;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithName:(NSString *)name identifier:(NSString *)identifier;

@end

@interface MLMediaEditingContent : MTLModel <NSCopying,NSMutableCopying>

- (instancetype)init;

@property (nonatomic, readonly) AVCaptureDevicePosition cameraPosition;

@property (nonatomic, readonly) BOOL isZoomed;

@property (nonatomic, copy, readonly, nullable) MLDisplayEffect *displayEffect;

@property (nonatomic, copy, readonly, nullable) MLFilterDescriptor *visualEffect;

@property (nonatomic, copy, readonly) NSArray<MLBackgroundMusicEffect *> *backgroundMusicEffects;

@property (nonatomic, copy, readonly) NSArray<MLAudioBasedEffect *> *audioBasedEffects;

@property (nonatomic, readonly) double sourceAudioVolume;

@property (nonatomic,copy,readonly) NSArray<id<MLTimeRangeMappingEffect>> *timeRangeMappingEffects;

@property (nonatomic,copy,readonly) NSDictionary<NSString *, MLMediaMetadataTrack *> *metadataTracks;

@property (nonatomic,copy,readonly) NSArray<MLTrackingEffect *> *trackingEffects;

@property (nonatomic,copy,readonly) NSArray<MLFilterEffect *> *filterEffects;

@property (nonatomic,copy,readonly) NSArray<MLSubtitleEffect *> *subtitleEffects;

@property (nonatomic,copy,readonly) NSArray<MLMetadataTrackEffect *> *geoEffects;

@property (nonatomic,copy,nullable,readonly) MLPOIEffect *POIEffect;

@property (nonatomic,copy,nullable,readonly) MLVideoAspectEffect *videoAspectEffect;

@property (nonatomic,copy,nullable,readonly) MLCoverEffect *coverEffect;

@property (nonatomic,copy,nullable,readonly) MLMediaContentAuthor *author;

@property (nonatomic,copy,readonly) NSArray<MLTransitionEffect *> *transitionEffects;

- (MLMediaEditingContent *)copy;

- (MLMutableMediaEditingContent *)mutableCopy;

@end


@interface MLMediaEditingContent (Utilities)

- (NSArray<MLMediaMetadataTrack *> *)metadataTracksWithItemType:(MLMediaMetadataItemType)type;

- (CMTime)convertToMediaSouceTimeFromPresentationTime:(CMTime)time;

- (CMTime)convertToPresentationTimeFromMediaSourceTime:(CMTime)time;

@end


@interface MLMutableMediaEditingContent : MLMediaEditingContent

- (instancetype)init;

@property (nonatomic) AVCaptureDevicePosition cameraPosition;

@property (nonatomic) BOOL isZoomed;

@property (nonatomic, copy, nullable) MLDisplayEffect *displayEffect;

@property (nonatomic, copy, nullable) MLFilterDescriptor *visualEffect;

@property (nonatomic, copy) NSArray<MLBackgroundMusicEffect *> *backgroundMusicEffects;

@property (nonatomic, copy) NSArray<MLAudioBasedEffect *> *audioBasedEffects;

@property (nonatomic) double sourceAudioVolume;

@property (nonatomic,copy) NSArray<id<MLTimeRangeMappingEffect>> *timeRangeMappingEffects;

- (BOOL)addTimeRangeMappingEffect:(id<MLTimeRangeMappingEffect>)effect;

- (void)removeTimeRangeMappingEffect:(id<MLTimeRangeMappingEffect>)effect;

- (BOOL)addSubtitleEffect: (MLSubtitleEffect *)effect;

- (void)removeSubtitleEffect: (MLSubtitleEffect *)effect;

@property (nonatomic,copy) NSDictionary<NSString *, MLMediaMetadataTrack *> *metadataTracks;

- (void)addTrackingEffect:(MLTrackingEffect *)trackingEffect;

- (void)removeTrackingEffect:(MLTrackingEffect *)trackingEffect;

@property (nonatomic,copy) NSArray<MLSubtitleEffect *> *subtitleEffects;

@property (nonatomic,copy) NSArray<MLFilterEffect *> *filterEffects;

@property (nonatomic,copy) NSArray<MLMetadataTrackEffect *> *geoEffects;

@property (nonatomic,copy,nullable) MLPOIEffect *POIEffect;

@property (nonatomic,copy,nullable) MLVideoAspectEffect *videoAspectEffect;

@property (nonatomic,copy,nullable) MLCoverEffect *coverEffect;

@property (nonatomic,copy,nullable) MLMediaContentAuthor *author;

@property (nonatomic,copy) NSArray<MLTransitionEffect *> *transitionEffects;

@end

NS_ASSUME_NONNULL_END
