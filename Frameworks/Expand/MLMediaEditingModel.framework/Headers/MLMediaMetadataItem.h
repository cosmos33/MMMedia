//
//  MLMediaMetadataItem.h
//  Pods
//
//  Created by YuAo on 1/22/17.
//
//

@import AVFoundation;
@import Mantle;
#import "MLMediaSerializable.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSString *MLMediaMetadataItemType NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT MLMediaMetadataItemType const MLMediaMetadataItemTypeSearchTemplate;
FOUNDATION_EXPORT MLMediaMetadataItemType const MLMediaMetadataItemTypeEmpty;

FOUNDATION_EXPORT MLMediaMetadataItemType const MLMediaMetadataItemTypeGeoData;
FOUNDATION_EXPORT MLMediaMetadataItemType const MLMediaMetadataItemTypeFaceFeature;
FOUNDATION_EXPORT MLMediaMetadataItemType const MLMediaMetadataItemTypeGyroData;
FOUNDATION_EXPORT MLMediaMetadataItemType const MLMediaMetadataItemTypePOI NS_SWIFT_NAME(poi);
FOUNDATION_EXPORT MLMediaMetadataItemType const MLMediaMetadataItemTypeTransform;

@interface MLMediaMetadataItem : MTLModel

@property (nonatomic,readonly) CMTime timestamp;

@property (nonatomic,copy,readonly) id<MLMediaSerializable> content;

@property (nonatomic,copy,readonly) MLMediaMetadataItemType type;

- (instancetype)initWithType:(MLMediaMetadataItemType)type
                     content:(id<MLMediaSerializable>)content
                   timestamp:(CMTime)timestamp;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)itemByReplacingTimestamp:(CMTime)timestamp NS_SWIFT_NAME(replacingTimestamp(_:));

@end

NS_ASSUME_NONNULL_END
