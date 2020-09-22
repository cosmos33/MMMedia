//
//  CXBodyAdjustmentFilter.h
//  CXBeautyKit
//
//  Created by little2s on 2018/6/27.
//

#import <Foundation/Foundation.h>
#import <MomoCV/MomoCV.h>
#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXBodyAdjustmentFilterInputParameter : NSObject

@property (nonatomic, copy, readonly) MMBodyFeature *bodyFeature;

@property (nonatomic, copy, readonly) MMBodyAdjustments *adjustments;

- (instancetype)initWithBodyFeature:(MMBodyFeature *)bodyFeature adjustments:(MMBodyAdjustments *)adjustments;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

@end

@interface CXBodyAdjustmentFilterOutput: NSObject

@property (nonatomic, strong, readonly) MTIImage *image;

@end

@interface CXBodyAdjustmentFilter : NSObject <MTIUnaryFilter>

@property (nonatomic, copy) NSArray<CXBodyAdjustmentFilterInputParameter *> *parameters;

@property (nonatomic, strong, readonly, nullable) CXBodyAdjustmentFilterOutput *output;

@end

NS_ASSUME_NONNULL_END
