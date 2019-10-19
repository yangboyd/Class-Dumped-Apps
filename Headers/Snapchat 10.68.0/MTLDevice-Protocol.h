//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTLCompileOptions, MTLComputePipelineDescriptor, MTLDepthStencilDescriptor, MTLHeapDescriptor, MTLIndirectCommandBufferDescriptor, MTLRenderPipelineDescriptor, MTLSamplerDescriptor, MTLSharedEventHandle, MTLTextureDescriptor, MTLTileRenderPipelineDescriptor, NSArray, NSBundle, NSObject, NSString, NSURL;
@protocol MTLArgumentEncoder, MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDepthStencilState, MTLEvent, MTLFence, MTLFunction, MTLHeap, MTLIndirectCommandBuffer, MTLLibrary, MTLRenderPipelineState, MTLSamplerState, MTLSharedEvent, MTLTexture, OS_dispatch_data;

@protocol MTLDevice <NSObject>
@property(readonly) unsigned long long maxBufferLength;
@property(readonly, getter=areProgrammableSamplePositionsSupported) _Bool programmableSamplePositionsSupported;
@property(readonly) unsigned long long maxArgumentBufferSamplerCount;
@property(readonly) unsigned long long maxThreadgroupMemoryLength;
@property(readonly) unsigned long long currentAllocatedSize;
@property(readonly, getter=areRasterOrderGroupsSupported) _Bool rasterOrderGroupsSupported;
@property(readonly) unsigned long long argumentBuffersSupport;
@property(readonly) unsigned long long readWriteTextureSupport;
@property(readonly, getter=isDepth24Stencil8PixelFormatSupported) _Bool depth24Stencil8PixelFormatSupported;
@property(readonly) unsigned long long recommendedMaxWorkingSetSize;
@property(readonly, getter=isRemovable) _Bool removable;
@property(readonly, getter=isHeadless) _Bool headless;
@property(readonly, getter=isLowPower) _Bool lowPower;
@property(readonly) CDStruct_da2e99ad maxThreadsPerThreadgroup;
@property(readonly) unsigned long long registryID;
@property(readonly) NSString *name;
- (id <MTLSharedEvent>)newSharedEventWithHandle:(MTLSharedEventHandle *)arg1;
- (id <MTLSharedEvent>)newSharedEvent;
- (id <MTLEvent>)newEvent;
- (id <MTLIndirectCommandBuffer>)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithArguments:(NSArray *)arg1;
- (void)getDefaultSamplePositions:(CDStruct_b2fbf00d *)arg1 count:(unsigned long long)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (unsigned long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (_Bool)supportsTextureSampleCount:(unsigned long long)arg1;
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;
- (id <MTLFence>)newFence;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLRenderPipelineState>, NSError *))arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 completionHandler:(void (^)(id <MTLLibrary>, NSError *))arg3;
- (id <MTLLibrary>)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithData:(NSObject<OS_dispatch_data> *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithFile:(NSString *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibraryWithBundle:(NSBundle *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibrary;
- (id <MTLSamplerState>)newSamplerStateWithDescriptor:(MTLSamplerDescriptor *)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLDepthStencilState>)newDepthStencilStateWithDescriptor:(MTLDepthStencilDescriptor *)arg1;
- (id <MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(void (^)(void *, unsigned long long))arg4;
- (id <MTLBuffer>)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id <MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id <MTLHeap>)newHeapWithDescriptor:(MTLHeapDescriptor *)arg1;
- (CDStruct_5e758c1a)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_5e758c1a)heapTextureSizeAndAlignWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLCommandQueue>)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id <MTLCommandQueue>)newCommandQueue;
@end

