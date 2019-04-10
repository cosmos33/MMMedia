//
//  FDKDistortion.h
//  Pods
//
//  Created by YuAo on 8/22/16.
//
//

@import Mantle;
#import "FDKTriggerable.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKFacialDistortion : MTLModel <MTLJSONSerializing, FDKTriggerable>

@property (nonatomic,copy) NSString *type;

@property (nonatomic) NSUInteger triggerType;

@property (nonatomic) NSUInteger hidingTriggerType;

@property (nonatomic) float strengthA;

@property (nonatomic) float strengthB;

@property (nonatomic) BOOL frameAnimation;

@property (nonatomic) int strengthAFrameCost;

@property (nonatomic) int strengthBFrameCost;

// --
@property (nonatomic) float frameAnimationStrengthA;
@property (nonatomic) BOOL frameAnimationIncreaseA;

@property (nonatomic) float frameAnimationStrengthB;
@property (nonatomic) BOOL frameAnimationIncreaseB;
@end

NS_ASSUME_NONNULL_END
