//
//  MLMovieSegmentationStyle.h
//  Pods
//
//  Created by YuAo on 13/07/2017.
//
//

@import Mantle;

NS_ASSUME_NONNULL_BEGIN

@interface MLMovieEditingStyleMetadata : MTLModel <MTLJSONSerializing>

@property (nonatomic,copy,readonly) NSString *title;

@property (nonatomic,copy,readonly) NSString *subtitle;

@property (nonatomic,readonly) BOOL localized;

- (instancetype)initWithTitle:(NSString *)title
                     subtitle:(NSString *)subtitle
                    localized:(BOOL)localized;

@end

@class MLTransitionEffect,MLAudioBasedEffect,MLDisplayEffect;

typedef NSString *MLMovieSegmentationType NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT MLMovieSegmentationType const MLMovieSegmentationTypeNormal;
FOUNDATION_EXPORT MLMovieSegmentationType const MLMovieSegmentationTypeAudioBeats;

@interface MLMovieEditingStyle : MTLModel <MTLJSONSerializing>

@property (nonatomic,copy,readonly,nullable) MLMovieEditingStyleMetadata *metadata;

@property (nonatomic,copy,readonly) NSString *type;

@property (nonatomic,copy,readonly) NSArray<MLTransitionEffect *> *transitions;

@property (nonatomic,copy,readonly,nullable) MLAudioBasedEffect *audioEffect;

@property (nonatomic,copy,readonly,nullable) NSString *visualEffectName;

@property (nonatomic,copy,readonly,nullable) MLDisplayEffect *displayEffect;

@property (nonatomic,copy,readonly) MLMovieSegmentationType segmentationType;

@property (nonatomic,copy,readonly,nullable) NSString *filterName;

@property (nonatomic,copy,readonly,nullable) UIColor *color;

@property (nonatomic,copy,readonly) NSURL *thumbnailImageURL;

//@property (nonatomic,readonly) NSTimeInterval targetDuration;

@property (nonatomic,readonly) NSTimeInterval requiredMinimumDuration;

@property (nonatomic,readonly) BOOL requiresBackgroundMusic;

@property (nonatomic,readonly) double speed;

- (instancetype)movieEditingStyleByReplacingMetadata:(MLMovieEditingStyleMetadata *)metadata NS_SWIFT_NAME(replacingMetadata(_:));

- (instancetype)movieEditingStyleByReplacingSpeed:(double)speed NS_SWIFT_NAME(replacingSpeed(_:));

+ (nullable instancetype)movieEditingStyleWithContentsOfURL:(NSURL *)URL;

@end

NS_ASSUME_NONNULL_END
