//
//  FDKShaderToyTwoInputFilter.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/22.
//

@import GPUImage;

NS_ASSUME_NONNULL_BEGIN

@interface FDKShaderToyTwoInputFilter : GPUImageTwoInputFilter {
    BOOL _markTheNextTimeAsStartTime;
    GLint _iResolutionUniform;
    GLint _iTimeUniform;
}

@property (nonatomic, assign) CMTime curretnTime;

@property (nonatomic, assign) CMTime startTime;

- (void)markTheNextTimeAsStartTime;

@end

NS_ASSUME_NONNULL_END
