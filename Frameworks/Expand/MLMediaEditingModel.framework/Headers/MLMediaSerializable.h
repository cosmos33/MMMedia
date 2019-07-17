//
//  MLMediaSerializableModel.h
//  Pods
//
//  Created by YuAo on 1/22/17.
//
//

@import Mantle;

NS_ASSUME_NONNULL_BEGIN

@protocol MLMediaSerializable <NSObject,NSCopying,NSCoding>

@end

@interface MTLModel (MLMediaSerializable) <MLMediaSerializable>

@end

@interface MTLModel (MLAVStructCoding)

//coding CMTime, CMTimeRange, CMTimeMapping

@end

NS_ASSUME_NONNULL_END

