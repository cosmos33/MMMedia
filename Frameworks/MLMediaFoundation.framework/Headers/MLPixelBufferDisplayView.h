//
//  MLPixelBufferDisplayView.h
//  Pods
//
//  Created by YuAo on 01/04/2017.
//
//

#import <UIKit/UIKit.h>
#import "MLPixelBufferDisplay.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 @class			MLPixelBufferDisplayView
 
 @abstract		MLPixelBufferDisplayView is an implementation of MLPixelBufferDisplay that can display `CVPixelBuffer`s. It uses AVSampleBufferDisplayLayer as its render layer.
 */

@interface MLPixelBufferDisplayView : UIView <MLPixelBufferDisplay>

@property (nonatomic) BOOL benchmarkEnabled;

@end

NS_ASSUME_NONNULL_END
