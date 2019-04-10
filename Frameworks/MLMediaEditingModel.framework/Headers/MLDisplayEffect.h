//
//  MLDisplayEffect.h
//  Pods
//
//  Created by yi chen on 2017/6/28.
//
//

@import Mantle;

FOUNDATION_EXPORT double const kDefaultMLDisplayEffectBrightness;
FOUNDATION_EXPORT double const kDefaultMLDisplayEffectSaturation;
FOUNDATION_EXPORT double const kDefaultMLDisplayEffectContrast;
FOUNDATION_EXPORT double const kDefaultMLDisplayEffectColorTemperature;
FOUNDATION_EXPORT double const kDefaultMLDisplayEffectVignetting;
FOUNDATION_EXPORT double const kDefaultMLDisplayEffectSharpness;

@interface MLDisplayEffect : MTLModel <MTLJSONSerializing>

@property (nonatomic,readonly) double brightness;

@property (nonatomic,readonly) double contrast;

@property (nonatomic,readonly) double saturation;

@property (nonatomic,readonly) double colorTemperature;

@property (nonatomic,readonly) double vignetting;

@property (nonatomic,readonly) double sharpness;

- (instancetype)displayEffectWithBrightness:(double)value NS_SWIFT_NAME(with(brightness:));
- (instancetype)displayEffectWithContrast:(double)value NS_SWIFT_NAME(with(contrast:));
- (instancetype)displayEffectWithSaturation:(double)value NS_SWIFT_NAME(with(saturation:));
- (instancetype)displayEffectWithColorTemperature:(double)value NS_SWIFT_NAME(with(colorTemperature:));
- (instancetype)displayEffectWithVignetting:(double)value NS_SWIFT_NAME(with(vignetting:));
- (instancetype)displayEffectWithSharpness:(double)value NS_SWIFT_NAME(with(sharpness:));

- (BOOL)isIdentity;

@end
