//
//  FDKMFaceWarpFilter.h
//  FaceDecorationKit+MetalPetal
//
//  Created by Jackie on 2017/11/24.
//

#import "FDKMUnaryFilterProtocol.h"

@import MetalPetal;


@interface FDKMFaceWarpFilter : NSObject <MTIUnaryFilter, FDKMUnaryFilterProtocol>

@property (nonatomic, copy, nullable) NSData *textureCoordinatesData;
@property (nonatomic, copy, nullable) NSData *verticesData;

@end
