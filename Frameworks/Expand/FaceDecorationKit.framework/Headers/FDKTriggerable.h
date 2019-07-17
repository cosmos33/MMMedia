//
//  FDKTriggerable.h
//  Pods
//
//  Created by YuAo on 11/10/16.
//
//

#import <Foundation/Foundation.h>
#import "FDKProtocols.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FDKTriggerable <NSObject>

@property (nonatomic) NSUInteger triggerType;

@property (nonatomic) NSUInteger hidingTriggerType;

@end

FOUNDATION_EXPORT BOOL FDKTriggerableShouldDisplayWithTriggerType(id<FDKTriggerable> triggerable, NSArray<id<FDKFacialExpression>> * _Nullable expressions);

FOUNDATION_EXPORT BOOL FDKTriggerableShouldHideWithTriggerType(id<FDKTriggerable> triggerable, NSArray<id<FDKFacialExpression>> * _Nullable expressions);

NS_ASSUME_NONNULL_END
