//
//  FDKAudioPlayer.h
//  Pods
//
//  Created by YuAo on 12/3/16.
//
//

#import <Foundation/Foundation.h>
#import "FDKAudioPlayerProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKAudioPlayer : NSObject <FDKAudioPlayerProtocol>

- (instancetype)initWithAudioFileURL:(NSURL *)URL loopingEnabled:(BOOL)loopingEnabled;

@property (nonatomic, copy, readonly) NSURL *audioURL;
@end

NS_ASSUME_NONNULL_END
