//
//  FDKDecorationItemSource.h
//  FaceDecorationKitDemo
//
//  Created by YuAo on 6/20/16.
//  Copyright © 2016 Momo. All rights reserved.
//

@import GPUImage;
@import FaceDecorationKit;
#import "GPUImage+FDKResource.h"

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const FDKResourceRequestingDecorationItemKey;

@protocol FDKDecorationItemSourceProtocol <NSObject>

@property (nonatomic,readonly) BOOL alphaPremultiplied;

@optional

@property (nonatomic,readonly) CGRect textureFrame;

@property (nonatomic,readonly) BOOL textureRotateEnabled;

@end

@interface FDKDecorationItemSource : GPUImageFilterGroup <FDKDecorationItemSourceProtocol>

@property (nonatomic,copy,nullable) FDKDecorationItem *item;

@property (nonatomic) BOOL paused;

- (void)reset;

@property (nonatomic,readonly) BOOL alphaPremultiplied;

@property (nonatomic) NSInteger preferredFrameRate;

@property (nonatomic,readonly) BOOL loopingLastFrame;

@property (nonatomic,readonly) NSUInteger currentDecorationIndex;

- (NSInteger)decorationIndexForFrameTime:(CMTime)frameTime;

@end

@interface FDKDecorationItemSource (ResourceClass)

+ (void)registerResourceClass:(Class<FDKGPUImageResource>)resourceClass;
+ (void)unregisterResourceClass:(Class<FDKGPUImageResource>)resourceClass;

+ (Class<FDKGPUImageResource>)resourceClassForURL:(NSURL *)URL;

@end


@interface FDKDecorationAudioVisualizationItemSource : GPUImageFilterGroup <FDKDecorationItemSourceProtocol>

@property (nonatomic,strong) id<FDKAudioPrism> audioPrism;

- (instancetype)initWithItem:(FDKDecorationItem *)item;

@property (nonatomic,readonly) BOOL alphaPremultiplied;

@end

NS_ASSUME_NONNULL_END
