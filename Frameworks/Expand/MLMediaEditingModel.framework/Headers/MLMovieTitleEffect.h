//
//  MLMovieTitleEffect.h
//  Pods
//
//  Created by YuAo on 1/22/17.
//
//

@import Mantle;
#import "MLMediaEffectRepresentation.h"
@import CoreMedia;
#import "MLTimeRangeEffect.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSString *MLStringAnimationType NS_EXTENSIBLE_STRING_ENUM;
@interface MLSubtitleEffect : MTLModel <MLTimeRangeEffect>

@property (nonatomic,copy,readonly) NSUUID *identifier;
@property (nonatomic,copy,readonly) NSString *text;


@property (nonatomic,readonly) MLMediaEffectRepresentation * representation;

@property (nonatomic,readonly) CMTimeRange timeRange;

@property (nonatomic,readonly) CGAffineTransform transform;

- (instancetype)effectByReplacingText: (NSString *)text;

- (instancetype)effectByReplacingRepresentation: (MLMediaEffectRepresentation *)representation;

- (instancetype)effectByReplacingTransform: (CGAffineTransform)transform;

- (instancetype)effectByReplacingTimeRange: (CMTimeRange)timeRange;

- (instancetype)initWithText:(NSString *)text timeRange:(CMTimeRange)timeRange transform:(CGAffineTransform)transform representation:(MLMediaEffectRepresentation *)representation;

- (instancetype)initWithText:(NSString *)text timeRange:(CMTimeRange)timeRange representation:(MLMediaEffectRepresentation *)representation;

- (instancetype)init NS_UNAVAILABLE;

@end

@interface MLStringAnimation : NSObject <MLMediaSerializable>

@property (nonatomic,copy,readonly,nullable) NSString *originText;
@property (nonatomic,readonly) NSTimeInterval startTime;
@property (nonatomic,readonly) NSTimeInterval duration;
@property (nonatomic,copy,readonly,nullable) NSString *textContent;
@property (nonatomic,copy,readonly) MLStringAnimationType animationType;
@property (nonatomic,copy,readonly,nullable) NSURL *animationAssetURL;

- (instancetype)initWithStartTime:(NSTimeInterval)startTime
                         duration:(NSTimeInterval)duration
                      textContent:(nullable NSString *)textContent
                       originText:(nullable NSString *)originText
                    animationType:(MLStringAnimationType)animationType
                animationAssetURL:(nullable NSURL *)animationAssetURL;

- (instancetype)initWithStartTime:(NSTimeInterval)startTime
                         duration:(NSTimeInterval)duration
                      textContent:(nullable NSString *)textContent
                    animationType:(MLStringAnimationType)animationType
                animationAssetURL:(nullable NSURL *)animationAssetURL;
@end

NS_ASSUME_NONNULL_END
