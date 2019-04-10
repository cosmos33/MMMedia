//
//  HNMovieRecorder.h
//  HoneyApp
//
//  Created by little2s on 2017/11/21.
//  Copyright © 2017 wemomo.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MLMovieRecorderDelegate;

@interface MLMovieRecorder : NSObject

@property (nonatomic, copy) NSArray<AVMetadataItem *> *metadata;

@property (nonatomic, assign) int videoOrientation;

@property (nonatomic, copy) NSDictionary *videoSettings;

@property (nonatomic, copy) NSDictionary *audioSettings;

@property (nonatomic, assign, readonly) CMTime duration;

// Set audio enabled `YES` to record both video and audio.
// Set `NO' to record video only. Default is `YES `
@property (nonatomic, assign) BOOL audioEnabled;

// delegate is weak referenced
- (instancetype)initWithURL:(NSURL *)URL delegate:(id<MLMovieRecorderDelegate>)delegate callbackQueue:(dispatch_queue_t)queue;

// Asynchronous, might take several hundred milliseconds.
// When finished the delegate's recorderDidFinishPreparing: or recorder:didFailWithError: method will be called.
- (void)prepareToRecord;

- (void)appendSampleBuffer:(CMSampleBufferRef)sampleBuffer;

// Asynchronous, might take several hundred milliseconds.
// When finished the delegate's recorderDidFinishRecording: or recorder:didFailWithError: method will be called.
- (void)finishRecording;

// Asynchronous, might take several hundred milliseconds.
// When finished the delegate's movieRecorderDidCancelRecording: method will be called.
- (void)cancelRecording;

@end

@protocol MLMovieRecorderDelegate <NSObject>

@required
- (void)movieRecorderDidFinishPreparing:(MLMovieRecorder *)recorder;
- (void)movieRecorderDidCancelRecording:(MLMovieRecorder *)recorder;
- (void)movieRecorder:(MLMovieRecorder *)recorder didFailWithError:(NSError *)error;
- (void)movieRecorderDidFinishRecording:(MLMovieRecorder *)recorder;

@optional
- (void)movieRecorder:(MLMovieRecorder *)recorder didUpdateWithTotalDuration:(NSTimeInterval)totalDuration;

@end

NS_ASSUME_NONNULL_END

