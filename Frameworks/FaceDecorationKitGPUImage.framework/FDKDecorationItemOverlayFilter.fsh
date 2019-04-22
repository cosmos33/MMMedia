
precision lowp float;

varying highp vec2 textureCoordinate;
varying highp vec2 textureCoordinate2;

uniform sampler2D inputImageTexture;
uniform sampler2D inputImageTexture2;

uniform float decorationOpacity;
uniform int decorationHasPremultipliedAlpha;
uniform int blendEnabled;

vec4 normalBlend(vec4 sourceColor, vec4 overlayColor) {
    lowp vec4 outputColor;
    
    lowp float a = overlayColor.a + sourceColor.a * (1.0 - overlayColor.a);
    lowp float alphaDivisor = a + step(a, 0.0); // Protect against a divide-by-zero blacking out things in the output
    
    outputColor.r = (overlayColor.r * overlayColor.a + sourceColor.r * sourceColor.a * (1.0 - overlayColor.a))/alphaDivisor;
    outputColor.g = (overlayColor.g * overlayColor.a + sourceColor.g * sourceColor.a * (1.0 - overlayColor.a))/alphaDivisor;
    outputColor.b = (overlayColor.b * overlayColor.a + sourceColor.b * sourceColor.a * (1.0 - overlayColor.a))/alphaDivisor;
    outputColor.a = a;
    
    return outputColor;
}

void main() {
    lowp vec4 sourceColor = texture2D(inputImageTexture, textureCoordinate);
    lowp vec4 overlayColor = vec4(0.0);
    if (textureCoordinate2.x > 0.0 && textureCoordinate2.y > 0.0 && textureCoordinate2.x < 1.0 && textureCoordinate2.y < 1.0) {
        
        overlayColor = texture2D(inputImageTexture2, textureCoordinate2);
        
        if (decorationHasPremultipliedAlpha > 0 && overlayColor.a > 0.0) {
            overlayColor.rgb = overlayColor.rgb/overlayColor.a;
        }
        overlayColor.a = overlayColor.a * decorationOpacity;
    }
    gl_FragColor = blendEnabled == 1 ? normalBlend(sourceColor, overlayColor) : overlayColor;
}
