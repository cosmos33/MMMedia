//
//  MLCameraPointOfInterestUtilities.h
//  Pods
//
//  Created by YuAo on 05/06/2017.
//
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

@interface MLCameraPointOfInterestUtilities : NSObject

+ (CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)point
                                  inPreviewView:(UIView *)previewView
                                   videoGravity:(NSString *)gravity
                                         device:(AVCaptureDevice *)device
                                     connection:(AVCaptureConnection *)connection;

+ (CGPoint)captureDevicePointOfInterestForPointInOutputImage:(CGPoint)point
                                             videoDimensions:(CMVideoDimensions)videoDimensions
                                                  connection:(AVCaptureConnection *)connection;

//call metadataOutputRectOfInterestForRect
+ (CGPoint)captureDevicePointOfInterestForPointInOutputImage:(CGPoint)point
                                                  connection:(AVCaptureConnection *)connection;

@end
