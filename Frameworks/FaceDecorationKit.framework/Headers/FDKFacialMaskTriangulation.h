//
//  FDKLandmarksExtend.h
//  Pods
//
//  Created by YuAo on 10/11/16.
//
//

#import <Foundation/Foundation.h>

//Delaunay Triangulation
FOUNDATION_EXPORT NSInteger const FDKFacialMaskTriangulationIndexes[];
FOUNDATION_EXPORT NSInteger const FDKFacialMaskTriangulationNumberOfTriangles;

// Manga Triangulation
FOUNDATION_EXPORT NSInteger const FDKMangaFacialMaskTriangulationIndexes[];
FOUNDATION_EXPORT NSInteger const FDKMangaFacialMaskTriangulationNumberOfTriangles;

FOUNDATION_EXPORT NSArray<NSValue *> * FDKExtend96PtLandmarksTo104PtLandmarks(NSArray<NSValue *> *landmarks);
