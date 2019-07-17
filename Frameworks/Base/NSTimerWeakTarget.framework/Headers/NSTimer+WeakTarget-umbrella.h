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

#import "NSTimer+WeakTarget.h"
#import "WUNSTimerProxyTarget.h"
#import "WUNSTimerTargetLifecycleTracker.h"

FOUNDATION_EXPORT double NSTimerWeakTargetVersionNumber;
FOUNDATION_EXPORT const unsigned char NSTimerWeakTargetVersionString[];

