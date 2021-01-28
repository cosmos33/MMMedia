//
//  MLMetalPetalConfiguration.h
//  MLFilterKit+MetalPetal
//
//  Created by 杨乃川 on 2019/3/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MLMetalPetalConfiguration : NSObject
@property (nonatomic, copy, class) NSString *metalLibraryName;
@property (nonatomic, readonly, class) NSBundle *libraryBundle;
@property (nonatomic, readonly, class) NSURL *libraryURL;
@end

NS_ASSUME_NONNULL_END
