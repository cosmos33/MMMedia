//
//  FDKDecoration.h
//  Pods
//
//  Created by YuAo on 6/20/16.
//
//

@import Mantle;

@class FDKDecorationItem,FDKFacialMask,FDKFacialDistortion,FDKBeautySettings,FDKTriggerTip,FDKFilterEffect,FDKBaseEffectItem;

static CGRect FDKMakeRectWithAspectRatioFillRect(CGSize aspectRatio, CGRect boundingRect) {
    CGFloat horizontalRatio = boundingRect.size.width / aspectRatio.width;
    CGFloat verticalRatio = boundingRect.size.height / aspectRatio.height;
    CGFloat ratio;
    
    ratio = MAX(horizontalRatio, verticalRatio);
    
    CGSize newSize = CGSizeMake(floor(aspectRatio.width * ratio), floor(aspectRatio.height * ratio));
    CGRect rect = CGRectMake(boundingRect.origin.x + (boundingRect.size.width - newSize.width)/2, boundingRect.origin.y + (boundingRect.size.height - newSize.height)/2, newSize.width, newSize.height);
    return rect;
}

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

@end

NS_ASSUME_NONNULL_END
