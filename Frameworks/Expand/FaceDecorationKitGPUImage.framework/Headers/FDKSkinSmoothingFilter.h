//
//  FDKSkinSmoothingFilter.h
//  FaceDecorationKitDemo
//
//  Created by chen.yanqin on 16/10/19.
//  Copyright © 2016年 Momo. All rights reserved.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, FDKSkinSmoothingVersion) {
    FDKSkinSmoothingVersion0,
    FDKSkinSmoothingVersion1,
    FDKSkinSmoothingVersion2,
    FDKSkinSmoothingVersion3
};

@interface FDKSkinSmoothingFilter : GPUImageFilterGroup

@property (nonatomic) CGFloat amount;

@property (nonatomic,copy,nullable) NSArray<NSNumber *> *skinColorThreshold; //vec6

@property (nonatomic,readonly) FDKSkinSmoothingVersion version;

- (instancetype)initWithVersion:(FDKSkinSmoothingVersion)version;

@property (nonatomic) BOOL usesAdaptiveTexelOffset;

@end

NS_ASSUME_NONNULL_END
