attribute vec4 position;
attribute vec4 inputTextureCoordinate;
attribute vec4 inputTextureCoordinate2;

varying vec2 textureCoordinate;
varying vec2 textureCoordinate2;

uniform vec2 decorationCenter;
uniform vec2 decorationSize;
uniform vec2 decorationAnchorPoint;
uniform float decorationRotation;

void main()
{
    gl_Position = position;
    textureCoordinate = inputTextureCoordinate.xy;
    
    vec2 coord = inputTextureCoordinate2.xy;
    coord = (coord - decorationCenter + (decorationSize/2.0)) / decorationSize;
    coord = vec2(coord.x - decorationAnchorPoint.x, decorationAnchorPoint.y - coord.y);
    coord = coord * mat2(cos(decorationRotation), -sin(decorationRotation),sin(decorationRotation),cos(decorationRotation));
    coord = vec2(coord.x + decorationAnchorPoint.x, decorationAnchorPoint.y - coord.y);
    textureCoordinate2 = coord;
}