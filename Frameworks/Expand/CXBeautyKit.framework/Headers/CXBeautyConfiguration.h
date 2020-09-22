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
#import "CXAutoLevelInfo.h"

#import <Mantle/Mantle.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXBeautyConfiguration : MTLModel <MTLJSONSerializing>

@property (atomic, copy) CXSkinSmoothingSettings *skinSmoothingSettings;

@property (atomic, copy) CXTeethWhitenSettings *teethWhitenSettings;

@property (atomic, copy) MMFaceAdjustments *faceAdjustments;

@property (atomic, copy) CXMakeup *makeup;

@property (atomic) float faceIllumination;

@property (atomic, copy) NSDictionary *metadata;

- (instancetype)init;

@property (nonatomic, readonly) NSDictionary *JSONRepresentation;
@property (nonatomic, readonly) NSData *JSONDataRepresentation;

+ (nullable instancetype)beautyConfigurationFromJSONObject:(id)JSONObject error:(NSError **)error;

- (instancetype)copyWithZone:(nullable NSZone *)zone;

- (BOOL)isKeyPathValid:(NSString *)keyPath;

@end

NS_ASSUME_NONNULL_END

