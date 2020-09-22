//
//  CXInterpolable.h
//  Pods
//
//  Created by Yu Ao on 2018/5/14.
//

#ifndef CXInterpolable_h
#define CXInterpolable_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CXInterpolable <NSObject>

- (instancetype)interpolateToValue:(id)toValue progress:(double)progress NS_SWIFT_NAME(interpolate(to:progress:));

@end

NS_ASSUME_NONNULL_END

#endif /* CXInterpolable_h */
