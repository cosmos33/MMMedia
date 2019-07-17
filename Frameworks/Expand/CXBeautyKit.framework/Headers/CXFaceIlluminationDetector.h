//
//  CXFaceIlluminationDetector.h
//  Pods
//
//  Created by Yu Ao on 05/03/2018.
//

#import <Foundation/Foundation.h>
@import MomoCV;

NS_ASSUME_NONNULL_BEGIN

@interface CXFaceIlluminationDetector : NSObject

+ (NSArray<NSNumber *> *)averageIlluminationsForFaces:(NSArray<MMFaceFeature *> *)faceFeatures inPixelBuffer:(CVPixelBufferRef)pixelBuffer;

+ (NSNumber *)averageIlluminationForTargetArea:(CGRect)targetArea inPixelBuffer:(CVPixelBufferRef)pixelBuffer;

@end

NS_ASSUME_NONNULL_END
