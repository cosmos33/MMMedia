//
//  FDKDecorationFilterUpdate.h
//  Pods
//
//  Created by YuAo on 11/28/16.
//
//

@import AVFoundation;
#import "FDKProtocols.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKDecorationFilterUpdateRequest : NSObject <NSCopying>

@property (nonatomic,copy,nullable) id<FDKFaceFeature> faceFeature;

@property (nonatomic,copy,nullable) NSArray<id<FDKFacialExpression>> * facialExpressions;

@property (nonatomic,copy,nullable) id<FDKObjectFeature> objectFeature;

@property (nonatomic,copy,nullable) id<FDKBodyFeature> bodyFeature;

@property (nonatomic,copy,nullable) NSArray<id<FDKBodyFeature>> *bodyFeatures;


@property (nonatomic,copy,nullable) id<FDKBodySegmentationData> bodySegmentationData;

@property (nonatomic,copy,nullable) NSArray<NSNumber *> *skinColorThreshold; //vec6

@property (nonatomic,readonly) CGSize inputFrameSize;

@property (nonatomic,readonly) CMTime frameTime;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithInputFrameSize:(CGSize)frameSize;

- (instancetype)initWithInputFrameSize:(CGSize)frameSize frameTime:(CMTime)frameTime NS_DESIGNATED_INITIALIZER;

@end

@protocol FDKDecorationFilterUpdating <NSObject>

- (void)updateWithRequest:(FDKDecorationFilterUpdateRequest *)request NS_SWIFT_NAME(update(with:));

@end

NS_ASSUME_NONNULL_END
