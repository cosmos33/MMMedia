//
//  MLCameraLowLightEnvironmentDetector.h
//  Pods
//
//  Created by YuAo on 12/04/2017.
//
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MLCameraLowLightEnvironmentDetector;

@protocol MLCameraLowLightEnvironmentDetectorDelegate <NSObject>

- (void)detectorDetectedEnvironmentChange:(MLCameraLowLightEnvironmentDetector *)detector isInLowLightEnvironment:(BOOL)isInLowLightEnvironment;

- (void)detectorDetectedexposureTargetOffsetChange:(MLCameraLowLightEnvironmentDetector *)detector exposureTargetOffset:(float)exposureTargetOffset;

@end

@interface MLCameraLowLightEnvironmentDetector : NSObject

@property (nonatomic,strong,nullable) AVCaptureDevice *device;

@property (nonatomic,readonly) BOOL isInLowLightEnvironment;

@property (nonatomic,weak) id<MLCameraLowLightEnvironmentDetectorDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
