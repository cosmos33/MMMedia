//
//  FDKSceneEffectsUnity.h
//  FaceDecorationKit+SceneEffects
//
//  Created by MOMO on 2019/4/19.
//

#import <Foundation/Foundation.h>
#import <GPUImage/GPUImage.h>

FOUNDATION_EXTERN double se_mod(double x, double mod);
FOUNDATION_EXTERN float se_smoothstep(float edge0, float edge1, float x);



@interface FDKSceneEffectsUnity : NSObject

+ (UIImage *)imageNamed:(NSString *)name;

+ (GPUVector3)getColorFromString:(NSString *)string;

@end
