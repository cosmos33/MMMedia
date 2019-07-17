//
//  CXColorTemperatureFilter.h
//  CXBeautyKit
//
//  Created by Yu Ao on 2018/8/20.
//

#import <Foundation/Foundation.h>
@import MetalPetal;

@interface CXColorTemperatureFilter : MTIUnaryImageRenderingFilter

@property (nonatomic) float temperature;

@end
