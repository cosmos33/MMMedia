//
//  FDKMangaFacialMaskFilter.h
//  FaceDecorationKit+GPUImage
//
//  Created by sunfei on 2018/10/24.
//

#import "FDKFacialMaskFilter.h"
@import FaceDecorationKit;

NS_ASSUME_NONNULL_BEGIN

@interface FDKMangaFacialMaskGenerator : FDKFacialMaskGenerator

@end

@interface FDKMangaFacialMaskFilter : FDKFacialMaskFilter

+ (instancetype)filterWithFacialMask:(FDKFacialMask *)mask;

@property (nonatomic, strong) UIImage *image;

@property (nonatomic, strong) id<FDKMangaWarper> warper;

@end

NS_ASSUME_NONNULL_END
