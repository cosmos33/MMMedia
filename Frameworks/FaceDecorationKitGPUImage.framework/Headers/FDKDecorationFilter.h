     //
//  FDKDecorationFilter.h
//  FaceDecorationKitDemo
//
//  Created by YuAo on 6/20/16.
//  Copyright © 2016 Momo. All rights reserved.
//

@import GPUImage;
@import FaceDecorationKit;
#import "FDKSkinSmoothingFilter.h"
#import "FDKSkinWhitenFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKDecorationFilterOptions : NSObject

@property (nonatomic) FDKSkinSmoothingVersion skinSmoothingVersion; //default 1

@property (nonatomic) FDKSkinWhitenVersion skinWhitenVersion; //default 1

@end

@interface FDKDecorationFilter : GPUImageFilterGroup <FDKDecorationFilterUpdating>

@property (nonatomic,copy,readonly) FDKDecoration *decoration;

@property (nonatomic,strong) id<FDKFaceWarper> faceWarper;

@property (nonatomic, strong) id<FDKBodyWaper> bodyWarper;

@property (nonatomic, strong) id<FDKMangaWarper> mangaWarper;

@property (nonatomic) float audioVolume;

- (instancetype)initWithDecoration:(FDKDecoration *)decoration;

- (instancetype)initWithDecoration:(FDKDecoration *)decoration audioPrism:(nullable id<FDKAudioPrism>)audioPrism;

- (instancetype)initWithDecoration:(FDKDecoration *)decoration audioPrism:(nullable id<FDKAudioPrism>)audioPrism options:(FDKDecorationFilterOptions *)options;

- (void)updateBeautySettings:(FDKBeautySettings *)beautySettings;
@end

NS_ASSUME_NONNULL_END
