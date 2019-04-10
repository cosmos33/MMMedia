//
//  CXTriangulation.h
//  CXBeautyKit
//
//  Created by Jackie on 2018/3/19.
//

#import <Foundation/Foundation.h>

@import MomoCV;
@import MetalPetal;

NS_ASSUME_NONNULL_BEGIN

@interface CXFaceTriangulation : NSObject

@property (nonatomic, readonly) NSUInteger pointCount;

@property (nonatomic, readonly) NSUInteger triangleCount;

+ (nonnull instancetype)triangulation104;

+ (nonnull instancetype)triangulation137;

- (simd_uint3)triangleAtIndex:(NSUInteger)index;

- (NSUInteger)totalVertexCount;

- (NSUInteger)vertexsPerTriangle;

- (void)landmarks:(const simd_float2 *)landmarks foreach:(void (^)(NSUInteger index, simd_float2 a, simd_float2 b, simd_float2 c))foreach;

- (void)landmarks:(const simd_float2 *)landmarks foreach:(void (^)(NSUInteger index, simd_float2 a, simd_float2 b, simd_float2 c))foreach indices:(NSIndexSet *)indices;

- (id<MTIGeometry>)geometryWithPoints:(const simd_float2 *)points size:(CGSize)size;

- (id<MTIGeometry>)geometryWithPoints:(const simd_float2 *)points size:(CGSize)size indices:(NSIndexSet *)indices;

- (id<MTIGeometry>)geometryWithPoints:(const simd_float2 *)points texutres:(const simd_float2 *)textures size:(CGSize)size indices:(NSIndexSet *)indices;

- (id<MTIGeometry>)geometryWithNormalizedPoints:(const simd_float2 *)points texutres:(const simd_float2 *)textures;

- (id<MTIGeometry>)geometryWithNormalizedPoints:(const simd_float2 *)points texutres:(const simd_float2 *)textures indices:(NSIndexSet *)indices;

- (id<MTIGeometry>)geometryWithPoints:(const simd_float2 *)points maskTextures:(const simd_float2 *)maskTextures size:(CGSize)size;

- (id<MTIGeometry>)geometryWithPoints:(const simd_float2 *)points maskTextures:(const simd_float2 *)maskTextures size:(CGSize)size indices:(NSIndexSet *)indices;

- (id<MTIGeometry>)geometryWithPoints:(const simd_float2 *)points texutres:(const simd_float2 *)textures maskTextures:(const simd_float2 *)maskTextures size:(CGSize)size indices:(NSIndexSet *)indices;

- (id<MTIGeometry>)geometryWithNormalizedPoints:(const simd_float2 *)points texutres:(const simd_float2 *)textures maskTextures:(const simd_float2 *)maskTextures;

- (id<MTIGeometry>)geometryWithNormalizedPoints:(const simd_float2 *)points texutres:(const simd_float2 *)textures maskTextures:(const simd_float2 *)maskTextures indices:(NSIndexSet *)indices;

+ (CGRect)boundingBoxWithPoints:(const simd_float2 *)points count:(int)count;

- (CGRect)boundingBoxWithPoints:(const simd_float2 *)points indices:(NSIndexSet *)indices;

- (float)areaWithPoints:(const simd_float2 *)points;

@end

@interface CXFaceTriangulation (Organ)

@property (nonatomic, readonly) NSIndexSet *face;
@property (nonatomic, readonly) NSIndexSet *leftEye;
@property (nonatomic, readonly) NSIndexSet *rightEye;
@property (nonatomic, readonly) NSIndexSet *leftEyebrow;
@property (nonatomic, readonly) NSIndexSet *rightEyebrow;
@property (nonatomic, readonly) NSIndexSet *teeth;
@property (nonatomic, readonly) NSIndexSet *lips;

@property (nonatomic, readonly) NSIndexSet *foreheadForSkinSmoothing;
@property (nonatomic, readonly) NSIndexSet *belowForeheadForSkinSmoothing;
@property (nonatomic, readonly) NSIndexSet *eyesAreaForSkinSmoothing;
@property (nonatomic, readonly) NSIndexSet *nasolabialFoldsAreaForSkinSmoothing;

@end

FOUNDATION_EXTERN NSArray<NSValue *> *getLandmarksFromJsonFileURL(NSURL *jsonURL);

@interface MMFaceLandmarks2D (Triangulation)

- (id<MTIGeometry>)geometryWithTriangulation:(CXFaceTriangulation *)triangulation;

- (id<MTIGeometry>)geometryWithTriangulation:(CXFaceTriangulation *)triangulation
                             triangleIndices:(NSIndexSet *)indices;

- (id<MTIGeometry>)geometryWithTriangulation:(CXFaceTriangulation *)triangulation
                          textureCoordinates:(NSArray<NSValue *> *)textureCoordinates;

- (id<MTIGeometry>)geometryWithTriangulation:(CXFaceTriangulation *)triangulation
                      maskTextureCoordinates:(NSArray<NSValue *> *)maskTextureCoordinates;

- (id<MTIGeometry>)geometryWithTriangulation:(CXFaceTriangulation *)triangulation
                          textureCoordinates:(NSArray<NSValue *> *)textureCoordinates
                             triangleIndices:(NSIndexSet *)indices;

- (id<MTIGeometry>)geometryWithTriangulation:(CXFaceTriangulation *)triangulation
                      maskTextureCoordinates:(NSArray<NSValue *> *)maskTextureCoordinates
                             triangleIndices:(NSIndexSet *)indices;

- (id<MTIGeometry>)geometryWithTriangulation:(CXFaceTriangulation *)triangulation
                      maskTextureCoordinates:(NSArray<NSValue *> *)maskTextureCoordinates
                          textureCoordinates:(NSArray<NSValue *> *)textureCoordinates
                             triangleIndices:(NSIndexSet *)indices;

@end

@interface NSIndexSet (Creation)

+ (instancetype)indexSetWithCount:(int)count indices:(NSUInteger)index, ...;

// End with number < 0.
+ (instancetype)indexSetWithIndices:(NSInteger)index, ...;

@end

NS_ASSUME_NONNULL_END
