//
//  MLTimeRangeMappingEffect.h
//  Pods
//
//  Created by YuAo on 1/17/17.
//
//

@import Mantle;
@import AVFoundation;
#import "MLTimeRangeEffect.h"
#import "MLMediaSerializable.h"

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT CMTime MLCMTimeMultiply(CMTime lhs, CMTime rhs);
FOUNDATION_EXPORT CMTime MLCMTimeDivide(CMTime lhs, CMTime rhs);

FOUNDATION_EXPORT CMTimeScale const MLMediaEffectDefaultTimescale;

typedef NSString *MLTimeRangeMappingEffectRepresentationType NS_EXTENSIBLE_STRING_ENUM;

@interface MLTimeRangeMappingEffectRepresentation : MTLModel

@property (nonatomic, copy, readonly, nullable) id<MLMediaSerializable> content;

@property (nonatomic,copy,readonly) MLTimeRangeMappingEffectRepresentationType type;

- (instancetype)initWithType:(MLTimeRangeMappingEffectRepresentationType)type;

- (instancetype)initWithType:(MLTimeRangeMappingEffectRepresentationType)type content:(nullable id<MLMediaSerializable>)content NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@end

@protocol MLTimeRangeMappingEffect <MLTimeRangeEffect>

@property (nonatomic,copy,readonly) NSUUID *identifier;

@property (nonatomic,readonly) CMTimeRange timeRange;

@property (nonatomic,readonly) CMTime targetDuration;

@property (nonatomic,copy,readonly,nullable) MLTimeRangeMappingEffectRepresentation *representation;

- (instancetype)timeRangeMappingEffectByReplacingStartTime:(CMTime)startTime NS_SWIFT_NAME(replacingStartTime(_:));

- (void)applyToComposition:(AVMutableComposition *)composition;

- (CMTime)mapTime:(CMTime)time;

- (CMTime)reverseMapTime:(CMTime)time;

- (instancetype)timeRangeMappingEffectWithNewIdentifier;

- (instancetype)replacingRepresentation: (MLTimeRangeMappingEffectRepresentation *)representation;

@end

@protocol MLDurationAdjustableTimeRangeMappingEffect <MLTimeRangeMappingEffect>

- (instancetype)timeRangeMappingEffectByReplacingDuration:(CMTime)duration NS_SWIFT_NAME(replacingDuration(_:));

@end

@interface MLLinearTimeRangeMappingEffect : MTLModel <MLDurationAdjustableTimeRangeMappingEffect>

@property (nonatomic,copy,readonly) NSUUID *identifier;

@property (nonatomic,readonly) CMTimeRange timeRange;

@property (nonatomic,readonly) CMTime targetDuration;

- (instancetype)initWithTimeRange:(CMTimeRange)timeRange targetDuration:(CMTime)targetDuration;

- (instancetype)initWithTimeRange:(CMTimeRange)timeRange targetDuration:(CMTime)targetDuration representation:(nullable MLTimeRangeMappingEffectRepresentation *)representation NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@end

@interface MLTimeRangeMappingEffectGroup : MTLModel <MLTimeRangeMappingEffect>

@property (nonatomic,copy,readonly) NSArray<MLLinearTimeRangeMappingEffect *> *contents;

- (instancetype)initWithContents:(NSArray<MLLinearTimeRangeMappingEffect *> *)contents;

- (instancetype)initWithContents:(NSArray<MLLinearTimeRangeMappingEffect *> *)contents representation:(nullable MLTimeRangeMappingEffectRepresentation *)representation NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@end

@interface MLRepeatTimeRangeMappingEffect : MTLModel <MLDurationAdjustableTimeRangeMappingEffect>

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithTimeRange:(CMTimeRange)timeRange repeatTimes:(NSInteger)repeatTimes representation:(nullable MLTimeRangeMappingEffectRepresentation *)representation;

- (instancetype)initWithTimeRange:(CMTimeRange)timeRange repeatTimes:(NSInteger)repeatTimes repeatScale:(double)repeatScale representation:(nullable MLTimeRangeMappingEffectRepresentation *)representation NS_DESIGNATED_INITIALIZER;

@end

@class MLReverseTimeRangeMappingEffect;

@protocol MLReverseTimeRangeMappingEffectAssetReverser <NSObject>

- (AVAsset *)reversedAssetForAsset:(AVAsset *)asset effect:(MLReverseTimeRangeMappingEffect *)effect;

@end

@interface MLReverseTimeRangeMappingEffect : MTLModel <MLDurationAdjustableTimeRangeMappingEffect>

- (instancetype)init NS_UNAVAILABLE;

@property (nonatomic,strong,readonly) id<MLReverseTimeRangeMappingEffectAssetReverser> reverser;

- (instancetype)initWithTimeRange:(CMTimeRange)timeRange representation:(nullable MLTimeRangeMappingEffectRepresentation *)representation reverser:(id<MLReverseTimeRangeMappingEffectAssetReverser>)reverser NS_DESIGNATED_INITIALIZER;

@end

FOUNDATION_EXPORT NSArray<id<MLTimeRangeMappingEffect>> * MLTimeRangeMappingEffectSort(NSArray<id<MLTimeRangeMappingEffect>> *effects);

FOUNDATION_EXPORT CMTime MLTimeRangeMappingEffectSquenceMapTime(NSArray<id<MLTimeRangeMappingEffect>> *effects, CMTime time);

FOUNDATION_EXPORT CMTime MLTimeRangeMappingEffectSquenceReverseMapTime(NSArray<id<MLTimeRangeMappingEffect>> *effects, CMTime time);

FOUNDATION_EXPORT NSArray<id<MLTimeRangeMappingEffect>> * MLTimeRangeMappingEffectSquenceGetMappedSquence(NSArray<id<MLTimeRangeMappingEffect>> *effects);

NS_ASSUME_NONNULL_END
