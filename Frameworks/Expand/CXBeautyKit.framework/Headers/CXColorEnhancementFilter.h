//
//  CXImageColorEnhancementFilter.h
//  Pods
//
//  Created by Yu Ao on 28/03/2018.
//

#import <Foundation/Foundation.h>
@import MetalPetal;

NS_ASSUME_NONNULL_BEGIN


@interface CXAutoLevelInfo: NSObject <NSCopying>

@property (nonatomic, readonly) float whitePoint;
@property (nonatomic, readonly) float blackPoint;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithWhitePoint:(float)whitePoint blackPoint:(float)blackPoint NS_DESIGNATED_INITIALIZER;

@end

FOUNDATION_EXPORT CXAutoLevelInfo * CXCalculateAutoLevelCorrectionInfoForPixelBuffer(CVPixelBufferRef pixelBuffer);

@interface CXColorEnhancementFilter : NSObject <MTIFilter>

@property (nonatomic, strong, nullable) CXAutoLevelInfo *autoLevelInfo;

@property (nonatomic) float amount;

@property (nonatomic, strong, nullable) MTIImage *inputImage;

@end

NS_ASSUME_NONNULL_END
