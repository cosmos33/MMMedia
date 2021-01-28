//
//  FDKMItemLayerGenerator.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2017/12/21.
//

#import <Foundation/Foundation.h>

#import "FDKMDecorationItemSource.h"
@import MetalPetal;
@import FaceDecorationKit;
@interface FDKMDecorationItemInfo: NSObject

@property (nonatomic, assign) BOOL showing;
@property (nonatomic, assign) BOOL showed;
@property (nonatomic) BOOL previousTriggered; // ?
@property (nonatomic) BOOL currentTriggered; // ?

@property (nonatomic, assign) NSUInteger  sequenceImageSourceTick;
@property (nonatomic, assign) NSInteger hideFrameCount;
@property (nonatomic, strong) FDKAudioPlayer *audioPlayer;
@property (nonatomic, strong) FDKMDecorationAudioVisualizationItemSource *audioVisualizationImageSource;
@property (nonatomic, strong) FDKMDecorationItemSource *sequenceImageSource;
@property (nonatomic, strong) FDKDecorationItem *item;

@property (nonatomic, strong) id<FDK3DRendering> renderer;

@property (nonatomic,strong) id<FDKObjectFeature> lastValidObjectFeature;

@property (nonatomic, assign) CGSize decorationSize;
@property (nonatomic, assign) CGPoint decorationCenter;
@property (nonatomic, assign) float decorationRotation;
@end



@interface FDKMItemLayerGenerator : NSObject
@property (nonatomic, assign) NSUInteger preferredFrameRate;
@property (nonatomic) MTLPixelFormat outputPixelFormat;
@property (nonatomic, strong) id<FDKLandmarksConverter> landmarksConverter;


- (void)generateLayerFromItemInfo:(FDKMDecorationItemInfo *)itemInfo
                decorationRequest:(FDKDecorationFilterUpdateRequest *)request
                      sourceImage:(MTIImage *)inputImage
                        generated:(void(^)(MTILayer *layer))generated;
@end
