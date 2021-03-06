//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESBaseTransitionFilter.h"

@class HTSGLFramebuffer;

@interface IESOverlapTransitionFilter : IESBaseTransitionFilter
{
    HTSGLFramebuffer *_secondInputFramebuffer;
    unsigned long long _inputRotation2;
    CDStruct_1b6d18a9 _firstFrameTime;
    CDStruct_1b6d18a9 _secondFrameTime;
    _Bool _hasSetFirstTexture;
    _Bool _hasReceivedFirstFrame;
    _Bool _hasReceivedSecondFrame;
    _Bool _firstFrameWasVideo;
    _Bool _secondFrameWasVideo;
    _Bool _firstFrameCheckDisabled;
    _Bool _secondFrameCheckDisabled;
}

- (void).cxx_destruct;
- (void)setProgress:(float)arg1;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2 exceptionBlock:(CDUnknownBlockType)arg3;
- (struct CGSize)rotatedSize:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)disableSecondFrameCheck;
- (void)disableFirstFrameCheck;
- (id)initWithRenderer:(id)arg1;

@end

