//
//  FDKFaceStickerFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2017/10/31.
//

@import GPUImage;
@import FaceDecorationKit;
#import "FDKDecorationItemSource.h"

@interface FDKFaceStickerFilter : GPUImageFilter<FDKDecorationFilterUpdating>
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDecorationItem:(FDKDecorationItem *)item itemSource:(FDKDecorationItemSource *)itemSource;

@end
