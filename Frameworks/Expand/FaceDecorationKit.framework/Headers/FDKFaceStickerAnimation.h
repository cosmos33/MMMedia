//
//  FDKFaceStickerAnimation.h
//  FaceDecorationKit
//
//  Created by 杨乃川 on 2017/10/31.
//

#import <Foundation/Foundation.h>
@import Mantle;

@interface FDKFaceStickerAnimationFramePosition : MTLModel <MTLJSONSerializing>
@property (nonatomic, assign) float  faceX;
@property (nonatomic, assign) float  faceY;
@property (nonatomic, assign) float  rotation;
@property (nonatomic, assign) float  radius;
@end

@interface FDKFaceStickerAnimationFrame : NSObject
@property (nonatomic, copy) NSArray <FDKFaceStickerAnimationFramePosition *>*positions;
@end

@interface FDKFaceStickerAnimation : MTLModel <MTLJSONSerializing>
@property (nonatomic, copy) NSArray <FDKFaceStickerAnimationFrame *>*frames;
@end
