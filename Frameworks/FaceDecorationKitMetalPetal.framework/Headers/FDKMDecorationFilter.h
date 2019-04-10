//
//  FDKMDecorationFilter.h
//  Pods
//
//  Created by Yu Ao on 15/11/2017.
//

#import <Foundation/Foundation.h>
@import MetalPetal;
@import FaceDecorationKit;
#import "FDKMSkinWhitenFilter.h"
#import "FDKMSkinSmoothingFilter.h"

NS_ASSUME_NONNULL_BEGIN
@interface FDKMDecorationFilterOptions: NSObject
@property (nonatomic) FDKMSkinSmoothingVersion skinSmoothingVersion; //default 1

@property (nonatomic) FDKMSkinWhitenVersion skinWhitenVersion; //default 1
@end

@interface FDKMDecorationFilter : NSObject <MTIUnaryFilter, FDKDecorationFilterUpdating, FDKMUnaryFilterProtocol>

@property (nonatomic,copy,readonly, nullable) FDKDecoration *decoration;

@property (nonatomic,strong) id<FDKFaceWarper> faceWarper;

@property (nonatomic) float audioVolume;

- (instancetype)initWithDecoration:(nullable FDKDecoration *)decoration;

- (instancetype)initWithDecoration:(nullable FDKDecoration *)decoration audioPrism:(nullable id<FDKAudioPrism>)audioPrism;

- (instancetype)initWithDecoration:(FDKDecoration *)decoration audioPrism:(nullable id<FDKAudioPrism>)audioPrism options:(nullable FDKMDecorationFilterOptions *)options;
    
- (void)updateBeautySettings:(FDKBeautySettings *)beautySettings;
@end

NS_ASSUME_NONNULL_END

#if __METAL_MACOS__ || __METAL_IOS__

#endif
