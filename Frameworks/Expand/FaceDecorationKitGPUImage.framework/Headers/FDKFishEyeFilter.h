//
//  FDKFishEyeFilter.h
//  FaceDecorationKit+GPUImage
//
//  Created by sunfei on 2019/4/12.
//

#import <GPUImage/GPUImage.h>

NS_ASSUME_NONNULL_BEGIN

@interface FDKFishEyeFilter : GPUImageFilter

- (instancetype)initWithBoxImage:(NSString *)path1 bottomImage:(NSString *)path2;

@end

NS_ASSUME_NONNULL_END
