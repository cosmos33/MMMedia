//
//  MLFilterColorLookupTable.h
//  Pods
//
//  Created by YuAo on 1/12/17.
//
//
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MLColorLookupTableDataFormat) {
    MLColorLookupTableDataFormatInvalid,
    MLColorLookupTableDataFormatFloatRGB
};

@interface MLColorLookupTable : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, strong, readonly, nullable) UIImage *image;

@property (nonatomic, strong, readonly, nullable) NSData *data;

@property (nonatomic, readonly) NSInteger dimension;

@property (nonatomic, readonly) MLColorLookupTableDataFormat dataFormat;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithLookupImage:(UIImage *)image NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithCubeData:(NSData *)data format:(MLColorLookupTableDataFormat)format dimension:(NSInteger)dimension NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithCubeData:(NSData *)data dimension:(NSInteger)dimension;

- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
