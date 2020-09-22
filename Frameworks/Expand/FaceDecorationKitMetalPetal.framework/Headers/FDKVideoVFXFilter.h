//
//  FDKVideoVFXFilter.h
//  MLFilterKit+MetalPetal
//
//  Created by 杨乃川 on 2020/4/20.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>
#import <FaceDecorationKit/FaceDecorationKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface FDKVideoVFXFilter : NSObject<MTIUnaryFilter, FDKDecorationFilterUpdating>
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithResourceURL:(NSURL *)url;
@end

NS_ASSUME_NONNULL_END
