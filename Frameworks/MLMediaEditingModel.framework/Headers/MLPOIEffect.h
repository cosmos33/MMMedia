//
//  MLPOIEffect.h
//  Pods
//
//  Created by chenyi on 17/2/20.
//
//

@import Mantle;
@import CoreLocation;
#import "MLMediaMetadataItem.h"
#import "MLMediaMetadataTrack.h"
#import "MLMetadataTrackEffect.h"

NS_ASSUME_NONNULL_BEGIN

@interface MLPlacemarkWeather : MTLModel

@property (nonatomic,assign,readonly) int weatherCode;

@property (nonatomic,copy,readonly) NSString *localizedDescription;

@property (nonatomic,readonly) float temperatureInCelsius;

@property (nonatomic,readonly) float temperatureInFahrenheit;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithCode:(int)code localizedDescription:(NSString *)localizedDescription temperatureInCelsius:(float)temperatureInCelsius;

@end

@interface MLPlacemark : MTLModel

@property (nonatomic, readonly, copy) CLLocation *location;

@property (nonatomic, readonly, copy, nullable) NSString *name;

@property (nonatomic, readonly, copy, nullable) NSString *city;

@property (nonatomic, readonly, copy, nullable) NSString *road;

@property (nonatomic, copy, readonly, nullable) MLPlacemarkWeather *weather;

- (instancetype)initWithLocation:(CLLocation *)location;
- (instancetype)initWithLocation:(CLLocation *)location name:(nullable NSString *)name;
- (instancetype)initWithLocation:(CLLocation *)location name:(nullable NSString *)name city:(nullable NSString *)city road:(nullable NSString *)road;
- (instancetype)initWithLocation:(CLLocation *)location name:(nullable NSString *)name weather:(nullable MLPlacemarkWeather *)weather;
- (instancetype)initWithLocation:(CLLocation *)location name:(nullable NSString *)name city:(nullable NSString *)city road:(nullable NSString *)road weather:(nullable MLPlacemarkWeather *)weather NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (instancetype)placemarkByReplacingName:(nullable NSString *)name NS_SWIFT_NAME(replacingName(_:));
- (instancetype)placemarkByReplacingName:(nullable NSString *)name city:(nullable NSString *)city road:(nullable NSString *)road NS_SWIFT_NAME(replacingName(_:city:road:));

@end

@interface MLPOIEffect : MTLModel <MLMetadataTrackEffectProtocol>

@property (nonatomic,copy,readonly) NSUUID *identifier;

@property (nonatomic,copy,readonly) NSString *metadataTrackIdentifier;

@property (nonatomic,readonly) CMTimeRange timeRange;

@property (nonatomic,assign) BOOL isHidden;

@property (nonatomic,copy,readonly) MLMediaEffectRepresentation *representation;

- (instancetype)initWithRepresentation:(MLMediaEffectRepresentation *)representation;

- (instancetype)effectByReplacingRepresentation:(MLMediaEffectRepresentation *)representation NS_SWIFT_NAME(replacingRepresentation(_:));

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
