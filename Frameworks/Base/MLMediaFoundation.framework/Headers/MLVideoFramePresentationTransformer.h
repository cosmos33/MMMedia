//
//  MLVideoFramePresentationTransformer.h
//  Pods
//
//  Created by YuAo on 11/04/2017.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MLVideoFramePresentationTransformer : NSObject

@property (nonatomic,strong,readonly) CIContext *context;

- (nullable CVPixelBufferRef)transformedPixelBufferFromPixelBuffer:(CVPixelBufferRef)pixelBuffer withTrackTransform:(CGAffineTransform)transform error:(NSError  **)error CF_RETURNS_NOT_RETAINED;

- (nullable CVPixelBufferRef)transformedPixelBufferFromCIImage:(CIImage *)image withTrackTransform:(CGAffineTransform)transform error:(NSError  **)error CF_RETURNS_NOT_RETAINED;

@end

NS_ASSUME_NONNULL_END
