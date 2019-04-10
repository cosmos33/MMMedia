//
//  CXMakeupLayerRenderParameters.h
//  Pods
//
//  Created by Yu Ao on 01/02/2018.
//

#import <Foundation/Foundation.h>
#import "CXMakeupFilter.h"
#import "CXFilterInputType.h"
@import MetalPetal;

NS_ASSUME_NONNULL_BEGIN

@class CXBeautyFilterFaceAdditionalInfo, CXBeautyMasks;

@interface CXMakeupLayerRenderParameters : NSObject

@property (nonatomic, strong, readonly, nullable) MTIContext *context;

@property (nonatomic, copy, readonly) MTIImage *inputImage;

@property (nonatomic, copy, readonly) MMFaceFeature *faceFeature;

@property (nonatomic, copy, readonly) CXBeautyFilterFaceAdditionalInfo *faceAdditionalInfo;

@property (nonatomic, readonly) MTLPixelFormat outputPixelFormat;

@property (nonatomic, readonly) CXFilterInputType inputType;

@property (nonatomic, copy, readonly) CXBeautyMasks *masks;

- (instancetype)initWithFaceFeature:(MMFaceFeature *)faceFeature
                 faceAdditionalInfo:(CXBeautyFilterFaceAdditionalInfo *)faceAdditionalInfo
                         inputImage:(MTIImage *)inputImage
                              masks:(CXBeautyMasks *)masks
                  outputPixelFormat:(MTLPixelFormat)outputPixelFormat
                            context:(nullable MTIContext *)context
                          inputType:(CXFilterInputType)inputType;

@end

@interface CXMakeupLayerConfiguration (RenderCommand)

- (NSArray<MTIRenderCommand *> *)createRenderCommandsWithParameters:(CXMakeupLayerRenderParameters *)parameters;

@end

NS_ASSUME_NONNULL_END
