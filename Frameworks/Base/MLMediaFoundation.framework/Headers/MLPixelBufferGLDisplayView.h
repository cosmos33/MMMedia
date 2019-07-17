//
//  MMCVPixelBufferView.h
//  MMVideoProcessingDemo
//
//  Created by YuAo on 3/27/16.
//  Copyright © 2016 YuAo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "MLPixelBufferDisplay.h"

NS_ASSUME_NONNULL_BEGIN

@interface MLPixelBufferGLDisplayView : UIView <MLPixelBufferDisplay>

@property (nonatomic) BOOL benchmarkEnabled;

@end

@compatibility_alias MLCVPixelBufferView MLPixelBufferGLDisplayView;

NS_ASSUME_NONNULL_END
