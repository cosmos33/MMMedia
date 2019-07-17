//
//  FDKLandmarksConverter.h
//  Pods
//
//  Created by YuAo on 8/22/16.
//
//

#import <Foundation/Foundation.h>
#import "FDKProtocols.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FDKLandmarksConverter <NSObject>

- (NSArray<NSValue *> *)landmarksFromLandmarksInFaceFeature:(id<FDKFaceFeature>)faceFeature;

@end

@interface FDK96To68PointsLandmarksConverter : NSObject <FDKLandmarksConverter>

@end

NS_ASSUME_NONNULL_END
