//
//  MLMediaSerializableValueTransformers.h
//  Pods
//
//  Created by YuAo on 2/6/17.
//
//

#import <Foundation/Foundation.h>

@interface MLMediaSerializableValueTransformers : NSObject

+ (NSValueTransformer *)MLMediaSerializableJSONTransformer;

+ (NSValueTransformer *)CMTimeJSONTransformer;

+ (NSValueTransformer *)CMTimeRangeJSONTransformer;

+ (NSValueTransformer *)CMTimeMappingJSONTransformer;

@end
