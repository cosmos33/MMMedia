//
//  FDKMSkinSmoothingFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2017/11/20.
//

typedef NS_ENUM(int, FDKMSkinSmoothingVersion) {
    FDKMSkinSmoothingVersion0,
    FDKMSkinSmoothingVersion1,
    FDKMSkinSmoothingVersion2,
    FDKMSkinSmoothingVersion3
};
#import "FDKMUnaryFilterProtocol.h"
NS_ASSUME_NONNULL_BEGIN
@import MetalPetal;

@interface FDKMSkinSmoothingFilter : NSObject <MTIUnaryFilter, FDKMUnaryFilterProtocol>

@property (nonatomic) float amount;

@property (nonatomic,copy,nullable) NSArray<NSNumber *> *skinColorThreshold; //vec6

@property (nonatomic,assign, readonly) FDKMSkinSmoothingVersion version;

@property (nonatomic, assign) BOOL usesAdaptiveTexelOffset;
- (instancetype)initWithVersion:(FDKMSkinSmoothingVersion)version;

@end
NS_ASSUME_NONNULL_END
