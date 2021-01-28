//
//  FDKMSkinWhitenFilter.h
//  Pods
//
//  Created by Yu Ao on 16/11/2017.
//
typedef NS_ENUM(int, FDKMSkinWhitenVersion) {
    FDKMSkinWhitenVersion0,
    FDKMSkinWhitenVersion1
};
#import "FDKMUnaryFilterProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@import MetalPetal;

@interface FDKMSkinWhitenFilter : MTIUnaryImageRenderingFilter<FDKMUnaryFilterProtocol>

@property (nonatomic) float amount;

@property (nonatomic,copy,nullable) NSArray<NSNumber *> *skinColorThreshold;

- (instancetype)initWithVersion:(FDKMSkinWhitenVersion)version;
@end

NS_ASSUME_NONNULL_END
