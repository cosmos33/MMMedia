//
//  FDKSkinWhitenFilter.h
//  FaceDecorationKitDemo
//
//  Created by chen.yanqin on 16/10/19.
//  Copyright © 2016年 Momo. All rights reserved.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, FDKSkinWhitenVersion) {
    FDKSkinWhitenVersion0,
    FDKSkinWhitenVersion1
};

@interface FDKSkinWhitenFilter : GPUImageFilter

@property (nonatomic) CGFloat amount;

@property (nonatomic,readonly) FDKSkinWhitenVersion version;

@property (nonatomic,copy,nullable) NSArray<NSNumber *> *skinColorThreshold;

- (instancetype)initWithVersion:(FDKSkinWhitenVersion)version;

@end

NS_ASSUME_NONNULL_END
