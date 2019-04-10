//
//  FDKFilterEffect.h
//  Pods
//
//  Created by YuAo on 11/10/16.
//
//

@import Mantle;
#import "FDKTriggerable.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKFilterEffect : MTLModel <MTLJSONSerializing,FDKTriggerable>

@property (nonatomic) NSUInteger triggerType;

@property (nonatomic) NSUInteger hidingTriggerType;

@property (nonatomic,copy,nullable) NSURL *contentsURL;

@property (nonatomic,copy,nullable) NSString *resourceName;

@end

NS_ASSUME_NONNULL_END
