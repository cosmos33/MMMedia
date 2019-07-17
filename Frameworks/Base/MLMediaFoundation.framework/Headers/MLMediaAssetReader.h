//
//  MLMediaAssetReader.h
//  MomoChat
//
//  Created by YuAo on 11/11/16.
//  Copyright © 2016 wemomo.com. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MLMediaAssetReader;

/// delegate callbacks are in delegate queue.
@protocol MLMediaAssetReaderDelegate <NSObject>

- (void)assetReaderDidFinishProcessingMovie:(MLMediaAssetReader *)assetReader;

- (void)assetReader:(MLMediaAssetReader *)assetReader didOutputVideoSampleBuffer:(CMSampleBufferRef)sampleBuffer;

- (void)assetReader:(MLMediaAssetReader *)assetReader didOutputAudioSampleBuffer:(CMSampleBufferRef)sampleBuffer;

@optional

- (BOOL)assetReaderSetupSynchronizedReading:(MLMediaAssetReader *)assetReader;

@end

@interface MLMediaAssetReader : NSObject

@property (nonatomic, strong, readonly) AVAsset *asset;

@property (nonatomic, assign) CMTimeRange timeRange;

/** This determines whether to play back a movie as fast as the frames can be processed, or if the original speed of the movie should be respected. Defaults to NO.
 */
@property (nonatomic) BOOL playAtActualSpeed;

/** This determines whether the video should repeat (loop) at the end and restart from the beginning. Defaults to NO.
 */
@property (nonatomic) BOOL shouldRepeat;

/** This specifies the progress of the process on a scale from 0 to 1.0. A value of 0 means the process has not yet begun, A value of 1.0 means the conversaion is complete.
 This property is not key-value observable.
 */
@property(readonly, nonatomic) float progress;

/** This is used to send the delete Movie did complete playing alert
 */
@property (nonatomic, weak, nullable) id<MLMediaAssetReaderDelegate>delegate;

@property (nonatomic, strong, readonly) dispatch_queue_t queue;

/// @name Initialization and teardown
- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithAsset:(AVAsset *)asset;

- (instancetype)initWithAsset:(AVAsset *)asset videoComposition:(nullable AVVideoComposition *)videoComposition audioMix:(nullable AVAudioMix *)audioMix NS_DESIGNATED_INITIALIZER;

/// @name Movie processing
- (BOOL)readNextVideoFrame;
- (BOOL)readNextAudioSample;

- (void)startReading;
- (void)cancelReading;

@property (nonatomic,copy,nullable) NSDictionary *outputVideoSettings;
@property (nonatomic,copy,nullable) NSDictionary *outputAudioSettings;

- (nullable CMFormatDescriptionRef)audioOutputFormatHint CF_RETURNS_NOT_RETAINED;

@end

NS_ASSUME_NONNULL_END
