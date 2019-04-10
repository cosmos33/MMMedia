//
//  CXSoftEdgeFilter.h
//  Pods
//
//  Created by Yu Ao on 30/03/2018.
//

#import <Foundation/Foundation.h>
@import MetalPetal;

NS_ASSUME_NONNULL_BEGIN

@interface CXSoftEdgeFilter : NSObject <MTIUnaryFilter>

@property (nonatomic, strong, nullable) MTIImage *inputImage;

@property (nonatomic) float intensity;

@end

NS_ASSUME_NONNULL_END
