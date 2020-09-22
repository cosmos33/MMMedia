//
//  MMFaceFeatureCX.h
//  Pods
//
//  Created by Yu Ao on 06/03/2018.
//

#import <MomoCV/MomoCV.h>

NS_ASSUME_NONNULL_BEGIN

struct CXSkinColorThreshold {
    simd_float3 lowColor;
    simd_float3 highColor;
    simd_float3 defaultColor;
};
typedef struct CXSkinColorThreshold CXSkinColorThreshold;

@interface MMFaceFeature (CX)

@property (nonatomic, readonly) CXSkinColorThreshold cxSkinColorThreshold;

@end

NS_ASSUME_NONNULL_END
