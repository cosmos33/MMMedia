//
//  MLAdobeColorCube.h
//  Pods
//
//  Created by YuAo on 1/12/17.
//
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const MLAdobeColorCubeErrorDomain;

typedef NS_ENUM(NSUInteger, MLAdobeColorCubeError) {
    MLAdobeColorCubeNoError = 0,
    MLAdobeColorCubeNotInitialized = 1,
    MLAdobeColorCubeReadError = 10,
    MLAdobeColorCubeWriteError,
    MLAdobeColorCubePrematureEndOfFile,
    MLAdobeColorCubeLineError,
    MLAdobeColorCubeUnknownOrRepeatedKeyword = 20,
    MLAdobeColorCubeTitleMissingQuote,
    MLAdobeColorCubeDomainBoundsReversed,
    MLAdobeColorCubeLUTSizeOutOfRange,
    MLAdobeColorCubeCouldNotParseTableData
};

@interface MLAdobeColorCube : NSObject

@property (nonatomic,readonly) NSInteger dimension;

@property (nonatomic,copy,readonly) NSData *contents; //float RGB data

- (nullable instancetype)initWithContentsOfURL:(NSURL *)URL error:(NSError **)error;

- (nullable instancetype)initWithData:(NSData *)data error:(NSError **)error NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
