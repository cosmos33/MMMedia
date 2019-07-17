//
//  MLTrackingEffect.h
//  Pods
//
//  Created by YuAo on 1/17/17.
//
//

@import Mantle;
@import AVFoundation;
#import "MLTimeRangeEffect.h"
#import "MLMediaSerializable.h"
#import "MLMetadataTrackEffect.h"

NS_ASSUME_NONNULL_BEGIN

@interface MLTrackingEffect : MTLModel <MLMetadataTrackEffectProtocol>

@property (nonatomic,readonly) CMTime sourceTime;

@property (nonatomic,readonly) CGRect trackingRectangle;

@property (nonatomic,copy,readonly) NSUUID *identifier;

@property (nonatomic,copy,readonly) NSString *metadataTrackIdentifier;

@property (nonatomic,readonly) CMTimeRange timeRange;

@property (nonatomic,copy,readonly) MLMediaEffectRepresentation *representation;

- (instancetype)initWithMetadataTrackIdentifier:(NSString *)metadataTrackIdentifier
                                     sourceTime:(CMTime)sourceTime
                              trackingRectangle:(CGRect)trackingRectangle
                                 representation:(MLMediaEffectRepresentation *)representation;

- (instancetype)effectByReplacingSourceTime:(CMTime)sourceTime NS_SWIFT_NAME(replacingSourceTime(_:));

- (instancetype)effectByReplacingRepresentation:(MLMediaEffectRepresentation *)representation NS_SWIFT_NAME(replacingRepresentation(_:));

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
