//
//  MLSampleBufferDisplayView.h
//  Pods
//
//  Created by YuAo on 23/03/2017.
//
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface MLSampleBufferDisplayView : UIView

@property (nonatomic,readonly) AVSampleBufferDisplayLayer *sampleBufferDisplayLayer;

@end
