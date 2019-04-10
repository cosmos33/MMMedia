//
//  FDKFaceWarpFilter.h
//  FaceDecorationKitDemo
//
//  Created by chen.yanqin on 16/10/19.
//  Copyright © 2016年 Momo. All rights reserved.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

@interface FDKFaceWarpData: NSObject <NSCopying>

- (instancetype)initWithSourceVerticesData:(NSData *)sourceVerticesData
                   destinationVerticesData:(NSData *)destinationVerticesData;

@end

@interface FDKFaceWarpFilter : GPUImageFilter

@property (atomic,copy,nullable) FDKFaceWarpData *warpData;

@end

NS_ASSUME_NONNULL_END
