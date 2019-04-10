//
//  FDKFacialMask.h
//  Pods
//
//  Created by YuAo on 8/22/16.
//
//

@import Mantle;
#import "FDKTriggerable.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKFacialMask : MTLModel <MTLJSONSerializing,FDKTriggerable>

@property (nonatomic) NSUInteger triggerType;

@property (nonatomic) NSUInteger hidingTriggerType;

@property (nonatomic,copy,nullable) NSURL *contentsURL;

@property (nonatomic,copy,nullable) NSString *resourceName;

@property (nonatomic) BOOL selectiveLookupEnabled;

@property (nonatomic) BOOL swapFacialMaskEnabled;

@end

@interface FDKMaskModel : NSObject <NSCopying>

- (nullable instancetype)initWithContentsOfURL:(NSURL *)URL;

@property (nonatomic,strong,readonly) UIImage *texture;

@property (nonatomic,copy,readonly) NSArray<NSValue *> *landmarks;

@end


NS_ASSUME_NONNULL_END
