//
//  FDKDecorationItemFilter.h
//  Pods
//
//  Created by YuAo on 11/28/16.
//
//

#import <GPUImage/GPUImage.h>
#import <FaceDecorationKit/FaceDecorationKit.h>

NS_ASSUME_NONNULL_BEGIN

@class FDKDecorationItemSource;

@interface FDKDecorationItemFilter : GPUImageFilterGroup <FDKSoundableFilter>

@property (nonatomic,strong,readonly) FDKDecorationItemSource *sequenceImageSource;

@property (nonatomic,strong,nullable) id<FDKLandmarksConverter> landmarksConverter;
@property (nonatomic,strong,nullable) id<FDKAudioPrism> audioPrism;

@property (nonatomic) NSInteger preferredFrameRate;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithItem:(FDKDecorationItem *)item;

- (BOOL)interruptibleSwapItem;

@end

@interface FDKDecorationItemFilter (FDKDecorationFilterUpdating) <FDKDecorationFilterUpdating>

@end

NS_ASSUME_NONNULL_END
