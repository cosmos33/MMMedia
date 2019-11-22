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

FOUNDATION_EXPORT NSArray<NSValue *> * CXExtend96PtLandmarksTo104PtLandmarksForSkinSmoothing(NSArray<NSValue *> *landmarks);
FOUNDATION_EXPORT NSArray<NSValue *> * CXExtend96PtLandmarksTo104PtLandmarksForFaceTextureBlending(NSArray<NSValue *> *landmarks);

FOUNDATION_EXPORT CGRect CXFaceTriangulationGetBoundingBoxForTrianglesAtIndexes(NSArray<NSNumber*> *triangleIndices, NSArray<NSValue *> *landmarks) __attribute__((__overloadable__));

FOUNDATION_EXPORT CGRect CXFaceTriangulationGetBoundingBoxForTrianglesAtIndexes(NSIndexSet *triangleIndices, NSArray<NSValue *> *landmarks) __attribute__((__overloadable__));

FOUNDATION_EXPORT CGRect CXFaceTriangulationGetBoundingBoxForLandmarks(NSArray<NSValue *> *landmarks);

