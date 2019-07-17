//
//  FDKBeautyBodyWarpFilter.h
//  FaceDecorationKit
//
//  Created by Bruce on 2018/6/7.
//

@import GPUImage;
NS_ASSUME_NONNULL_BEGIN

@interface FDKBodyWarpData: NSObject <NSCopying>


- (instancetype _Nullable)initWithSourceVerticesData:(NSData * _Nullable)sourceVerticesData
                   destinationVerticesData:(NSData *_Nullable)destinationVerticesData;

@end



@interface FDKBodyWarpFilter :GPUImageFilter
@property(nonatomic,strong,nonnull)FDKBodyWarpData *bodyWarpData;
@end
NS_ASSUME_NONNULL_END
