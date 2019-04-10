//
//  FDKAudioPlayer.h
//  Pods
//
//  Created by YuAo on 12/3/16.
//
//

@import Foundation;
#import "FDKAudioPlayerProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKAudioPlayer : NSObject <FDKAudioPlayerProtocol>

- (instancetype)initWithAudioFileURL:(NSURL *)URL loopingEnabled:(BOOL)loopingEnabled;

@end

NS_ASSUME_NONNULL_END
