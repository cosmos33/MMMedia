//
//  MLFilterUpdating.h
//  Pods
//
//  Created by YuAo on 14/07/2017.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString *MLFilterDataItemType NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT MLFilterDataItemType const MLFilterDataItemTypeOrientation;

@interface MLFilterDataItem : NSObject

@property (nonatomic,strong,readonly) id data;

@property (nonatomic,copy,readonly) MLFilterDataItemType type;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithType:(MLFilterDataItemType)type data:(id)data;

@end

@protocol MLFilterUpdating <NSObject>

- (NSArray<MLFilterDataItemType> *)requiredInputDataTypes;

- (void)updateWithDataItems:(NSArray<MLFilterDataItem *> *)items;

@end

NS_ASSUME_NONNULL_END
