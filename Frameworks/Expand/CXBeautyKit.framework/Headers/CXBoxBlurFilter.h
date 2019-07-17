//
//  CXBoxBlurFilter.h
//  CXBeautyKit
//
//  Created by Yu Ao on 2018/8/16.
//

#import <Foundation/Foundation.h>
@import MetalPetal;

//radius 9
@interface CXBoxBlurFilter : NSObject <MTIUnaryFilter>

@property (nonatomic) float step;

@end
