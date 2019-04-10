//
//  MLTransitionEffect.h
//  Pods
//
//  Created by YuAo on 16/05/2017.
//
//

@import Mantle;

NS_ASSUME_NONNULL_BEGIN

typedef NSString *MLTransitionEffectType NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT MLTransitionEffectType const MLTransitionEffectTypeNone;

@interface MLTransitionEffect : MTLModel <MTLJSONSerializing>

@property (nonatomic,readonly,copy) NSDictionary<NSString *, id> *parameters;

@property (nonatomic,readonly,copy) MLTransitionEffectType type;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithType:(MLTransitionEffectType)type parameters:(NSDictionary<NSString *, id> *)parameters NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
