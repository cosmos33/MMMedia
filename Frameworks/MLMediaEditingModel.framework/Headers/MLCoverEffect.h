//
//  MLCoverEffect.h
//  MLMediaEditingModel
//
//  Created by yi chen on 2017/11/22.
//

@import Mantle;
#import "MLMediaMetadataItem.h"
#import "MLMediaMetadataTrack.h"
#import "MLMetadataTrackEffect.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSString * MLCoverEffectDataKey NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT MLCoverEffectDataKey const MLCoverEffectDataKeyTitle;
FOUNDATION_EXPORT MLCoverEffectDataKey const MLCoverEffectDataKeySubtitle;
FOUNDATION_EXPORT MLCoverEffectDataKey const MLCoverEffectDataKeyAuthor;
FOUNDATION_EXPORT MLCoverEffectDataKey const MLCoverEffectDataKeyPlaceName;

@interface MLCoverEffect : MTLModel <MLMetadataTrackEffectProtocol>

@property (nonatomic,copy,readonly) NSUUID *identifier;

@property (nonatomic,copy,readonly) NSString *metadataTrackIdentifier;

@property (nonatomic,readonly) CMTimeRange timeRange;

@property (nonatomic,copy,readonly) MLMediaEffectRepresentation *representation;

@property (nonatomic,copy,readonly,nullable) NSString *title;

@property (nonatomic,copy,readonly,nullable) NSString *subtitle;

- (instancetype)initWithTitle:(nullable NSString *)title subtitle:(nullable NSString *)subtitle representation:(MLMediaEffectRepresentation *)representation;

- (instancetype)effectByReplacingRepresentation:(MLMediaEffectRepresentation *)representation NS_SWIFT_NAME(replacingRepresentation(_:));

- (instancetype)effectByReplacingTitle:(nullable NSString *)title;

- (instancetype)effectByReplacingSubtitle:(nullable NSString *)subtitle;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
