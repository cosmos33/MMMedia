//
//  MLGPUImageMovie.h
//  MomoChat
//
//  Created by YuAo on 11/11/16.
//  Copyright © 2016 wemomo.com. All rights reserved.
//  Deprecated

@import GPUImage;
@import MLGPUImageCVPixelBufferIO;
@import MLMediaFoundation;

@class MLGPUImageMovie;

NS_ASSUME_NONNULL_BEGIN

@protocol MLGPUImageMovieDelagete <NSObject>

- (void)movieDidFinishProcessing:(MLGPUImageMovie *)movie;

@end

@interface MLGPUImageMovie : NSObject

/** This determines whether to play back a movie as fast as the frames can be processed, or if the original speed of the movie should be respected. Defaults to NO.
 */
@property(readwrite, nonatomic) BOOL playAtActualSpeed;

/** This determines whether the video should repeat (loop) at the end and restart from the beginning. Defaults to NO.
 */
@property(readwrite, nonatomic) BOOL shouldRepeat;

/** This specifies the progress of the process on a scale from 0 to 1.0. A value of 0 means the process has not yet begun, A value of 1.0 means the conversaion is complete.
 This property is not key-value observable.
 */
@property(readonly, nonatomic) float progress;

/** This is used to send the delete Movie did complete playing alert
 */
@property (readwrite, nonatomic, assign, nullable) id <MLGPUImageMovieDelagete>delegate;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithAsset:(AVAsset *)asset;

- (instancetype)initWithAsset:(AVAsset *)asset videoComposition:(nullable AVVideoComposition *)videoComposition audioMix:(nullable AVAudioMix *)audioMix NS_DESIGNATED_INITIALIZER;

- (void)enableSynchronizedEncodingUsingMovieWriter:(GPUImageMovieWriter *)movieWriter;

- (void)startProcessing;

- (void)cancelProcessing;

@property (readonly, nonatomic) GPUImageOutput *output;

- (nullable CMFormatDescriptionRef)audioOutputFormatHint CF_RETURNS_NOT_RETAINED;

@end

NS_ASSUME_NONNULL_END
