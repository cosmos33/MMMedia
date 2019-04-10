//
//  MLAudioPrism.h
//  Pods
//
//  Created by YuAo on 3/13/17.
//
//

#import <Foundation/Foundation.h>

#import <AVFoundation/AVFoundation.h>
#import <CoreImage/CoreImage.h>

NS_ASSUME_NONNULL_BEGIN

@interface MLAudioPrism : NSObject

- (void)updateWithSampleBuffer:(CMSampleBufferRef)sampleBuffer;

- (void)updateWithAudioBufferList:(AudioBufferList)audioBufferList audioStreamBasicDescription:(AudioStreamBasicDescription *)asbd frameCount:(CMItemCount)numberOfFrames;

- (void)updateWithChannelsPerFrame:(UInt32)channelsPerFrame bytesPerFrame:(UInt32)bytesPerFrame frameCount:(size_t)frameCount data:(void *)frames;

@property (nonatomic,copy,readonly) NSData *spectrumDataRepresentation;

@property (nonatomic,strong,readonly) CIImage *spectrumImageRepresentation;

@property (nonatomic,readonly) CVPixelBufferRef spectrumPixelBufferRepresentation CF_RETURNS_NOT_RETAINED;

@end

NS_ASSUME_NONNULL_END
