//
//  CXTeethWhitenAdjustments.h
//  CXBeautyKit
//
//  Created by Jackie on 2018/3/12.
//

#import <Foundation/Foundation.h>

@import Mantle;

NS_ASSUME_NONNULL_BEGIN

@interface CXTeethWhitenSettings : MTLModel <MTLJSONSerializing>

@property (nonatomic) float amount;

- (instancetype)initWithAmount:(float)amount;

- (instancetype)init;

@end

NS_ASSUME_NONNULL_END

#import "CXInterpolable.h"

NS_ASSUME_NONNULL_BEGIN

@interface CXTeethWhitenSettings (CXInterpolable) <CXInterpolable>

@end

NS_ASSUME_NONNULL_END
