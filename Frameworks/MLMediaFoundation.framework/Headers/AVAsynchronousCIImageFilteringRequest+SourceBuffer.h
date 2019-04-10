//
//  AVAsynchronousCIImageFilteringRequest+SourceBuffer.h
//  Pods
//
//  Created by YuAo on 1/3/17.
//
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT _Nullable CVPixelBufferRef MLAVAsynchronousCIImageFilteringRequestGetSourceBuffer(AVAsynchronousCIImageFilteringRequest *request) CF_RETURNS_NOT_RETAINED NS_AVAILABLE(10_11, 9_0);

NS_ASSUME_NONNULL_END
