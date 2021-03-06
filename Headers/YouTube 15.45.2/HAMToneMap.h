//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLComputePipelineState, MTLDevice, MTLLibrary, MTLTexture;

@interface HAMToneMap : NSObject
{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    id <MTLComputePipelineState> _buildInputsPipeline;
    id <MTLComputePipelineState> _buildOutputsPipeline;
    id <MTLComputePipelineState> _buildLUTPipeline;
    id <MTLTexture> _linearInputs;
    id <MTLTexture> _nonlinearOutputs;
    id <MTLTexture> _LUT;
    NSString *_transferFunctionName;
    NSString *_colorPrimariesName;
    float _masteringLuminanceMax;
    float _maxCLL;
}

- (void).cxx_destruct;
- (_Bool)buildPipelinesAndReturnError:(id *)arg1;
- (id)LUTForPixelBuffer:(struct __CVBuffer *)arg1 commandQueue:(id)arg2 error:(id *)arg3;
- (id)initWithLibrary:(id)arg1;

@end

