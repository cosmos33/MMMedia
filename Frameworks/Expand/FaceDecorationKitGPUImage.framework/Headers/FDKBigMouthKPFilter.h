//
//  FDKSkinBigMouthFilter.h
//  Pods
//  Big Mouth Effect
//  Created by MOMO on 2018/8/22.
//

#import <Foundation/Foundation.h>

#import <GPUImage/GPUImage.h>

#import <FaceDecorationKit/FaceDecorationKit.h>

@interface FDKBigMouthKPFilter : GPUImageFilter <FDKDecorationFilterUpdating>

- (instancetype)initWithImagePath:(NSString *)path;

@end
