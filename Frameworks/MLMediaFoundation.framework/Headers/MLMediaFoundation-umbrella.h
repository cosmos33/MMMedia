#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AVAsynchronousCIImageFilteringRequest+SourceBuffer.h"
#import "MLAudioPrism.h"
#import "MLAudioTapProcessor.h"
#import "MLAVAssetExportSession.h"
#import "MLCamera.h"
#import "MLCameraLowLightEnvironmentDetector.h"
#import "MLCameraPointOfInterestUtilities.h"
#import "MLCVPixelBufferPool.h"
#import "MLImageUtilities.h"
#import "MLMediaAssetReader.h"
#import "MLMediaGeometryUtilities.h"
#import "MLMediaUtilities.h"
#import "MLMovieFileWriter.h"
#import "MLMovieRecorder.h"
#import "MLPixelBufferDisplay.h"
#import "MLPixelBufferDisplayView.h"
#import "MLPixelBufferGLDisplayView.h"
#import "MLPixelBufferMTLDisplayView.h"
#import "MLPlayerVideoSource.h"
#import "MLPlayerViewController.h"
#import "MLSampleBufferDisplayView.h"
#import "MLSegmentsMovieRecorder.h"
#import "MLVideoFramePresentationTransformer.h"

FOUNDATION_EXPORT double MLMediaFoundationVersionNumber;
FOUNDATION_EXPORT const unsigned char MLMediaFoundationVersionString[];

