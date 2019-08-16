//
//  MTRGlitterFilter.h
//  HoneyEffectFilters
//
//  Created by Jackie on 2017/11/24.
//  Copyright © 2017年 MOMO. All rights reserved.
//

@import MetalPetal;

typedef NS_ENUM(NSUInteger, MTRGlitterMergePolicy) {
    MTRGlitterMergePolicyMax = 0,
    MTRGlitterMergePolicyWeight
};

@interface MTRGlitterEffectFilter : NSObject <MTIUnaryFilter>

@property (nonatomic) MTRGlitterMergePolicy mergePocliy;
@property (nonatomic) CGSize inputStepAround;
@property (nonatomic) float inputProtube;
@property (nonatomic) float inputPower;
@property (nonatomic) float inputThreshold;
@property (nonatomic) float inputGrayScale;

@end
