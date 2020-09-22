//
//  CXFaceGeometry.h
//  Pods
//
//  Created by Yu Ao on 07/02/2018.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>
#import <MomoCV/MomoCV.h>

@class CXTextureCoordinates;

@interface CXFaceGeometry : NSObject

@property (nonatomic, class, readonly) CXTextureCoordinates *meanFaceTextureCoordinates;
@property (nonatomic, class, readonly) CXTextureCoordinates *meanFaceTextureCoordinatesExtended104ForSkinSmoothing;
@property (nonatomic, class, readonly) CXTextureCoordinates *makeupFaceTextureCoordinates;

+ (MTLRegion)regionForInterestTriangles:(NSArray<NSNumber *> *)indicesOfTrangles withLandmarks:(NSArray <NSValue *> *)landmarks;

+ (id<MTIGeometry>)faceGeometryForInterestTriangles:(NSArray<NSNumber *> *)indicesOfTrangles
                                      withLandmarks:(MMFaceLandmarks2D *)landmarks
                                         renderSize:(CGSize)renderSize
                  textureCoordinateNormalizedRegion:(CGRect)textureRegion
                             maskTextureCoordinates:(CXTextureCoordinates *)maskTextureCoordinates
              maskTextureCoordinateNormalizedRegion:(CGRect)maskRegion;

+ (NSArray<NSValue *> *)sampleTextureCoordinatesBetweenVertexIndices:(NSArray<NSNumber *> *)indices withLandmarks:(NSArray <NSValue *> *)landmarks renderSize:(CGSize)renderSize;

+ (CGPoint)point:(CGPoint)point clipingByRegion:(CGRect)region;

@end
