//
//  BBCamera.h
//  BiBi
//
//  Created by YuAo on 3/29/16.
//  Copyright © 2016 wemomo.com. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MLCamera : NSObject

@property (nonatomic, strong, readonly) AVCaptureDevice *currentCameraDevice;

@property (nonatomic, strong, readonly) AVCaptureConnection *videoCaptureConnection;
@property (nonatomic, strong, readonly) AVCaptureConnection *audioCaptureConnection;

@property (nonatomic, strong, readonly) AVCaptureSession *captureSession;

@property (nonatomic, strong, readonly, nullable) AVCaptureVideoDataOutput *videoDataOutput;
@property (nonatomic, strong, readonly, nullable) AVCaptureAudioDataOutput *audioDataOutput;

- (instancetype)init NS_UNAVAILABLE;

- (id)initWithSessionPreset:(NSString *)sessionPreset cameraPosition:(AVCaptureDevicePosition)cameraPosition;

- (void)enableVideoDataOutputWithDelegate:(id<AVCaptureVideoDataOutputSampleBufferDelegate>)delegate queue:(dispatch_queue_t)queue;

- (void)enableAudioDataOutputWithDelegate:(id<AVCaptureAudioDataOutputSampleBufferDelegate>)delegate queue:(dispatch_queue_t)queue;

- (void)enableMetadataOutputWithDelegate:(id<AVCaptureMetadataOutputObjectsDelegate>)delegate queue:(dispatch_queue_t)queue forMetadataObjectTypes:(NSArray<NSString *> *)objectTypes;

- (void)disableAudioDataOutput;

- (void)disableMetadataOutput;

- (void)startRunningCaptureSession;

- (void)stopRunningCaptureSession;

- (void)rotateCamera;

@property (nonatomic) NSInteger videoCaptureDeviceFrameRate;

@end

NS_ASSUME_NONNULL_END
