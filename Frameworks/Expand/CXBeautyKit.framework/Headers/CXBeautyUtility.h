//
//  CXBeautyUtility.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2019/1/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef CGSize CXPreviewRatio;



@interface CXBeautyUtility : NSObject
+ (BOOL)cxPREquals:(CXPreviewRatio)ratioA to:(CXPreviewRatio)ratioB;
+ (CGSize)cxPRiPhoneX;
+ (CGSize)cxPRiPhone6;
@end




NS_ASSUME_NONNULL_END
