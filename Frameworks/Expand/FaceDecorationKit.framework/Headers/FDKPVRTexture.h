//
//  FDKPVRTexture.h
//  Pods
//
//  Created by momo783 on 07/09/2017.
//
//

@import Mantle;

NS_ASSUME_NONNULL_BEGIN

@interface FDKPVRTextureMeta : MTLModel <MTLJSONSerializing>

@property (nonatomic,readonly) NSString *image;

@property (nonatomic,readonly) CGSize size;

@end

@interface FDKPVRTextureFrame : MTLModel <MTLJSONSerializing>

@property (nonatomic,readonly) NSString *filename;

@property (nonatomic,readonly) CGRect frame;

@property (nonatomic,readonly) BOOL rotated;

@end

@interface FDKPVRTexture : MTLModel <MTLJSONSerializing>

@property (nonatomic, readonly) NSArray <FDKPVRTextureFrame*> *frames;

@property (nonatomic, readonly) FDKPVRTextureMeta *meta;

+ (instancetype)textureWithContentsOfURL:(NSURL *)URL;

- (CGRect)textureFrameForDecorationIndex:(NSUInteger)decorationIndex;

- (BOOL)textureIsRotatedForDecorationIndex:(NSUInteger)decorationIndex;

@end

NS_ASSUME_NONNULL_END
