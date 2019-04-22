//
//  CXImageColorEnhancementFilter.h
//  Pods
//
//  Created by Yu Ao on 28/03/2018.
//

#import <Foundation/Foundation.h>
#import "CXAutoLevelInfo.h"
@import MetalPetal;
NS_ASSUME_NONNULL_BEGIN


@interface CXColorEnhancementFilter : NSObject <MTIUnaryFilter>

@property (nonatomic, strong, nullable) CXAutoLevelInfo *autoLevelInfo;

@property (nonatomic) float amount;

@property (nonatomic, strong, nullable) MTIImage *inputImage;

@property (nonatomic, assign) BOOL disable;

@end

NS_ASSUME_NONNULL_END
