//
//  FDKTriggerTip.h
//  Pods
//
//  Created by YuAo on 9/18/16.
//
//

@import Mantle;

NS_ASSUME_NONNULL_BEGIN

@interface FDKTriggerTip : MTLModel <MTLJSONSerializing>

@property (nonatomic,copy,nullable) NSString *content;
@property (nonatomic) CGFloat  contentDuration;
@property (nonatomic,copy,nullable) NSArray <NSURL *>*tipImages;
@property (nonatomic,copy,nullable) NSString *tipImageFolder;
@property (nonatomic,copy,nullable) NSDictionary *tipImagePosition;
@property (nonatomic) NSInteger  frameCount;
@property (nonatomic) NSInteger  loopCount;
@property (nonatomic) NSInteger  preferFrameRate;
@property (nonatomic, copy) NSString *imageType;

@property (nonatomic) NSUInteger triggerType __attribute__((deprecated("Replaced by -[FDKDecoration itemTriggerTypes]"))) NS_SWIFT_UNAVAILABLE("Replaced by -[FDKDecoration itemTriggerTypes]");

@property (nonatomic,copy,nullable) NSString *objectTriggerType  __attribute__((deprecated("Replaced by -[FDKDecoration itemObjectTriggerTypes]"))) NS_SWIFT_UNAVAILABLE("Replaced by -[FDKDecoration itemObjectTriggerTypes]");

@end

NS_ASSUME_NONNULL_END
