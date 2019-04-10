//
//  CXFaceAdjustments.h
//  Pods
//
//  Created by Yu Ao on 29/01/2018.
//

#import <Foundation/Foundation.h>
#import "CXMakeup.h"
@import Mantle;
@import MomoCV;

NS_ASSUME_NONNULL_BEGIN

@interface MMFaceAdjustments (CX) <MTLModel, MTLJSONSerializing>

@end

@interface CXAdaptiveFaceAdjustmentConstraints: MTLModel <MTLJSONSerializing>

@property (nonatomic) float mouthRatio;
@property (nonatomic) float chinRatio;
@property (nonatomic) float eyeRatio;
@property (nonatomic) float eyeDistanceRatio;
@property (nonatomic) float chinHeightRatio;
@property (nonatomic) float noseRatio;

@property (nonatomic) float forehead;

- (instancetype)init;

@end

@interface MMFaceAdjustments (Adaptive)

+ (instancetype)adaptiveAdjustmentsForFaceFeature:(MMFaceFeature *)feature constraints:(CXAdaptiveFaceAdjustmentConstraints *)constraints;

@end

NS_ASSUME_NONNULL_END

#import "CXInterpolable.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMFaceAdjustments (CXInterpolable) <CXInterpolable>

@end

NS_ASSUME_NONNULL_END

