//
//  CXColorAdjustFilter.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2019/12/10.
//

#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXColorAdjustFilter : NSObject<MTIUnaryFilter>
@property (nonatomic, assign) float saturation;
@property (nonatomic, assign) float sharpening;
@property (nonatomic, assign) float contrast;
@property (nonatomic, assign) BOOL disable;
@end

NS_ASSUME_NONNULL_END
