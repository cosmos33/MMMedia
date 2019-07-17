//
//  CXQuadPixelateFilter.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2019/1/4.
//

#import <Foundation/Foundation.h>
@import MetalPetal;
NS_ASSUME_NONNULL_BEGIN

@interface CXQuadPixelateFilter : NSObject<MTIUnaryFilter>
@property (nonatomic, strong) MTIMask *mask;
@property (nonatomic, assign) UInt32 pixelSize;


@end

NS_ASSUME_NONNULL_END
