//
//  CXMakeup.h
//  Pods
//
//  Created by Yu Ao on 29/01/2018.
//

#import <Foundation/Foundation.h>
@import Mantle;

typedef NSString *CXMakeupLayerType NS_EXTENSIBLE_STRING_ENUM;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const CXMakeupErrorDomain;

typedef NS_ERROR_ENUM(CXMakeupErrorDomain, CXMakeupError) {
    //Core errors
    CXMakeupErrorResourceNotFound = 1001,
    CXMakeupErrorInvalidLayerIdentifier = 1002
};

FOUNDATION_EXPORT CXMakeupLayerType const CXMakeupLayerTypeBlend;
FOUNDATION_EXPORT CXMakeupLayerType const CXMakeupLayerTypeLipsHighlight;
FOUNDATION_EXPORT CXMakeupLayerType const CXMakeupLayerTypeEyeSparkle;
FOUNDATION_EXPORT CXMakeupLayerType const CXMakeupLayerTypeLipStick;
FOUNDATION_EXPORT CXMakeupLayerType const CXMakeupLayerTypeLandmarks;
FOUNDATION_EXPORT CXMakeupLayerType const CXMakeupLayerTypePupil;
FOUNDATION_EXPORT CXMakeupLayerType const CXMakeupLayerTypeEyesAreaBlend;
FOUNDATION_EXPORT CXMakeupLayerType const CXMakeupLayerTypePupilBlend;
FOUNDATION_EXPORT CXMakeupLayerType const CXMakeupLayerTypeFaceHighlightShadow;
FOUNDATION_EXPORT CXMakeupLayerType const CXMakeupLayerTypeDefaultFaceBlush;

@interface CXMakeupLayer: MTLModel

@property (nonatomic, copy, readonly) NSString *identifier;

@property (nonatomic, copy, readonly) NSArray<NSURL *> *resources;

@property (nonatomic, copy, readonly) CXMakeupLayerType type;

@property (nonatomic, copy, readonly) NSDictionary<NSString *, id> *parameters;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

+ (nullable instancetype)makeupLayerWithIdentifier:(NSString *)identifier error:(NSError **)error;

+ (nullable instancetype)makeupLayerWithContentsOfURL:(NSURL *)url identifier:(NSString *)identifier error:(NSError **)error;

@end

@interface CXMakeupLayerConfiguration: MTLModel <MTLJSONSerializing>

@property (nonatomic, copy, readonly, nullable) CXMakeupLayer *layer;

@property (nonatomic, copy, readonly) NSString *layerIdentifier;

@property (nonatomic) float intensity;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithLayer:(CXMakeupLayer *)layer intensity:(float)intensity;

- (void)fillLayer:(CXMakeupLayer *)layer;

+ (NSUInteger)defaultCompositingOrderForLayerCategory:(nullable NSString *)category;

@property (nonatomic, copy, readonly, nullable) NSString *layerCategory;

- (instancetype)copyWithZone:(nullable NSZone *)zone;

@end

@interface CXMakeup : MTLModel <MTLJSONSerializing>

@property (nonatomic, copy) NSArray<CXMakeupLayerConfiguration *> *layerConfigurations;

- (instancetype)init;

- (instancetype)copyWithZone:(nullable NSZone *)zone;

@end

NS_ASSUME_NONNULL_END


#import "CXInterpolable.h"

NS_ASSUME_NONNULL_BEGIN

@interface CXMakeup (CXInterpolable) <CXInterpolable>

@end

@interface CXMakeupLayerConfiguration (CXInterpolable) <CXInterpolable>

@end

NS_ASSUME_NONNULL_END

