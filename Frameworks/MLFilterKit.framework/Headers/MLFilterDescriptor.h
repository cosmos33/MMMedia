//
//  MLFilterDescriptor.h
//  Pods
//
//  Created by YuAo on 1/4/17.
//
//

#import <UIKit/UIKit.h>
#import "MLFilterBlendTexture.h"
#import "MLColorLookupTable.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSString *MLFilterDescriptorMetadataItemKey NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT MLFilterDescriptorMetadataItemKey MLFilterDescriptorMetadataItemKeyDisplayName;

@protocol MLResourceLoadingFilterProcessingUnit <NSObject>

- (instancetype)initWithResourceURL:(NSURL *)resourceURL;

@end

@interface MLFilterProcessingUnit : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,copy,readonly) NSString *name;

@property (nonatomic,copy,readonly) NSDictionary *parameters;

@property (nonatomic,copy,readonly,nullable) NSURL *resourceURL;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithName:(NSString *)name parameters:(NSDictionary *)parameters;

- (instancetype)initWithName:(NSString *)name parameters:(NSDictionary *)parameters resourceURL:(nullable NSURL *)resourceURL NS_DESIGNATED_INITIALIZER;


@end

@interface MLFilterDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,copy,readonly) NSString *name;

@property (nonatomic,copy,readonly) NSArray<MLFilterBlendTexture *> *blendTextures;

@property (nonatomic,copy,readonly,nullable) MLColorLookupTable *colorLookupTable;

@property (nonatomic,copy,readonly) NSArray<MLFilterProcessingUnit *> *preprocessingUnits;

@property (nonatomic,copy,readonly) NSArray<MLFilterProcessingUnit *> *postprocessingUints;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithName:(NSString *)name
            colorLookupTable:(nullable MLColorLookupTable *)colorLookupTable
               blendTextures:(NSArray<MLFilterBlendTexture *> *)blendTextures
          preprocessingUnits:(NSArray<MLFilterProcessingUnit *> *)preprocessingUnits
         postprocessingUnits:(NSArray<MLFilterProcessingUnit *> *)postprocessingUnits;

- (instancetype)initWithName:(NSString *)name
            colorLookupTable:(nullable MLColorLookupTable *)colorLookupTable
               blendTextures:(NSArray<MLFilterBlendTexture *> *)blendTextures
          preprocessingUnits:(NSArray<MLFilterProcessingUnit *> *)preprocessingUnits
         postprocessingUnits:(NSArray<MLFilterProcessingUnit *> *)postprocessingUnits
                    metadata:(nullable NSDictionary<NSString *,id> *)metadata NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithName:(NSString *)name
            colorLookupTable:(nullable MLColorLookupTable *)colorLookupTable
               blendTextures:(NSArray<MLFilterBlendTexture *> *)blendTextures;

- (instancetype)initWithName:(NSString *)name colorLookupImage:(nullable UIImage *)colorLookupImage;

@property (nonatomic,readonly,copy,nullable) NSURL *contentsURL;

- (nullable instancetype)initWithContentsOfURL:(NSURL *)URL;

- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

@property (nonatomic,copy,readonly,nullable) NSDictionary<MLFilterDescriptorMetadataItemKey, id> *metadata;

- (instancetype)filterByReplacingMetadata:(nullable NSDictionary<MLFilterDescriptorMetadataItemKey, id> *)metadata NS_SWIFT_NAME(replacingMetadata(_:));

@property (nonatomic,copy,readonly) NSString *displayName; //self.metadata[MLFilterDescriptorMetadataItemKeyDisplayName] or self.name

@end

@interface MLFilterDescriptor (Debug)

+ (NSArray<MLFilterDescriptor *> *)debugFilterDescriptorsWithContentsOfURL:(NSURL *)URL;

@end

NS_ASSUME_NONNULL_END
