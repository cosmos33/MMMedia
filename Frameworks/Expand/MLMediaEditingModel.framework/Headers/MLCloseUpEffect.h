//
//  MLCloseUpEffect.h
//  Pods
//
//  Created by YuAo on 17/08/2017.
//
//
@import Mantle;
@import MLFilterKit;
@import FaceDecorationKit;

NS_ASSUME_NONNULL_BEGIN

typedef NSString * MLCloseUpEffectTextAnimationType NS_EXTENSIBLE_STRING_ENUM;

@interface MLCloseUpDecorationEffectStroke: MTLModel <MTLJSONSerializing>

@property (nonatomic,readonly) CGFloat width;

@property (nonatomic,copy,readonly) UIColor *color;

@end

@interface MLCloseUpDecorationEffectText : MTLModel <MTLJSONSerializing>

@property (nonatomic,readonly) CGPoint center;

@property (nonatomic,copy,readonly) NSString *fontName;
@property (nonatomic,readonly) CGFloat fontSize;
@property (nonatomic,copy,readonly) UIColor *color;

@property (nonatomic,copy,readonly) MLCloseUpDecorationEffectStroke *stroke;

@property (nonatomic,copy,readonly) MLCloseUpEffectTextAnimationType animationType;

@property (nonatomic,copy,readonly,nullable) NSString *content;

- (instancetype)replacingContent: (nullable NSString *)content;

@end

@interface MLCloseUpDecorationEffectProcessingUnit : MTLModel <MTLJSONSerializing>

@property (nonatomic,copy,readonly) NSString *name;

@property (nonatomic,copy,readonly) NSDictionary *parameters;

@end

@interface MLCloseUpDecorationEffect : MTLModel <MTLJSONSerializing>

@property (nonatomic,copy,nullable,readonly) FDKDecoration *backgroundDecoration;

@property (nonatomic,copy,readonly) NSArray<MLCloseUpDecorationEffectProcessingUnit *> *backgroundProcessingUnits;

@property (nonatomic,copy,readonly) NSArray<MLCloseUpDecorationEffectProcessingUnit *> *foregroundProcessingUnits;

@property (nonatomic,copy,readonly) FDKDecoration *decoration;

@property (nonatomic,copy,nullable,readonly) MLCloseUpDecorationEffectStroke *stroke;

@property (nonatomic,copy,nullable,readonly) MLCloseUpDecorationEffectText *text;

@property (nonatomic,readonly) BOOL hardEdge;

@property (nonatomic,readonly) NSUInteger triggerType;

@property (nonatomic,readonly) NSTimeInterval duration;

+ (nullable instancetype)effectWithContentsOfURL:(NSURL *)URL;

- (instancetype)replacingTextContent: (nullable NSString *)content;

@end

NS_ASSUME_NONNULL_END
