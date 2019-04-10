//
//  FDKAudioEnginePlayer.h
//  Pods
//
//  Created by YuAo on 12/12/16.
//
//

@import AVFoundation;
#import "FDKAudioPlayerProtocol.h"

#if FDK_USES_AVAUDIOENGINE

NS_ASSUME_NONNULL_BEGIN

@interface FDKAudioEnginePlayer : NSObject <FDKAudioPlayerProtocol>

@property (nonatomic,strong,readonly) AVAudioPlayerNode *playerNode;

- (instancetype)initWithAudioFileURL:(NSURL *)URL loopingEnabled:(BOOL)loopingEnabled;

+ (void)automaticallyAttachPlayerNodeToAudioEngine:(AVAudioEngine *)engine mixers:(NSArray<AVAudioMixerNode *> *)mixers;

@end

NS_ASSUME_NONNULL_END

#endif
