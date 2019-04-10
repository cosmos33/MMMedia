//
//  FDKBaseEffectItem.h
//  FaceDecorationKit
//
//  Created by sunfei on 2018/10/26.
//

@import Mantle;

NS_ASSUME_NONNULL_BEGIN
@class FDKBaseEffectItem;
@protocol FDKSubeffectItem<NSObject>
- (instancetype)initWithBaseItem:(FDKBaseEffectItem *)item;
@property (nonatomic, strong, readonly) FDKBaseEffectItem *item;
@end

@interface FDKBaseEffectItem : MTLModel <MTLJSONSerializing>
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *resourceName;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, copy) NSURL *contentsURL;

@end


@interface FDKChangeColorEffectItem: NSObject<FDKSubeffectItem>
@property (nonatomic, strong) NSURL *lookUpTable0ImageURL;
@property (nonatomic, strong) NSURL *lookUpTable1ImageURL;
@property (nonatomic, assign) int frameCost;
@end

@interface FDKFishEyeEffectItem: NSObject<FDKSubeffectItem>
@property (nonatomic, assign) float radius;
@property (nonatomic, assign) float depth;
@property (nonatomic, strong) NSURL *boxImageURL;
@property (nonatomic, strong) NSURL *bottomImageURL;
@end

@interface FDKMosaicEffectItem: NSObject<FDKSubeffectItem>
@property (nonatomic, assign) float blockSize; // [0, 2]
@end

@interface FDKCrosshatchEffectItem: NSObject<FDKSubeffectItem>
@property (nonatomic, assign) float amount; // [0, 2]
@end

@interface FDKBigMouthKPEffectItem: NSObject<FDKSubeffectItem>
@property (nonatomic, strong) NSURL *maskImageURL;
@end


@interface FDKMirrorFlipEffectItem: NSObject<FDKSubeffectItem>
/*
 type = 0, normal
 type = 1, left&right mirrored
 type = 2, top&mid&bottom normal
 type = 3, topLeft&topRight mirrored, (bottomLeft&bottomRight)&(topLeft&topRight) flipped
 */

@property (nonatomic, assign) int type;
@end


NS_ASSUME_NONNULL_END
