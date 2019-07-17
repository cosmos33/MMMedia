//
//  WPShortVideoRecorder.h
//  WeicoPlusUniversal
//
//  Created by YuAo on 2/19/13.
//  Copyright (c) 2013 北京微酷奥网络技术有限公司. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

@class MLMovieFileWriter;

@protocol MLMovieFileWriterDelegate <NSObject>

- (void)movieFileWriter:(MLMovieFileWriter *)writer didWriteVideoFrameAtTime:(CMTime)time totalDuration:(NSTimeInterval)duration;

- (void)movieFileWriterDidStartSavingMovie:(MLMovieFileWriter *)writer;

- (void)movieFileWriter:(MLMovieFileWriter *)writer didFinishSavingMovieAtURL:(NSURL *)URL error:(NSError *)error;

- (void)movieFileWriter:(MLMovieFileWriter *)writer movieSegmentsUpdated:(NSArray *)segments;

@end

@interface MLMovieFileWriter : NSObject

@property (nonatomic,readonly)          BOOL             recording;

@property (nonatomic, readonly)         NSInteger        savedSegmentCount;

@property (nonatomic,copy)              NSDictionary     *videoCompressionSettings;
@property (nonatomic,copy)              NSDictionary     *audioCompressionSettings;

/* Callbacks */
@property (nonatomic,copy)              void             (^totalDurationUpdatedHandler)(NSTimeInterval duration);

@property (nonatomic,copy)              void             (^didStartSavingMovieHandler)(void);
@property (nonatomic,copy)              void             (^didFinishSavingMovieHandler)(NSURL *videoURL, NSError *error);

@property (nonatomic,copy)              void             (^movieSegmentsUpdatedHandler)(NSArray *durations);

@property (nonatomic) int videoOrientation;

@property (nonatomic, copy) NSArray<AVMetadataItem *> *metadata;

/* Start/Pause */
- (void)start;

- (void)pause;

- (void)cancel;

/* stop, finish */
- (void)stop;

/* reset */
- (void)reset;

/* delete */
- (void)deleteLastVideoSegment;

- (void)appendSampleBuffer:(CMSampleBufferRef)sampleBuffer;

@end
