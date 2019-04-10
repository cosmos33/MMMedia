//
//  CXSkinSmoothingSettings.h
//  Pods
//
//  Created by Yu Ao on 29/01/2018.
//

#import <Foundation/Foundation.h>
@import Mantle;

NS_ASSUME_NONNULL_BEGIN

@interface CXSkinSmoothingSettings : MTLModel <MTLJSONSerializing>

@property (nonatomic) float amount;

@property (nonatomic) float eyesAreaAmount;
@property (nonatomic) float nasolabialFoldsAreaAmount;

- (instancetype)initWithAmount:(float)amount;

- (instancetype)init;

@end

NS_ASSUME_NONNULL_END

#import "CXInterpolable.h"

NS_ASSUME_NONNULL_BEGIN

@interface CXSkinSmoothingSettings (CXInterpolable) <CXInterpolable>

@end

NS_ASSUME_NONNULL_END
