//
//  MLMediaMetadataItemExtensions.h
//  Pods
//
//  Created by YuAo on 3/4/17.
//
//

@import Foundation;
@import CoreLocation;
@import AVFoundation;
#import "MLMediaMetadataItem.h"
#import "MLMediaSerializable.h"
#import "MLPOIEffect.h"
@import CoreGraphics;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Geo

@interface CLLocation (MLMediaSerializable) <MLMediaSerializable>

@end

@interface MLMediaMetadataItem (Location) //MLMediaMetadataItemTypeGeoData

- (instancetype)initWithLocation:(CLLocation *)location timestamp:(CMTime)timestamp;

@property (nonatomic,nullable,readonly) CLLocation *location;

@end

#pragma mark - POI

@interface MLMediaMetadataItem (Placemark) //MLMediaMetadataItemTypePOI

- (instancetype)initWithPlacemark:(MLPlacemark *)placemark timestamp:(CMTime)timestamp;

@property (nonatomic,nullable,readonly) MLPlacemark *placemark;

@end

#pragma mark - Transform

@interface MLMediaMetadataItem (Transform) //MLMediaMetadataItemTypePOI

- (instancetype)initWithTransform:(CGAffineTransform)transform timestamp:(CMTime)timestamp;

@property (nonatomic,readonly) CGAffineTransform transform;

@end

NS_ASSUME_NONNULL_END
