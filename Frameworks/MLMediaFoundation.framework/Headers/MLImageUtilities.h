//
//  MLImageUtilities.h
//  WeicoLightroom
//
//  Created by YuAo on 1/20/14.
//  Copyright (c) 2014 Weico. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface MLImageUtilities : NSObject

@end

static inline CGSize MLUIImageGetPixelSize(UIImage *image) {
    return CGSizeApplyAffineTransform(image.size, CGAffineTransformMakeScale(image.scale, image.scale));
}

#pragma mark - CoreGraphic Drawing

@interface MLImageUtilities (CoreGraphicDrawing)

+ (CGAffineTransform)transformForCoreGraphicToDrawImageWithOrientation:(UIImageOrientation)imageOrientation toPixelSize:(CGSize)newSize;

+ (BOOL)shouldDrawTransposedForImageWithOrientation:(UIImageOrientation)orientation;

@end

#pragma mark - Resize Crop Transform

typedef NS_ENUM(NSInteger, MLImageRotationDirection) {
    MLImageRotationDirectionClockwise,
    MLImageRotationDirectionCounterclockwise
};

@interface MLImageUtilities (ResizeCropTransform)

+ (UIImage *)imageByCroppingImage:(UIImage *)image toRect:(CGRect)rect;

+ (UIImage *)imageByResizingImage:(UIImage *)image toSize:(CGSize)newSize interpolationQuality:(CGInterpolationQuality)quality;

+ (UIImage *)imageByResizingImage:(UIImage *)image withContentMode:(UIViewContentMode)contentMode toSize:(CGSize)size interpolationQuality:(CGInterpolationQuality)quality;

+ (UIImage *)imageByNormalizingOrientationAndScaleOfImage:(UIImage *)image;

+ (UIImage *)imageByRotatingImage:(UIImage *)image direction:(MLImageRotationDirection)direction;

+ (UIImage *)imageByRotatingImage:(UIImage *)image direction:(MLImageRotationDirection)direction times:(NSInteger)count;

@end

#pragma mark - Blur Effect

@interface MLImageUtilities (BlurEffects)

+ (UIImage *)imageByApplyingLightBlurEffectToImage:(UIImage *)image;
+ (UIImage *)imageByApplyingExtraLightBlurEffectToImage:(UIImage *)image;
+ (UIImage *)imageByApplyingDarkBlurEffectToImage:(UIImage *)image;
+ (UIImage *)imageByApplyingTintBlurEffectToImage:(UIImage *)image withTintColor:(UIColor *)tintColor;

+ (UIImage *)imageByApplyingBlurEffectToImage:(UIImage *)image withRadius:(CGFloat)blurRadius tintColor:(UIColor *)tintColor saturationDeltaFactor:(CGFloat)saturationDeltaFactor maskImage:(UIImage *)maskImage;

@end

#pragma mark - ImageI/O Thumbnail

@interface MLImageUtilities (ImageIOThumbnail)

/*!
 @brief Create thumbnail image from image data using ImageI/O functions. This is a more efficient way for resizing large image.
 */
+ (UIImage *)thumbnailImageFromImageWithData:(NSData *)data maxPixelSize:(CGFloat)maxPixelSize;

+ (UIImage *)thumbnailImageFromImageWithURL:(NSURL *)URL maxPixelSize:(CGFloat)maxPixelSize;

@end
