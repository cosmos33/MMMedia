//
//  MLMediaMetadataTrack.h
//  Pods
//
//  Created by YuAo on 1/22/17.
//
//

@import Mantle;
#import "MLMediaMetadataItem.h"

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString const * MLMediaMetadataTrackGeoDataTrackIdentifier;
FOUNDATION_EXPORT NSString const * MLMediaMetadataTrackFaceFeatureTrackIdentifier;
FOUNDATION_EXPORT NSString const * MLMediaMetadataTrackGyroDataTrackIdentifier;
FOUNDATION_EXPORT NSString const * MLMediaMetadataTrackPOITrackIdentifier;
FOUNDATION_EXPORT NSString const * MLMediaMetadataTrackTransformTrackIdentifier;

@interface MLMediaMetadataTrack : MTLModel

@property (nonatomic, class, readonly) NSDictionary<MLMediaMetadataItemType,NSString *> *metadataItemTypeTrackIdentifierMap;

@property (nonatomic, copy, readonly) NSString *identifier;

@property (nonatomic, copy, readonly) MLMediaMetadataItemType itemType;

@property (nonatomic, copy, readonly) NSArray<MLMediaMetadataItem *> *allItems;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithItemType:(MLMediaMetadataItemType)type;

- (void)insertMetadataItem:(MLMediaMetadataItem *)metadataItem;

- (void)insertMetadataItem:(MLMediaMetadataItem *)metadataItem duration:(CMTime)duration;

- (nullable MLMediaMetadataItem *)itemForTimestamp:(CMTime)time;

- (void)replaceItem:(MLMediaMetadataItem *)item withItem:(MLMediaMetadataItem *)metadataItem;

- (void)scaleTimeRange:(CMTimeRange)timeRange toDuration:(CMTime)duration;

+ (instancetype)emptyTrackWithItemType:(MLMediaMetadataItemType)type duration:(CMTime)duration;

- (MLMediaMetadataTrack *)subtrackWithTimeRange:(CMTimeRange)timeRange;

// retiming defaults to YES
- (MLMediaMetadataTrack *)subtrackWithTimeRange:(CMTimeRange)timeRange retiming:(BOOL)retiming;

+ (MLMediaMetadataTrack *)combineTrack:(MLMediaMetadataTrack *)track1 ofDuration:(CMTime)duration withTrack:(MLMediaMetadataTrack *)track2; //track1 + track2

@end

@interface MLMediaMetadataItem (Empty)

@property (nonatomic,readonly,getter=isEmpty) BOOL empty;

+ (instancetype)emptyItemWithTimestamp:(CMTime)time NS_SWIFT_NAME(makeEmptyItem(timestamp:));

@end

NS_ASSUME_NONNULL_END
