//
//  CXConfiguation.h
//  CXBeautyKit
//
//  Created by 杨乃川 on 2019/3/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXConfiguration : NSObject
@property (nonatomic, copy, class) NSString *metalLibraryName;
@end
FOUNDATION_EXPORT NSURL * _Nullable CXMetalLibraryURLForBundle(NSBundle *bundle);
NS_ASSUME_NONNULL_END
