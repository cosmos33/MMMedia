//
//  CXShaderTypes.h
//  Pods
//
//  Created by Yu Ao on 06/02/2018.
//

#ifndef CXShaderTypes_h
#define CXShaderTypes_h

#import <simd/simd.h>

struct CXVertex {
    vector_float4 position;
    vector_float2 textureCoordinate;
    vector_float2 maskTextureCoordinate;
};
typedef struct CXVertex CXVertex;

#if __METAL_MACOS__ || __METAL_IOS__

struct CXVertexOut {
    float4 position [[ position ]];
    float2 textureCoordinate;
    float2 maskTextureCoordinate;
};
typedef struct CXVertexOut CXVertexOut;

#endif

#endif /* CXShaderTypes_h */
