//
//  MLPlayerViewController.h
//  Pods
//
//  Created by YuAo on 1/13/17.
//
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MLPlayerVideoSource;

@interface MLPlayerVideoSourceVideoFrame : NSObject

@property (nonatomic, readonly) CGAffineTransform preferredTrackTransform;

@property (nonatomic, readonly) CMTime presentationTimestamp;

@property (nonatomic, readonly) CMTime playerTimestamp;

@property (nonatomic, readonly) CVPixelBufferRef sourcePixelBuffer;

@property (nonatomic, readonly) BOOL preferredTrackTransformIsApplied; //if preferredTrackTransform is CGAffineTransformIdentity. This value is always NO.

@end

@protocol MLPlayerVideoSourceDelegate <NSObject>

- (nullable NSDictionary *)preferredSourcePixelBufferAttributes; //if wantsPreferredTrackTransformApplied is YES, and the source has non-identity track transform. The pixel format of the source pixel buffer is always BGRA.

- (BOOL)wantsPreferredTrackTransformApplied;

- (void)playerVideoSource:(MLPlayerVideoSource *)videoSource didOutputVideoFrame:(MLPlayerVideoSourceVideoFrame *)videoFrame;

@optional

//works only wantsPreferredTrackTransformApplied is true

- (CGAffineTransform)overridePreferredTrackTransform:(CGAffineTransform)transform atTime:(CMTime)time;

@end

@interface MLPlayerVideoSource : NSObject

@property (nonatomic,weak,nullable) id<MLPlayerVideoSourceDelegate> delegate;

@property (nonatomic, strong, nullable) AVPlayer *player;

@property (nonatomic, readonly) CMTime currentVideoFrameTime;

- (void)setNeedsUpdate;

- (void)updateIfNeeded;

@property (nonatomic) BOOL automaticallyStartRunningWhenPlayerItemIsReadyToPlay;

@property (nonatomic, getter=isRunning) BOOL running;

@property (nonatomic) NSInteger preferredFramesPerSecond;

@property (nonatomic,strong,nullable) NSOperationQueue *renderQueue;

@end

NS_ASSUME_NONNULL_END
