//
//  FDKAudioPlayerProtocol.h
//  Pods
//
//  Created by YuAo on 12/12/16.
//
//

#ifndef FDKAudioPlayerProtocol_h
#define FDKAudioPlayerProtocol_h

NS_ASSUME_NONNULL_BEGIN

@protocol FDKAudioPlayerProtocol <NSObject>

@property (nonatomic,readonly) BOOL isPlaying;

- (void)play;

- (void)stop;

@property (nonatomic) float volume;

@end

NS_ASSUME_NONNULL_END

#endif /* FDKAudioPlayerProtocol_h */
