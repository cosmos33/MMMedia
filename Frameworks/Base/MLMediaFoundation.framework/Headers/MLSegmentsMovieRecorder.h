//
//  HNSegmentsRecorder.h
//  HoneyApp
//
//  Created by little2s on 2018/1/5.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MLSegmentsMovieRecorderDelegate;

@interface MLSegmentsMovieRecorder : NSObject

@property (nonatomic, copy) NSArray<AVMetadataItem *> *metadata;

@property (nonatomic, assign) int videoOrientation;

@property (nonatomic, copy) NSDictionary *videoSettings;

@property (nonatomic, copy) NSDictionary *audioSettings;

@property (nonatomic, assign) BOOL autoCleanSegmentsAfterMerge;

// Set audio enabled `YES` to record both video and audio.
// Set `NO' to record video only. Default is `YES `
@property (nonatomic, assign) BOOL audioEnabled;

- (instancetype)initWithDelegate:(id<MLSegmentsMovieRecorderDelegate>)delegate callbackQueue:(dispatch_queue_t)queue;

// for current segment
- (void)startRecording;

- (void)appendSampleBuffer:(CMSampleBufferRef)sampleBuffer;

- (void)stopRecording;

- (void)cancelRecording;

// for segments
- (void)deleteLastSegment;
- (void)deleteAllSegments;

- (void)mergeAllSegments;

@end

@class MLMovieSegment;

@protocol MLSegmentsMovieRecorderDelegate <NSObject>

// for current segment
@required
- (void)segmentsRecorderDidStartRecording:(MLSegmentsMovieRecorder *)recorder;
- (void)segmentsRecorderDidCancelRecording:(MLSegmentsMovieRecorder *)recorder;
- (void)segmentsRecorder:(MLSegmentsMovieRecorder *)recorder didFailWithError:(NSError *)error;
- (void)segmentsRecorderDidStopRecording:(MLSegmentsMovieRecorder *)recorder;

@optional
- (void)segmentsRecorder:(MLSegmentsMovieRecorder *)recorder didUpdateWithDuration:(NSTimeInterval)duration;

// for segments
- (void)segmentsRecorder:(MLSegmentsMovieRecorder *)recorder didUpdateSegments:(NSArray<MLMovieSegment *> *)segments;
- (void)segmentsRecorder:(MLSegmentsMovieRecorder *)recorder didStopMergingWithURL:(NSURL *)url;

@end

@interface MLMovieSegment : NSObject
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, assign) NSTimeInterval duration;
@end

NS_ASSUME_NONNULL_END
