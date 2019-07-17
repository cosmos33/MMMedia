//
//  MLVideoAspectEffect.h
//  MLMediaEditingModel
//
//  Created by yi chen on 2017/12/11.
//

#import <Foundation/Foundation.h>

@import Mantle;
#import "MLMediaMetadataItem.h"
#import "MLMediaMetadataTrack.h"
#import "MLMetadataTrackEffect.h"

NS_ASSUME_NONNULL_BEGIN

@interface MLVideoAspectEffect : MTLModel <MLMetadataTrackEffectProtocol>
@property (nonatomic,copy,readonly) NSUUID *identifier;

@property (nonatomic,copy,readonly) NSString *metadataTrackIdentifier;

@property (nonatomic,readonly) CMTimeRange timeRange;

@property (nonatomic,readonly) CGSize aspect;

@property (nonatomic,copy,readonly) MLMediaEffectRepresentation *representation;//always empty

- (instancetype)initWithAspect:(CGSize)aspect;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
