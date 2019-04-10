//
//  MLPixelBufferDisplay.h
//  Pods
//
//  Created by YuAo on 01/04/2017.
//
//

#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MLPixelBufferDisplayScalingMode) {
    MLPixelBufferDisplayScalingModeResizeAspectFill,
    MLPixelBufferDisplayScalingModeResizeAspectFit,
    MLPixelBufferDisplayScalingModeResize
};

FOUNDATION_EXPORT NSString *MLAVLayerVideoGravityFromScalingMode(MLPixelBufferDisplayScalingMode mode);
FOUNDATION_EXPORT MLPixelBufferDisplayScalingMode MLPixelBufferDisplayScalingModeFromAVLayerVideoGravity(NSString *gravity);

@protocol MLPixelBufferDisplay <NSObject>

@property (nonatomic) MLPixelBufferDisplayScalingMode scalingMode;

- (BOOL)presentPixelBuffer:(CVPixelBufferRef)pixelBuffer;

@end

NS_ASSUME_NONNULL_END

