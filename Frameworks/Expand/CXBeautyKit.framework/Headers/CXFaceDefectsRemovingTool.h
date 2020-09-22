//
//  CXFaceDefectsRemovingTool.h
//  Pods
//
//  Created by Yu Ao on 2018/5/22.
//

#import <Foundation/Foundation.h>
#import <MomoCV/MomoCV.h>
#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXFaceDefectsRemovingInputParameter: NSObject <NSCopying>

@property (nonatomic, readonly, copy) MMFaceFeature *faceFeature;

@property (nonatomic, readonly) float amount;

- (instancetype)initWithFaceFeature:(MMFaceFeature *)faceFeature amount:(float)amount;

@end

@interface CXFaceDefectsRemovingTool : NSObject

- (instancetype)initWithSourceImage:(MTIImage *)sourceImage;

@property (nonatomic, copy) NSArray<CXFaceDefectsRemovingInputParameter *> *parameters;

@property (nonatomic, strong, readonly) MTIImage *outputImage;

@end

NS_ASSUME_NONNULL_END
