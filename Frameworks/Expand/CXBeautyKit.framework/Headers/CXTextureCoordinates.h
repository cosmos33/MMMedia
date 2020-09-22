//
//  CXTextureCoordinates.h
//  Pods
//
//  Created by Yu Ao on 2018/4/18.
//

#import <Foundation/Foundation.h>
#import <simd/simd.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXTextureCoordinates : NSObject

@property (nonatomic, readonly) const simd_float2 *points;

@property (nonatomic, readonly) NSUInteger pointCount;

@property (nonatomic, copy, readonly) NSArray<NSValue *> *pointValues;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithXYXYPoints:(NSArray<NSNumber *> *)points NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithPoints:(NSArray<NSValue *> *)points NS_DESIGNATED_INITIALIZER;

- (nullable instancetype)initWithContentsOfURL:(NSURL *)JSONURL;

@end

NS_ASSUME_NONNULL_END
