//
//  CXSkinWhitenFilter.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2020/12/10.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>
NS_ASSUME_NONNULL_BEGIN

@interface CXSkinWhitenFilter : NSObject<MTIUnaryFilter>
@property (nonatomic, assign) float whitenAmount;
@property (nonatomic, assign) float rosyAmount;
@end

NS_ASSUME_NONNULL_END
