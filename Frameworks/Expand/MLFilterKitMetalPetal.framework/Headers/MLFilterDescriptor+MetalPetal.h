//
//  MLFilterDescriptor+MetalPetal.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2017/11/9.
//

@import MLFilterKit;
@import MetalPetal;

@protocol MLFKPresetFilter <MTIUnaryFilter>

@property (nonatomic) float intensity;

@end

@interface MLFilterDescriptor (MetalPetal)

- (nonnull id<MLFKPresetFilter>)createMetalPetalFilter;

+ (void)registerMetalPetalProcessingUnitName:(NSString *)name processingUnitClass:(Class)processingUnitClass;

@end
