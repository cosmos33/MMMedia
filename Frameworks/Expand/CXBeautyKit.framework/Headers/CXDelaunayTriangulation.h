//
//  FDKLandmarksExtend.h
//  Pods
//
//  Created by YuAo on 10/11/16.
//
//

#import <Foundation/Foundation.h>

//Delaunay Triangulation 104 landmarks
FOUNDATION_EXPORT NSInteger const CXFaceTriangulationIndexes[];
FOUNDATION_EXPORT NSInteger const CXFaceTriangulationNumberOfTriangles;

FOUNDATION_EXPORT NSArray<NSNumber *> * const CXFaceLipsTrianglesIndices;
FOUNDATION_EXPORT NSArray<NSNumber *> * const CXFaceInsideMouthTrianglesIndices;
FOUNDATION_EXPORT NSArray<NSNumber *> * const CXFaceEyeTrianglesIndices;
FOUNDATION_EXPORT NSArray<NSNumber *> * const CXFaceMouthTrianglesIndices;

FOUNDATION_EXPORT NSArray<NSNumber *> * const CXFaceLipsSamplePointsIndices;
FOUNDATION_EXPORT NSArray<NSNumber *> * const CXFaceTeethSamplePointsIndices;
FOUNDATION_EXPORT NSArray<NSNumber *> * const CXFaceEyesSamplePointsIndices;

@class MMFaceLandmarks2D;

FOUNDATION_EXPORT MMFaceLandmarks2D * CXExtend96PtLandmarksTo104PtLandmarksForSkinSmoothing(MMFaceLandmarks2D *landmarks);

