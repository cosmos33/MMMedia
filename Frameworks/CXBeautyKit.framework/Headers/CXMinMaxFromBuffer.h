/*
See LICENSE.txt for this sample’s licensing information.

Abstract:
Defines a function which extracts the smallest and largest values from a pixel buffer.
*/

#ifndef CXMinMaxFromBuffer_h
#define CXMinMaxFromBuffer_h

#import <CoreVideo/CoreVideo.h>
#import <Metal/Metal.h>

void CXMinMaxFromPixelBuffer(CVPixelBufferRef pixelBuffer, float* minValue, float* maxValue, MTLPixelFormat pixelFormat);

float CXValueFromPixelBuffer(CVPixelBufferRef pixelBuffer, CGPoint location, MTLPixelFormat pixelFormat);

#endif /* minMaxFromBuffer_h */
