//
//  MLMediaUtilities.h
//  Pods
//
//  Created by YuAo on 21/08/2017.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MLMediaUtilities : NSObject

+ (NSString *)MD5HashForString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END


NS_ASSUME_NONNULL_BEGIN

CVPixelBufferRef MLCVPixelBufferCreateWithPixelBufferInRect(CVPixelBufferRef pixelBuffer, CGRect rect) CF_RETURNS_RETAINED;

NS_ASSUME_NONNULL_END
