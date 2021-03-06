//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext, IGGLKSession;

@interface IGGLKImageGenerator : NSObject
{
    CIContext *_ciContext;
    IGGLKSession *_session;
}

- (void).cxx_destruct;
- (id)_textureLoader;
- (id)_renderQueue;
- (id)_ciContext;
- (id)generateImageFromCanvas:(id)arg1 withSize:(struct CGSize)arg2;
- (id)generateCIImageFromCanvas:(id)arg1 withSize:(struct CGSize)arg2;
- (struct CGImage *)createCGImageFromCanvas:(id)arg1 withSize:(struct CGSize)arg2;
- (struct __CVBuffer *)createPixelBufferFromCanvas:(id)arg1 withSize:(struct CGSize)arg2;
- (id)initWithSession:(id)arg1;

@end

