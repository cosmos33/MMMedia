//
//  GPUImageMovieWriter+AsynchronouslyFinish.h
//  Pods
//
//  Created by YuAo on 2/28/17.
//
//

@import GPUImage;

@interface GPUImageMovieWriter (AsynchronouslyFinish)

- (void)finishRecordingAsynchronouslyWithCompletionHandler:(void (^)(void))handler;

@end
