//
//  MLMediaEffectRepresentation.h
//  Pods
//
//  Created by YuAo on 1/22/17.
//
//

@import Mantle;
#import "MLMediaSerializable.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSString *MLMediaEffectRepresentationType NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT MLMediaEffectRepresentationType const MLMediaEffectRepresentationTypeNone;

@interface MLMediaEffectRepresentation : MTLModel

@property (nonatomic,copy,readonly) MLMediaEffectRepresentationType type;

@property (nonatomic,copy,readonly,nullable) id<MLMediaSerializable> content;

- (instancetype)initWithType:(MLMediaEffectRepresentationType)type content:(nullable id<MLMediaSerializable>)content;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)emptyRepresentation;

@end

NS_ASSUME_NONNULL_END
