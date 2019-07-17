//
//  CXAutoLevelInfo.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2019/3/28.
//

#import <Foundation/Foundation.h>
@import MetalPetal;
NS_ASSUME_NONNULL_BEGIN

@interface CXAutoLevelInfo : NSObject

@property (nonatomic, readonly) float whitePoint;
@property (nonatomic, readonly) float blackPoint;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithWhitePoint:(float)whitePoint blackPoint:(float)blackPoint NS_DESIGNATED_INITIALIZER;

@end

FOUNDATION_EXPORT CXAutoLevelInfo * _Nullable CXCalculateAutoLevelCorrectionInfoForPixelBuffer(CVPixelBufferRef pixelBuffer);


NS_ASSUME_NONNULL_END
