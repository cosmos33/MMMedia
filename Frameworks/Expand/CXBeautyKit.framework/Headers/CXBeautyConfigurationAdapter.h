//
//  CXBeautyConfigurationAdapter.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2018/4/10.
//

#import <Foundation/Foundation.h>
@class CXBeautyConfiguration;
@class CXMakeupLayerConfiguration;
NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsChinLengthKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsJawWidthKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsForeheadKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsNoseLiftKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsNoseWidthKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsMouthSizeKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsEyeTiltKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsEyeSizeKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsNoseSizeKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsJawShapeKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsNoseRidgeWidthKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsNoseTipSizeKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsThinFaceKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsLipThicknessKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsFaceWidthKey;
FOUNDATION_EXTERN NSString *const CXFaceAdjustmentsEyeDistanceKey;


@interface CXBeautyConfigurationAdapter : NSObject

+ (NSArray <CXMakeupLayerConfiguration *> *)eyeShadows;
+ (NSArray <CXMakeupLayerConfiguration *> *)faceShadows;
+ (NSArray <CXMakeupLayerConfiguration *> *)blushes;
+ (NSArray <CXMakeupLayerConfiguration *> *)lips;
+ (NSArray <CXMakeupLayerConfiguration *> *)pupils;

- (instancetype)init NS_UNAVAILABLE;

@property (nonatomic, readonly) CXBeautyConfiguration *configuration;

- (instancetype)initWithConfiguration:(nullable CXBeautyConfiguration *)configuration;

- (void)addMakeupLayerConfiguration:(CXMakeupLayerConfiguration *)layerConfiguration;

- (void)removeMakeupLayerConfigurationWithLayerIdentifier:(NSString *)layerIdentifier;

- (void)smoothSkin:(float)amount;

- (void)whitenTeeth:(float)amount;

- (void)adjustFaceWithKey:(NSString *)key amount:(float)amount;

@end

NS_ASSUME_NONNULL_END
