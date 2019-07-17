//
//  MLMetadataTrackEffect.h
//  Pods
//
//  Created by YuAo on 1/22/17.
//
//

@import Mantle;
@import AVFoundation;
#import "MLTimeRangeEffect.h"
#import "MLMediaSerializable.h"
#import "MLMediaEffectRepresentation.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MLMetadataTrackEffectProtocol <NSObject, MLMediaSerializable>

@property (nonatomic,copy,readonly) NSUUID *identifier;

@property (nonatomic,copy,readonly) NSString *metadataTrackIdentifier;

@property (nonatomic,readonly) CMTimeRange timeRange;

@property (nonatomic,copy,readonly) MLMediaEffectRepresentation *representation;

@end

@interface MLMetadataTrackEffect : MTLModel <MLMetadataTrackEffectProtocol>

@property (nonatomic,copy,readonly) NSUUID *identifier;

@property (nonatomic,copy,readonly) NSString *metadataTrackIdentifier;

@property (nonatomic,readonly) CMTimeRange timeRange;

@property (nonatomic,copy,readonly) MLMediaEffectRepresentation *representation;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithMetadataTrackIdentifier:(NSString *)metadataTrackIdentifier
                                 representation:(MLMediaEffectRepresentation *)representation
                                      timeRange:(CMTimeRange)timeRange;

- (instancetype)effectByReplacingTimeRange:(CMTimeRange)timeRange NS_SWIFT_NAME(replacingTimeRange(_:));

- (instancetype)effectByReplacingRepresentation:(MLMediaEffectRepresentation *)representation NS_SWIFT_NAME(replacingRepresentation(_:));

@end

NS_ASSUME_NONNULL_END
