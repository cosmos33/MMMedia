//
//  CXMakeupFilter.h
//  Pods
//
//  Created by Yu Ao on 29/01/2018.
//

#import <Foundation/Foundation.h>
#import "CXMakeup.h"
#import "CXFilterInputType.h"
#import "CXTeethWhitenSettings.h"

@import MomoCV;
@import MetalPetal;

NS_ASSUME_NONNULL_BEGIN

@class CXBeautyFilterFaceAdditionalInfo, CXBeautyMasks;

@interface CXMakeupFilterInputParameter: NSObject

@property (nonatomic, copy, readonly) MMFaceFeature *faceFeature;

@property (nonatomic, copy, readonly) CXTeethWhitenSettings *teethWhitenSettings;

@property (nonatomic, copy, readonly) CXMakeup *makeup;

@property (nonatomic, copy, readonly) CXBeautyFilterFaceAdditionalInfo *faceAdditionalInfo;

- (instancetype)initWithFaceFeature:(MMFaceFeature *)faceFeature
                 faceAdditionalInfo:(CXBeautyFilterFaceAdditionalInfo *)faceAdditionalInfo
                teethWhitenSettings:(CXTeethWhitenSettings *)teethWhitenSettings
                             makeup:(CXMakeup *)makeup;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

@end

@interface CXMakeupFilter : NSObject <MTIUnaryFilter>

@property (nonatomic) CXFilterInputType inputType;

@property (nonatomic, copy) NSArray<CXMakeupFilterInputParameter *> *parameters;

@property (nonatomic, copy) CXBeautyMasks *masks;

@property (nonatomic, strong, nullable) MTIContext *context;

@end

NS_ASSUME_NONNULL_END
