//
//  MLAudioTapProcessor.h
//  Pods
//
//  Created by YuAo on 04/04/2017.
//
//

#import <Foundation/Foundation.h>
#import <MediaToolbox/MediaToolbox.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MLAudioTapProcessor;

@protocol MLAudioTapProcessorCallbackDelegate <NSObject>

@required

- (void)audioTapProcessorProcess:(MLAudioTapProcessor *)processor numberOfFrames:(CMItemCount)numberFrames flags:(MTAudioProcessingTapFlags)flags audioBufferList:(AudioBufferList *)bufferListInOut numberOfFramesOut:(CMItemCount *)numberFramesOut flagsOut:(MTAudioProcessingTapFlags *)flagsOut;

@optional

- (void)audioTapProcessorPrepare:(MLAudioTapProcessor *)processor maxFrames:(CMItemCount)maxFrames processingFormat:(const AudioStreamBasicDescription *)processingFormat;

- (void)audioTapProcessorUnprepare:(MLAudioTapProcessor *)processor;

@end

@interface MLAudioTapProcessorCallbacks : NSObject <NSCopying>

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithPrepareCallback:(void (^)(MLAudioTapProcessor *tapProcessor, CMItemCount maxFrames, const AudioStreamBasicDescription *processingFormat))prepareCallback
                      unprepareCallback:(void (^)(MLAudioTapProcessor *tapProcessor))unprepareCallback
                        processCallback:(void (^)(MLAudioTapProcessor *tapProcessor, CMItemCount numberFrames, MTAudioProcessingTapFlags flags, AudioBufferList *bufferListInOut, CMItemCount *numberFramesOut, MTAudioProcessingTapFlags *flagsOut))processCallback NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithDelegate:(id<MLAudioTapProcessorCallbackDelegate>)delegate NS_DESIGNATED_INITIALIZER;

@end

@interface MLAudioTapProcessorProcessingFormat : NSObject

@property (nonatomic,readonly) CMItemCount maximumNumberOfFrames;

@property (nonatomic,readonly) AudioStreamBasicDescription audioStreamBasicDescription;

@end

@interface MLAudioTapProcessorOptions : NSObject <NSCopying>

@property (nonatomic) BOOL automaticallyFillsBufferWithSource;

@end

@interface MLAudioTapProcessor : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithFlags:(MTAudioProcessingTapCreationFlags)flags options:(MLAudioTapProcessorOptions *)options callbacks:(MLAudioTapProcessorCallbacks *)callbacks NS_DESIGNATED_INITIALIZER;

@property (atomic,readonly,nullable,strong) MLAudioTapProcessorProcessingFormat *processingFormat;

@property (nonatomic) MTAudioProcessingTapRef internalTapProcessor NS_RETURNS_INNER_POINTER CF_RETURNS_NOT_RETAINED;

@end

@interface MLAudioTapProcessor (AVFoundation)

- (AVMutableAudioMixInputParameters *)mutableAudioMixInputParametersWithTrack:(nullable AVAssetTrack *)track NS_SWIFT_NAME(makeMutableAudioMixInputParameters(with:));

@end

NS_ASSUME_NONNULL_END
