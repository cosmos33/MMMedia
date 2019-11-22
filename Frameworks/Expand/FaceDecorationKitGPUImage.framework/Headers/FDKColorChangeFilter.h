//
//  FDKColorChangeFilter.h
//  FaceDecorationKit+GPUImage
//
//  Created by sunfei on 2019/4/12.
//

#import <GPUImage/GPUImage.h>

NS_ASSUME_NONNULL_BEGIN

@interface FDKColorChangeFilter : GPUImageFilter

- (instancetype)initWithLut1:(NSString *)lut1 lut2:(NSString *)lut2;

@property (nonatomic, assign) CGFloat frameCost;

@end

NS_ASSUME_NONNULL_END
