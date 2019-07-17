//
//  FDKSoundableFilter.h
//  Pods
//
//  Created by YuAo on 12/22/16.
//
//

@import Foundation;

#ifndef FDKSoundableFilter_h
#define FDKSoundableFilter_h

@protocol FDKSoundableFilter <NSObject>

@property (nonatomic,strong,readonly,nullable) id<FDKAudioPlayerProtocol> audioPlayer;

@end

#endif /* FDKSoundableFilter_h */
