//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSGLInput-Protocol.h"

@class HTSGLContext, HTSGLFramebuffer, NSString;

@interface HTSRawDataOutput : NSObject <HTSGLInput>
{
    struct CGSize _imageSize;
    unsigned long long _inputRotation;
    _Bool _outputBGRA;
    HTSGLFramebuffer *_firstInputFramebuffer;
    HTSGLFramebuffer *_outputFramebuffer;
    HTSGLFramebuffer *_retainedFramebuffer;
    _Bool _hasReadFromTheCurrentFrame;
    _Bool _lockNextFramebuffer;
    _Bool _lockInputFramebuffer;
    struct __CVBuffer *_pixelBuf;
    _Bool enabled;
    CDUnknownBlockType _newFrameAvailableBlock;
    char *_rawBytesForImage;
    HTSGLContext *_context;
}

@property(readonly, nonatomic) HTSGLContext *context; // @synthesize context=_context;
@property(readonly) char *rawBytesForImage; // @synthesize rawBytesForImage=_rawBytesForImage;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(copy, nonatomic) CDUnknownBlockType newFrameAvailableBlock; // @synthesize newFrameAvailableBlock=_newFrameAvailableBlock;
- (void).cxx_destruct;
- (void)unlockFramebufferAfterReading;
- (void)lockFramebufferForReading;
- (void)setImageSize:(struct CGSize)arg1;
- (unsigned long long)bytesPerRowInOutput;
- (void)unlockFramebuffer;
- (struct __CVBuffer *)pixelBuffer;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2 exceptionBlock:(CDUnknownBlockType)arg3;
- (id)initWithImageSize:(struct CGSize)arg1 resultsInBGRAFormat:(_Bool)arg2 context:(id)arg3;
- (id)initWithImageSize:(struct CGSize)arg1 resultsInBGRAFormat:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

