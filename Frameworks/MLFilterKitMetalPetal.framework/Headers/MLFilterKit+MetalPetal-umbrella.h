#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MLFilterDescriptor+MetalPetal.h"
#import "MLMetalPetalNativeViewRenderFilter.h"
#import "MLMetalPetalSlidingFilter.h"
#import "MLMetalPetalVideoGiftFilter.h"

FOUNDATION_EXPORT double MLFilterKitMetalPetalVersionNumber;
FOUNDATION_EXPORT const unsigned char MLFilterKitMetalPetalVersionString[];

