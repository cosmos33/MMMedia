function load(arguments) {
    mainKernel = MTIRenderPipelineKernel.build({
                                                "fragmentFunction": { name: "mainKernel", library: arguments.metallib },
                                                "vertexFunction": { name: "passthroughVertex" }
                                                })
}

function render(arguments) {
    var bodySegmentMask = arguments.parameters.bodySegmentMask
    var hairSegmentMask = arguments.parameters.hairSegmentMask
    var inputImage = arguments.inputImage
    if (!bodySegmentMask || !hairSegmentMask) {
        return inputImage
    }    
    return MTIRenderCommand.perform({ "commands": [MTIRenderCommand.build({
                                                                          "kernel": mainKernel,
                                                                          "geometry": MTIVertices.fullViewportSquareVertices(),
                                                                          "images": [inputImage, bodySegmentMask, hairSegmentMask],
                                                                          "parameters": {}})
                                                   ], "outputDescriptors": [MTIRenderPassOutputDescriptor.build({ "size": inputImage.size })]
                                    })[0]
}
