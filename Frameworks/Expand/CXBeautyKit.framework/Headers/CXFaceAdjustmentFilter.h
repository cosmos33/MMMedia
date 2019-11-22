//
//  CXFaceAdjustmentFilter.h
//  Pods
//
//  Created by Yu Ao on 29/01/2018.
//

#import <Foundation/Foundation.h>
#import "CXFaceAdjustments.h"
@import MomoCV;
@import MetalPetal;

NS_ASSUME_NONNULL_BEGIN

@interface CXFaceAdjustmentFilterInputParameter: NSObject

@property (nonatomic, copy, readonly) MMFaceFeature *faceFeature;

@property (nonatomic, copy, readonly) MMFaceAdjustments *adjustments;

- (instancetype)initWithFaceFeature:(MMFaceFeature *)faceFeature adjustments:(MMFaceAdjustments *)adjustments;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

@end

@interface CXFaceAdjustmentFilterOutput: NSObject

@property (nonatomic, strong, readonly) MTIImage *image;

@property (nonatomic, copy, readonly) NSArray<MMFaceFeature *> *faceFeatures;

@property (nonatomic, readonly) CGRect safeArea;

@end

@interface CXFaceAdjustmentFilter : NSObject <MTIUnaryFilter>

@property (nonatomic, copy) NSArray<CXFaceAdjustmentFilterInputParameter *> *parameters;

@property (nonatomic, strong, readonly) CXFaceAdjustmentFilterOutput *output;

+ (MMFaceFeature *)faceFeatureByAdjustingEyeSize:(MMFaceFeature *)faceFeature eyeSize:(float)eyeSize;

@end

NS_ASSUME_NONNULL_END
