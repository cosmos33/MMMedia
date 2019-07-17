
precision lowp float;

varying highp vec2 textureCoordinate;

uniform sampler2D inputImageTexture;

uniform float maskOpacity;
uniform int maskHasPremultipliedAlpha;
uniform int maskDisabled;

void main() {
    lowp vec4 c1 = texture2D(inputImageTexture, textureCoordinate);
    if (maskDisabled == 0) {
        if (maskHasPremultipliedAlpha > 0 && c1.a > 0.0) {
            c1.rgb = c1.rgb/c1.a;
        }
        c1.a = c1.a * maskOpacity;
    } else {
        c1.a = 0.0;
    }
    gl_FragColor = c1;
}
