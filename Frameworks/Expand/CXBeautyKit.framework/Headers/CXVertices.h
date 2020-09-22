//
//  CXVertices.h
//  Pods
//
//  Created by Yu Ao on 06/02/2018.
//

#import <Foundation/Foundation.h>
#import "CXShaderTypes.h"
#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXVertices : NSObject <MTIGeometry>

@property (nonatomic, readonly) NSUInteger vertexCount;

@property (nonatomic, readonly) MTLPrimitiveType primitiveType;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithVertices:(const CXVertex * _Nonnull)vertices
                           count:(NSInteger)count
                   primitiveType:(MTLPrimitiveType)primitiveType NS_DESIGNATED_INITIALIZER;

+ (instancetype)squareVerticesForRect:(CGRect)rect;

@end

NS_ASSUME_NONNULL_END
