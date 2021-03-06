//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext, IGGLKQueue, MTKTextureLoader;

@interface IGGLKTextureLoader : NSObject
{
    CIContext *_ciContext;
    struct __CVOpenGLESTextureCache *_openGLESTextureCache;
    struct __CVMetalTextureCache *_metalTextureCache;
    MTKTextureLoader *_textureLoader;
    unsigned int _framebuffer;
    int _maxTextureSize;
    IGGLKQueue *_textureQueue;
    IGGLKQueue *_renderQueue;
    _Bool _isMetalEnabled;
    _Bool _isIGLEnabled;
    _Bool _isIGLMetal;
}

- (void).cxx_destruct;
- (id)_iglMetalTextureWithPixelBuffer:(struct __CVBuffer *)arg1 pixelFormat:(int)arg2 planeIndex:(unsigned long long)arg3 orientation:(long long)arg4;
- (id)_iglOpenGLTextureWithPixelBuffer:(struct __CVBuffer *)arg1 planeIndex:(unsigned long long)arg2 orientation:(long long)arg3;
- (id)_metalTextureWithPixelBuffer:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 planeIndex:(unsigned long long)arg3 orientation:(long long)arg4;
- (id)_openGLESTextureWithPixelBuffer:(struct __CVBuffer *)arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 planeIndex:(unsigned long long)arg4 orientation:(long long)arg5;
- (id)_textureWithRGBPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2;
- (id)_textureWithYUVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2;
- (id)textureWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2;
- (id)textureWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id)textureWithImage:(id)arg1;
- (id)textureWithSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithTextureQueue:(id)arg1 renderQueue:(id)arg2 metalEnabled:(_Bool)arg3 iglEnabled:(_Bool)arg4 isIGLMetal:(_Bool)arg5;

@end

