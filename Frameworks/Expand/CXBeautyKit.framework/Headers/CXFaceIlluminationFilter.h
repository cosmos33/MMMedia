//
//  CXFaceIlluminationFilter.h
//  CXBeautyKit+JSExport
//
//  Created by Yu Ao on 2018/9/20.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>
#import <MomoCV/MomoCV.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXFaceIlluminationFilterInput : NSObject <NSCopying>

@property (nonatomic, copy, readonly) MMFaceFeature *faceFeature;
@property (nonatomic, readonly) float amount;

- (instancetype)initWithFaceFeature:(MMFaceFeature *)faceFeature amount:(float)amount;

@end

@interface CXFaceIlluminationFilter : NSObject <MTIUnaryFilter>

@property (nonatomic, copy) NSArray<CXFaceIlluminationFilterInput *> *parameters;

@end

NS_ASSUME_NONNULL_END
