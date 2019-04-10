//
//  MLCVPixelBufferPool.h
//  Pods
//
//  Created by YuAo on 31/03/2017.
//
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const MLCVPixelBufferPoolErrorDomain;

typedef NS_ENUM(NSInteger, MLCVPixelBufferPoolError) {
    MLCVPixelBufferPoolErrorNone = kCVReturnSuccess,
    MLCVPixelBufferPoolErrorWouldExceedAllocationThreshold = kCVReturnWouldExceedAllocationThreshold,
    MLCVPixelBufferPoolErrorPoolAllocationFailed = kCVReturnPoolAllocationFailed,
    MLCVPixelBufferPoolErrorInvalidPoolAttributes = kCVReturnInvalidPoolAttributes,
    MLCVPixelBufferPoolErrorRetry = kCVReturnRetry
};

@interface MLCVPixelBufferPool : NSObject

@property (nonatomic,readonly) size_t pixelBufferWidth;
@property (nonatomic,readonly) size_t pixelBufferHeight;

@property (nonatomic,readonly) size_t minimumBufferCount;

@property (nonatomic,copy,readonly) NSDictionary *poolAttributes;
@property (nonatomic,copy,readonly) NSDictionary *pixelBufferAttributes;

- (instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithPixelBufferSize:(CGSize)size minimumBufferCount:(NSUInteger)minimumBufferCount;

- (nullable instancetype)initWithPoolAttributes:(NSDictionary *)poolAttributes pixelBufferAttributes:(NSDictionary *)pixelBufferAttributes error:(NSError **)error NS_DESIGNATED_INITIALIZER;

- (BOOL)fetchPixelBuffer:(CF_RETURNS_NOT_RETAINED CVPixelBufferRef _Nullable * _Nonnull)pixelBuffer error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
