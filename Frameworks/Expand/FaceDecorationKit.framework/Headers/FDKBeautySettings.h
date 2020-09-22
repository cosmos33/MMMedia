//
//  FDKFaceBeautySettings.h
//  Pods
//
//  Created by YuAo on 9/7/16.
//
//

@import Mantle;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT const float FDKBeautySettingInvalidValue;

@interface FDKBeautySettings : MTLModel <MTLJSONSerializing>

@property (nonatomic) float bigEyeFactor;
@property (nonatomic) float thinFaceFactor;
@property (nonatomic) float skinSmoothingFactor;
@property (nonatomic) float skinWhitenFactor;

//瘦身美腿相关
@property (nonatomic) float bodyWidthFactor;
@property (nonatomic) float legsLenghtFactor;
@property (nonatomic) float upBodyScaleFactor;
@property (nonatomic) BOOL  gradualSwitch;
@end

NS_ASSUME_NONNULL_END
