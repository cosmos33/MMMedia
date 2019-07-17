//
//  FDKDecorateFilter.h
//  FaceDecorationKitDemo
//
//  Created by YuAo on 6/20/16.
//  Copyright © 2016 Momo. All rights reserved.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

@interface FDKDecorationItemOverlayFilter : GPUImageTwoInputFilter

@property (nonatomic) CGPoint decorationCenter;
@property (nonatomic) CGSize decorationSize;
@property (nonatomic) CGFloat decorationRotation;
@property (nonatomic) CGPoint decorationAnchorPoint;
@property (nonatomic) CGFloat decorationOpacity;

@property (nonatomic) BOOL decorationHasPremultipliedAlpha;

@property (nonatomic) BOOL blendEnabled;

@end

NS_ASSUME_NONNULL_END
