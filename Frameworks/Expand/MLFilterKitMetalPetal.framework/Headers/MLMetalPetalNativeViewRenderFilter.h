//
//  MLMetalPetalNativeViewRenderFilter.h
//  FaceDecorationKit+MetalPetal
//
//  Created by 杨乃川 on 2018/5/21.
//

#import <MetalPetal/MetalPetal.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface MLMetalPetalNativeViewItem:NSObject
@property (nonatomic, strong, nullable) UIView *renderingView;
@property (nonatomic, assign) float scale;
@property (nonatomic, assign) CGRect normalizedRect;
@property (nonatomic, assign) int refreshFrequency;
@end



@interface MLMetalPetalNativeViewRenderFilter : NSObject<MTIUnaryFilter>
@property (nonatomic, copy) NSArray <MLMetalPetalNativeViewItem *> *viewItems;
@property (nonatomic, strong) MTIImage *inputImage;
@end

NS_ASSUME_NONNULL_END
