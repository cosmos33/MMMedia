//
//  CXFaceGeometry.h
//  Pods
//
//  Created by Yu Ao on 07/02/2018.
//

#import <Foundation/Foundation.h>
@import MetalPetal;
@import MomoCV;

@interface CXFaceGeometry : NSObject

@property (nonatomic, class, readonly) NSArray<NSValue *> *meanFaceTextureCoordinates;
@property (nonatomic, class, readonly) NSArray<NSValue *> *makeupFaceTextureCoordinates;

+ (id<MTIGeometry>)geometryWithLandmarks:(NSArray <NSValue *> *)landmarks textureCoordinates:(NSArray<NSValue *> *)textureCoordinates renderSize:(CGSize)renderSize;

+ (id<MTIGeometry>)faceGeometryWithMaskLandmarks:(NSArray <NSValue *> *)landmarks maskTextureCoordinates:(NSArray<NSValue *> *)maskTextureCoordinates renderSize:(CGSize)renderSize;

+ (MTLRegion)regionForInterestTriangles:(NSArray<NSNumber *> *)indicesOfTrangles withLandmarks:(NSArray <NSValue *> *)landmarks;

+ (id<MTIGeometry>)faceGeometryForInterestTriangles:(NSArray<NSNumber *> *)indicesOfTrangles
                                      withLandmarks:(NSArray <NSValue *> *)landmarks
                                         renderSize:(CGSize)renderSize
                  textureCoordinateNormalizedRegion:(CGRect)textureRegion
                             maskTextureCoordinates:(NSArray<NSValue *> *)maskTextureCoordinates
              maskTextureCoordinateNormalizedRegion:(CGRect)maskRegion;

+ (NSArray<NSValue *> *)sampleTextureCoordinatesBetweenVertexIndices:(NSArray<NSNumber *> *)indices withLandmarks:(NSArray <NSValue *> *)landmarks renderSize:(CGSize)renderSize;

+ (CGPoint)point:(CGPoint)point clipingByRegion:(CGRect)region;

@end
