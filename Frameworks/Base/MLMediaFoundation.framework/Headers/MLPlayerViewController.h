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

@class MLPlayerViewController;

@interface MLPlayerVideoFilteringRequest : NSObject

@property (nonatomic, readonly) CGAffineTransform preferredTrackTransform;

@property (nonatomic, readonly) CMTime presentationTimestamp;

@property (nonatomic, readonly) CMTime playerTimestamp;

@property (nonatomic, readonly) CVPixelBufferRef sourcePixelBuffer;

@property (nonatomic, readonly) BOOL preferredTrackTransformIsApplied; //if preferredTrackTransform is CGAffineTransformIdentity. This value is always NO.

@end


@protocol MLPlayerVideoFilterPlugin <NSObject>

- (nullable NSDictionary *)preferredSourcePixelBufferAttributes; //if wantsPreferredTrackTransformApplied is YES, and the source has non-identity track transform. The pixel format of the source pixel buffer is always BGRA.

- (BOOL)wantsPreferredTrackTransformApplied;

- (void)handleVideoFilteringRequest:(MLPlayerVideoFilteringRequest *)request completion:(void (^)(CVPixelBufferRef resultBuffer))completion failure:(void (^)(NSError *error))failure NS_SWIFT_NAME(handleVideoFilteringRequest(_:completion:failure:));

@optional

//works only wantsPreferredTrackTransformApplied is true

- (CGAffineTransform)overridePreferredTrackTransform:(CGAffineTransform)transform atTime:(CMTime)time;

@end


@protocol MLPlayerViewControllerDelegate <NSObject>

@optional

- (void)playerViewController:(MLPlayerViewController *)controller playerItemUpdated:(AVPlayerItem *)currentItem;

@end

@interface MLPlayerViewController : UIViewController

@property(class, nonatomic, readonly) Class renderViewClass; //UIView<MLPixelBufferDisplay>

@property (nonatomic,strong,nullable) id<MLPlayerVideoFilterPlugin> filterPlugin;

@property (nonatomic,weak) id<MLPlayerViewControllerDelegate> delegate;

/*!
	@property	player
	@abstract	The player from which to source the media content for the view controller.
 */
@property (nonatomic, strong, nullable) AVPlayer *player;

/*!
	@property	videoGravity
	@abstract	A string defining how the video is displayed within an AVPlayerLayer bounds rect.
	@discussion	Options are AVLayerVideoGravityResizeAspect, AVLayerVideoGravityResizeAspectFill and AVLayerVideoGravityResize. AVLayerVideoGravityResizeAspect is default.
 See <AVFoundation/AVAnimation.h> for a description of these options.
 */
@property (nonatomic, copy) NSString *videoGravity;

@property (nonatomic, readonly) CMTime currentVideoFrameTime;

- (void)setNeedsRenderingUpdate;

- (void)updateRenderingIfNeeded;

@property (nonatomic) NSInteger preferredFramesPerSecond;

@property (nonatomic,strong,nullable) NSOperationQueue *renderQueue;

@property (nonatomic) BOOL automaticallyPausesPlaybackWhenViewDisappeared; //Default YES

@end

NS_ASSUME_NONNULL_END
