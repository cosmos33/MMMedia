//
//  FDKDecoration.h
//  Pods
//
//  Created by YuAo on 6/20/16.
//
//

#import <UIKit/UIKit.h>
#import <Mantle/Mantle.h>

@class FDKDecorationItem,FDKFacialMask,FDKFacialDistortion,FDKBeautySettings,FDKTriggerTip,FDKFilterEffect,FDKBaseEffectItem;

FOUNDATION_EXPORT CGRect FDKMakeRectWithAspectRatioFillRect(CGSize aspectRatio, CGRect boundingRect);

NS_ASSUME_NONNULL_BEGIN

@interface FDKDecoration : MTLModel <MTLJSONSerializing>

@property (nonatomic) NSInteger preferredFrameRate;

@property (nonatomic) NSInteger preferredFacialLandmarksCount;

@property (nonatomic,copy,nullable) NSArray<FDKDecorationItem *> *items;

@property (nonatomic,copy,nullable) NSArray<FDKFacialDistortion *> *facialDistortions;

@property (nonatomic,copy,nullable) NSArray<FDKFacialMask *> *facialMasks;

@property (nonatomic,copy,nullable) NSArray<FDKFilterEffect *> *filterEffects;

@property (nonatomic,copy,nullable) NSArray<FDKBaseEffectItem *> *effectItems;

@property (nonatomic,copy,nullable) FDKTriggerTip *triggerTip;

@property (nonatomic,copy,nullable) FDKBeautySettings *beautySettings;

@property (nonatomic) BOOL treatAsDecorationGiftPack;

+ (nullable instancetype)decorationWithContentsOfURL:(NSURL *)URL;

@property (nonatomic,readonly) NSArray<NSNumber *> *itemTriggerTypes;
@property (nonatomic,readonly) NSArray<NSString *> *itemObjectTriggerTypes;

@property (nonatomic,readonly) BOOL containsAudioVisualizationItem;

@property (nonatomic,readonly) BOOL requiresImageSegmentation;

@property (nonatomic,copy) NSDictionary *additionalInfo;

@property (nonatomic, assign) BOOL loopsSound;
@property (nonatomic, copy) NSString *soundFileName;

@property (nonatomic, copy) NSURL *soundURL;

@property (nonatomic, assign) BOOL filterDisable;

@property (nonatomic, assign) BOOL requireHandGesture;

@property (nonatomic, assign) NSUInteger handGestureType;

@property (nonatomic, assign) NSInteger orderedIndex;  // bigger  comes higher

@property (nonatomic, assign) BOOL facialExpressionEnable;

@property (nonatomic, assign) NSUInteger pollGroupNum;

@property (nonatomic, readonly) FDKBeautySettings *originalBeautySetting;

@property (nonatomic, assign) int triggeringMicEffect;

@end

NS_ASSUME_NONNULL_END
