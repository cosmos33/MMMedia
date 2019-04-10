//
//  FDKDecorationItem.h
//  Pods
//
//  Created by YuAo on 6/20/16.
//
//

@import Mantle;
#import "FDKTriggerable.h"
#import "FDKDecorationBlending.h"
#import "FDKFaceStickerAnimation.h"
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, FDKDecorationItemType) {
    FDKDecorationItemTypePositionRelative,
    FDKDecorationItemTypePositionFixedFromBottom,
    FDKDecorationItemTypePositionFixedFromTop,
    FDKDecorationItemTypePositionScaleAspectFit,
    FDKDecorationItemTypePositionScaleToFill,
    FDKDecorationItemTypePositionAbsolute,
    FDKDecorationItemTypePositionScaleAspectFill,
    FDKDecorationItemTypePositionScaleAspectFitFromTop,
    FDKDecorationItemTypePositionScaleAspectFitFromBottom
};

typedef NS_OPTIONS(NSUInteger, FDKDecorationItemFlipOptions) {
    FDKDecorationItemFlipOptionsDonotFlip = 0,
    FDKDecorationItemFlipOptionsFlipVertically = 1 << 0,
    FDKDecorationItemFlipOptionsFlipHorizontally = 1 << 1,
};

FOUNDATION_EXPORT NSString * const FDKDecorationLayerTypeDefault;
FOUNDATION_EXPORT NSString * const FDKDecorationLayerTypeObjectFollower;
FOUNDATION_EXPORT NSString * const FDKDecorationLayerType3D;
FOUNDATION_EXPORT NSString * const FDKDecorationLayerTypeNative;

FOUNDATION_EXPORT NSString * const FDKDecorationItemResourceTypeDefault;
FOUNDATION_EXPORT NSString * const FDKDecorationItemResourceTypeAudioVisualizer;

@class FDKDecorationItem;

@protocol FDKDecorationItemResourceSearching <NSObject>

- (NSString *)resourceNameForResourceAtIndex:(NSInteger)index decorationItem:(FDKDecorationItem *)item;

@end

@interface FDKDecorationItemPosition : MTLModel <MTLJSONSerializing>

@property (nonatomic) CGSize viewport;

@property (nonatomic) CGPoint center;

@end

@interface FDKDecorationItem : MTLModel <MTLJSONSerializing, FDKTriggerable>

@property (nonatomic,copy) NSString *layerType;

@property (nonatomic,copy) NSString *resourceType;

@property (nonatomic) NSUInteger triggerType;

@property (nonatomic) NSUInteger hidingTriggerType;

@property (nonatomic,copy) NSString *objectTriggerType;

@property (nonatomic,copy) NSString *hidingObjectTriggerType;

@property (nonatomic,copy) NSArray<NSNumber *> *triggerRegion;

@property (nonatomic) NSUInteger correspondingLandmarkIndex NS_DEPRECATED_IOS(7_0, 7_0, "use correspondingLandmarkIndexes instead");

@property (nonatomic,copy) NSArray<NSNumber *> *correspondingLandmarkIndexes;

@property (nonatomic) CGFloat offsetX;
@property (nonatomic) CGFloat offsetY;

@property (nonatomic,copy,nullable) NSString *resourceName;

@property (nonatomic) NSInteger frameCount;

@property (nonatomic) CGFloat height;
@property (nonatomic) CGFloat width;

@property (nonatomic) BOOL alwaysShow;

@property (nonatomic) NSInteger loopIndex;

@property (nonatomic) FDKDecorationItemType type;

@property (nonatomic) NSInteger decorationPositionType;

@property (nonatomic) BOOL noninterruptible;

@property (nonatomic) BOOL doesNotTrack;

@property (nonatomic,copy,nullable) NSString *soundFileName;

@property (nonatomic) BOOL loopsSound;

@property (nonatomic) BOOL doesNotResetOnHide;

@property (nonatomic) BOOL doesNotHideAfterTrigger;

@property (nonatomic,copy) MLBlendMode *blendMode;

@property (nonatomic,strong) id<FDKDecorationItemResourceSearching> resourceSearcher;

@property (nonatomic,copy,nullable) NSURL *contentsURL;

@property (nonatomic,copy) NSDictionary *userInfo; //runtime user info

@property (nonatomic,copy) NSDictionary *additionalInfo; //additional configuration

@property (nonatomic) CGRect objectTrackingRegion;

@property (nonatomic) BOOL clearsBodyArea;

@property (nonatomic,copy) NSArray<NSNumber*> *strokeColor;

@property (nonatomic) CGFloat strokeRadius;

@property (nonatomic,copy) NSString *imageType;

@property (nonatomic,copy) FDKDecorationItemPosition *position;

- (NSURL *)URLForResourceAtIndex:(NSUInteger)index;

@property (nonatomic) BOOL useTextureBatch;

@property (nonatomic,copy) NSString *textureBatch;

- (NSURL *)URLForPVRTextureBatch;
- (NSURL *)URLForPVRTextureBatchResource;

@property (nonatomic) NSInteger minimumHiddenFrameCount;

@property (nonatomic, copy, nullable) FDKFaceStickerAnimation *faceStickerAnimation;

@property (nonatomic) BOOL enable3DAntialiasing;

@property (nonatomic) NSUInteger skipFrame;

@property (nonatomic) float intensity;

@property (nonatomic, assign) BOOL metalRerender;

@property (nonatomic, assign) BOOL useHandGesture;

@property (nonatomic, assign) NSUInteger handGestureType;

@property (nonatomic, assign, getter=isComic) BOOL comic;

@property (nonatomic, assign) FDKDecorationItemFlipOptions flipOptions;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
