//
//  FDKMFacialMaskFilter.h
//  FaceDecorationKit+MetalPetal
//
//  Created by Jackie on 2017/11/24.
//

@import MetalPetal;

@interface FDKMFacialMaskFilter : NSObject <MTIFilter>

@property (nonatomic, strong, nullable) NSArray<NSValue *> *landmarks;
@property (nonatomic, strong, nullable) NSArray<NSValue *> *textureCoordinates;

@property (nonatomic, strong, nullable) MTIImage *inputMaskImage;
@property (nonatomic, strong, nullable) MTIImage *inputBackgroundimage;

@property (nonatomic) float maskOpacity;

@end
