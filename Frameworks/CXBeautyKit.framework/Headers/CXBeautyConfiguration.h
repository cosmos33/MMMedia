//
//  CXBeautyConfiguration.h
//  Pods
//
//  Created by Yu Ao on 26/01/2018.
//

#import <Foundation/Foundation.h>
#import "CXFaceAdjustments.h"
#import "CXMakeup.h"
#import "CXSkinSmoothingSettings.h"
#import "CXTeethWhitenSettings.h"

@import Mantle;

NS_ASSUME_NONNULL_BEGIN

@interface CXBeautyConfiguration : MTLModel <MTLJSONSerializing>

@property (nonatomic, copy) CXSkinSmoothingSettings *skinSmoothingSettings;

@property (nonatomic, copy) CXTeethWhitenSettings *teethWhitenSettings;

@property (nonatomic, copy) MMFaceAdjustments *faceAdjustments;

@property (nonatomic, copy) CXMakeup *makeup;

@property (nonatomic, copy) NSDictionary *metadata;

- (instancetype)init;

@property (nonatomic, readonly) NSDictionary *JSONRepresentation;
@property (nonatomic, readonly) NSData *JSONDataRepresentation;

+ (nullable instancetype)beautyConfigurationFromJSONObject:(id)JSONObject error:(NSError **)error;

- (instancetype)copyWithZone:(nullable NSZone *)zone;

- (BOOL)isKeyPathValid:(NSString *)keyPath;

@end

NS_ASSUME_NONNULL_END

#import "CXInterpolable.h"

NS_ASSUME_NONNULL_BEGIN

@interface CXBeautyConfiguration (CXInterpolable) <CXInterpolable>

- (instancetype)interpolateToValue:(id)toValue progress:(double)progress additionalKeyPathes:(NSSet<NSString *> *)additionalKeyPathes NS_SWIFT_NAME(interpolate(to:progress:additionalKeyPathes:));

@end

NS_ASSUME_NONNULL_END
