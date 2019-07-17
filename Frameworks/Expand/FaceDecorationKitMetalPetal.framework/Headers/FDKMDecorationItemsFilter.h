//
//  FDKMDecorationItemsFilter.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2017/11/28.
//

#import <Foundation/Foundation.h>
#import "FDKMDecorationItemSource.h"
#import "FDKMUnaryFilterProtocol.h"
@import MetalPetal;
@import FaceDecorationKit;
NS_ASSUME_NONNULL_BEGIN

@interface FDKMDecorationItemsFilter : NSObject<MTIUnaryFilter, FDKDecorationFilterUpdating, FDKMUnaryFilterProtocol>

@property (nonatomic, copy, readonly, nullable) NSArray <FDKDecorationItem *>*items;

@property (nonatomic,strong,nullable) id<FDKLandmarksConverter> landmarksConverter;

@property (nonatomic) NSInteger preferredFrameRate;

@property (nonatomic, readonly, nullable) MTIImage *outputImage;

@property (nonatomic,strong,nullable) MTIImage *intputImage;

@property (nonatomic,strong,nullable) id<FDKAudioPrism> audioPrisms;

@property (nonatomic) float audioVolume;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithItems:(nullable NSArray <FDKDecorationItem *>*)items;
@end

NS_ASSUME_NONNULL_END
