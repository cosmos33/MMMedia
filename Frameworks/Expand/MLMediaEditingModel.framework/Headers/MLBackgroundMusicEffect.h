//
//  MLBackgroundMusicEffect.h
//  Pods
//
//  Created by YuAo on 1/17/17.
//
//

@import Mantle;
@import AVFoundation;

NS_ASSUME_NONNULL_BEGIN

@interface MLBackgroundMusicEffect : MTLModel

@property (nonatomic,readonly) CMTimeRange sourceTimeRange;

@property (nonatomic,copy,readonly) NSURL *sourceAssetURL;

@property (nonatomic,copy,readonly,nullable) NSString *musicID;

@property (nonatomic,copy,readonly,nullable) NSString *recommendMusicGUID;

@property (nonatomic,copy,readonly,nullable) NSString *musicTitle;

@property (nonatomic,readonly) double volume;

- (instancetype)initWithMusicTitle:(nullable NSString *)musicTitle sourceAssetURL:(NSURL *)sourceAssetURL musicID:(nullable NSString *)musicID recommendMusicGUID:(nullable NSString *)recommendMusicGUID volume:(double)volume sourceTimeRange:(CMTimeRange)timeRange;

- (instancetype)initWithSourceAssetURL:(NSURL *)sourceAssetURL musicID:(nullable NSString *)musicID volume:(double)volume sourceTimeRange:(CMTimeRange)timeRange;

- (instancetype)initWithSourceAssetURL:(NSURL *)sourceAssetURL volume:(double)volume sourceTimeRange:(CMTimeRange)timeRange;

- (instancetype)backgroundMusicEffectByUpdatingVolume:(double)newVolume;

- (instancetype)backgroundMusicEffectByUpdatingSourceTimeRange:(CMTimeRange)newSourceTimeRange;

- (instancetype)init NS_UNAVAILABLE;

@end


typedef NSString *MLAudioBasedEffectType NS_EXTENSIBLE_STRING_ENUM;

@interface MLAudioBasedEffect : MTLModel <MTLJSONSerializing>

@property (nonatomic, copy, readonly) MLAudioBasedEffectType type;

@property (nonatomic, copy, readonly) NSString *name;

- (instancetype)initWithType: (MLAudioBasedEffectType)type;

- (instancetype)initWithType: (MLAudioBasedEffectType)type name: (nullable NSString *)name;

@end

@interface MLMusicReadingTester: NSObject

+ (BOOL)canRead: (NSURL *)url;

@end
NS_ASSUME_NONNULL_END
