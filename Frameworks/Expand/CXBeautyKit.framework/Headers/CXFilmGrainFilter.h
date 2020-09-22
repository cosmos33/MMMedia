//
//  CXFilmGrainFilter.h
//  MetalPetalOSX
//
//  Created by Yu Ao on 2018/9/20.
//  Copyright © 2018 demo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXFilmGrainFilter : NSObject <MTIFilter>

@property (nonatomic, strong, nullable) MTIImage *inputImage;

@property (nonatomic, strong, nullable) MTIImage *inputGrainLookupImage;

@property (nonatomic) float amount;

@property (nonatomic) float seed;

@end

NS_ASSUME_NONNULL_END
