//
//  MLPixelBufferMTLDisplayView.h
//  Pods
//
//  Created by YuAo on 27/04/2017.
//
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "MLPixelBufferDisplay.h"

NS_CLASS_AVAILABLE(10_11, 9_0)
@interface MLPixelBufferMTLDisplayView : UIView <MLPixelBufferDisplay>

@property (nonatomic) BOOL benchmarkEnabled;

@end
