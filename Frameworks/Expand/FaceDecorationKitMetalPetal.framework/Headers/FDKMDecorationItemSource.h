//
//  FDKMDecorationItemSource.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2017/11/29.
//

#import <Foundation/Foundation.h>
@import MetalPetal;
@import FaceDecorationKit;

NS_ASSUME_NONNULL_BEGIN

@protocol FDKMDecorationItemSourceProtocol <NSObject>

@property (nonatomic,readonly) BOOL alphaPremultiplied;

@optional

@property (nonatomic,readonly) CGRect textureFrame;

@property (nonatomic,readonly) BOOL textureRotateEnabled;

@end

@interface FDKMDecorationItemSource : NSObject <MTIUnaryFilter, FDKMDecorationItemSourceProtocol>

@property (nonatomic, assign) CMTime currentFrameTime;

@property (nonatomic,copy,nullable) FDKDecorationItem *item;

@property (nonatomic) BOOL paused;

- (void)reset;

@property (nonatomic,readonly) BOOL alphaPremultiplied;

@property (nonatomic) NSInteger preferredFrameRate;

@property (nonatomic,readonly) BOOL loopingLastFrame;

@property (nonatomic,readonly) NSUInteger currentDecorationIndex;

- (MTIImage *)textureForFrameTime:(CMTime)frameTime;

- (NSInteger)decorationIndexForFrameTime:(CMTime)frameTime;
@end



@interface FDKMDecorationAudioVisualizationItemSource : NSObject <MTIFilter, FDKMDecorationItemSourceProtocol>

@property (nonatomic,strong) id<FDKAudioPrism> audioPrism;

- (instancetype)initWithItem:(FDKDecorationItem *)item;

@property (nonatomic, assign) CMTime frameTime;
@property (nonatomic,readonly) BOOL alphaPremultiplied;

@end

NS_ASSUME_NONNULL_END
