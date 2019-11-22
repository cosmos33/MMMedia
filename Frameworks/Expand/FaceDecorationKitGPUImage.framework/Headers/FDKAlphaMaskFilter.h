//
//  FDKAlphaMaskFilter.h
//  Pods
//
//  Created by YuAo on 10/06/2017.
//
//

#import <GPUImage/GPUImage.h>

@interface FDKAlphaMaskFilter : GPUImageTwoInputFilter

@property (nonatomic) BOOL premultiplyAlpha;

@end
