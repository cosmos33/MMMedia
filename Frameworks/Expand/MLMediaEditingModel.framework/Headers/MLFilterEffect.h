//
//  MLFilterEffect.h
//  Pods
//
//  Created by YuAo on 1/17/17.
//
//

@import Mantle;
@import AVFoundation;
@import MLFilterKit;
#import "MLTimeRangeEffect.h"
#import "MLMediaSerializable.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSString *MLFilterEffectType NS_EXTENSIBLE_STRING_ENUM;

@interface MLFilterEffect : MTLModel <MLTimeRangeEffect>

@property (nonatomic,copy,readonly) MLFilterEffectType type;

@property (nonatomic,copy,readonly) id<MLMediaSerializable> content;

@property (nonatomic,readonly) CMTimeRange timeRange;

- (instancetype)initWithType:(MLFilterEffectType)type content:(id<MLMediaSerializable>)content timeRange:(CMTimeRange)timeRange;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - MLFilterDescriptor

@protocol MLFilterEffectFilterDescriptorCreator <NSObject>

- (MLFilterDescriptor *)filterDescriptorWithName:(NSString *)name;

@end

FOUNDATION_EXPORT MLFilterEffectType const MLFilterEffectTypeFilterDescriptor;

@interface MLFilterEffect (FilterDescriptorSupport)

- (instancetype)initWithFilterDescriptor:(MLFilterDescriptor *)filterDescriptor;

@property (nonatomic, readonly, nullable) MLFilterDescriptor *filterDescriptor;

+ (void)registerFilterDescriptorCreator:(id<MLFilterEffectFilterDescriptorCreator>)filterCreator NS_SWIFT_NAME(registerFilterDescriptorCreator(_:));

@end

NS_ASSUME_NONNULL_END
