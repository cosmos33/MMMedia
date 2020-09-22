//
//  MMFaceLandmarks2DCX.h
//  Pods
//
//  Created by Yu Ao on 09/04/2018.
//

#import <Foundation/Foundation.h>
#import <MomoCV/MomoCV.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMFaceLandmarks2D (CXExtend)

- (instancetype)landmarksByExtendingTo104PointsForSkinSmoothing;

@property (nonatomic, readonly) CGRect boundingRect;

@end


typedef NS_ENUM(NSInteger, CXFaceShape) {
    CXFaceShapeUnknown,
    CXFaceShapeRound,
    CXFaceShapeOblong,
    CXFaceShapeSquare,
    CXFaceShapeDiamond,
    CXFaceShapeHeart,
    CXFaceShapeEgg,
    CXFaceShapePear
};

FOUNDATION_EXPORT NSString * CXFaceShapeGetDescription(CXFaceShape shape) NS_SWIFT_NAME(CXFaceShape.description(self:));

@interface CXFaceShapeClassifier: NSObject

- (CXFaceShape)faceShapeForFaceFeature:(MMFaceFeature *)faceFeature;

@end

FOUNDATION_EXPORT float CXFaceLandmarksGetSimilarity(MMFaceLandmarks2D *landmarksA, MMFaceLandmarks2D *landmarksB);

NS_ASSUME_NONNULL_END
