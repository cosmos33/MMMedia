//
//  FDKX3DEngine.h
//  MomoChat
//
//  Created by momo783 on 2017/5/16.
//  Copyright © 2017年 wemomo.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>

typedef void(^FDKX3DMessageSendHandle)(NSString* message);

typedef NS_ENUM(NSInteger, FDKX3DCameraPosition) {
    FDKX3DCameraPositionFront,
    FDKX3DCameraPositionBack,
};

@protocol FDKFaceFeature;
@protocol FDKFacialExpression;
@protocol FDKObjectFeature;
@class    MMBodyFeature;
@class    MMExpression;
@class    MMHandFeature;

@interface FDKX3DCVInfo : NSObject

@property (nonatomic,strong) NSArray<id<FDKFaceFeature>> *faceFeatures;
@property (nonatomic,strong) NSArray<NSArray<id<FDKFacialExpression>> *> *faceExpressions;

@property (nonatomic,strong) NSArray<MMExpression *> *expressions;

@property (nonatomic,strong) NSArray<MMBodyFeature *> *bodyFeatures;

@property (nonatomic,strong) NSArray<id<FDKObjectFeature>> *objectFeatures;

@property (nonatomic,strong) NSArray<MMHandFeature *> *handFeatures;

@end

@interface FDKX3DEngine : NSObject

+ (instancetype)shareInstance;

- (BOOL)configResourcePath:(NSString *)resourcePath;

- (BOOL)runEngine;

- (BOOL)isRunning;

- (void)rotateCamera:(FDKX3DCameraPosition)cameraPosition;

- (void)enableRecording:(BOOL)enabled;

- (void)endRunEngine;

////////////////////////// Touch Event /////////////////////////
/* Touch View大小和Render比例不一致时，需根据render大小计算新坐标    */
- (BOOL)hitTestTouch:(CGPoint)point withView:(UIView *)view;
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event;

////////////       CV  Event      ///////////////
- (void)updateWithCVInfos:(FDKX3DCVInfo *)CVInfos;

///////////////////////   Message   //////////////////////////////
- (void)dispatchReceivedMessage:(NSString*)message;
- (void)registerMessageSendHandle:(FDKX3DMessageSendHandle)sendHandle;

- (void)addSearchPath:(NSString *)relationSearchPatch;

- (CGRect)getActorLocationFrame:(NSString *)actorName;

@end
