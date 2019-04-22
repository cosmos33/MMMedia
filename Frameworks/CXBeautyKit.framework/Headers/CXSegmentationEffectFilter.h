//
//  CXSegmentationEffectFilter.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2019/1/4.
//

#import <Foundation/Foundation.h>
@import MetalPetal;
NS_ASSUME_NONNULL_BEGIN

@interface CXSegmentationEffectFilter : NSObject<MTIUnaryFilter>

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithBackgroundFilter:(id<MTIUnaryFilter>)backgroundFilter;

- (void)updateMask:(MTIMask *)mask;

@property (nonatomic, strong, readonly) MTIMask *inputMask;


@end

NS_ASSUME_NONNULL_END
