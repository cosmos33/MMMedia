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

@class    MMBodyFeature;
@class    MMExpression;
@class    MMHandFeature;

@protocol FDKFaceFeature;
@protocol FDKFacialExpression;
@protocol FDKObjectFeature;
@protocol CVSegmentationData;

@interface FDKX3DCVInfo : NSObject

@property (nonatomic,strong) NSArray<id<FDKFaceFeature>> *faceFeatures;
@property (nonatomic,strong) NSArray<NSArray<id<FDKFacialExpression>> *> *faceExpressions;

@property (nonatomic,strong) NSArray<MMExpression *> *expressions;

@property (nonatomic,strong) NSArray<MMBodyFeature *> *bodyFeatures;

@property (nonatomic,strong) NSArray<id<FDKObjectFeature>> *objectFeatures;

@property (nonatomic,strong) NSArray<MMHandFeature *> *handFeatures;

@property (nonatomic,strong) id<CVSegmentationData> bodySegmentationData;

@property (nonatomic,copy) NSData *sourceVerticesData;

@property (nonatomic,copy) NSData *destinationVerticesData;

@end

@interface FDKX3DEngine : NSObject

+ (instancetype)shareInstance;

- (BOOL)configResourcePath:(NSString *)resourcePath;

- (BOOL)runEngine;

- (BOOL)isRunning;

- (void)rotateCamera:(FDKX3DCameraPosition)cameraPosition;

- (void)enableRecording:(BOOL)enabled;

- (void)endRunEngine;

/**
 Touch View大小和Render比例不一致时，需根据render大小计算新坐标
 */
- (BOOL)hitTestTouch:(CGPoint)point withView:(UIView *)view;
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event;

/**
 CV Event，图像算法数据派发
 */
- (void)updateWithCVInfos:(FDKX3DCVInfo *)CVInfos;

/**
 Weex Message 事件派发
 */
- (void)dispatchReceivedMessage:(NSString*)message;
- (void)registerMessageSendHandle:(FDKX3DMessageSendHandle)sendHandle;

/**
 Lua 模块加载接口
 */
- (void)setupLuaScriptEngine;

- (void)addSearchPath:(NSString *)relationSearchPatch;

/**
 AR 模块接口
 */
- (BOOL)ARIsActive;

- (void)activeARSupport:(BOOL)active;

- (id)internalARSessionDelegate;

/**
 日志接口
 */
- (void)setLogEnable:(BOOL)enable;

- (void)appendTask:(dispatch_block_t)task;

- (void)appendSyncTask:(dispatch_block_t)syncTask;

/**
 自定义事件派发
 */
- (void)dispatchEvent:(NSString *)event content:(NSString *)content;

@end
