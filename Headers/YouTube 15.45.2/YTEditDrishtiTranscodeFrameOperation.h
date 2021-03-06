//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEditEffectsGraphDelegate-Protocol.h>
#import <Module_Framework/YTUploadTranscodeFrameOperation-Protocol.h>

@class GIMMe, NSCondition, NSString, YTEditEffectsGraph;

@interface YTEditDrishtiTranscodeFrameOperation : NSObject <YTEditEffectsGraphDelegate, YTUploadTranscodeFrameOperation>
{
    struct __CVBuffer *_processedFrame;
    NSCondition *_pauseCondition;
    _Bool _willCancel;
    _Bool _graphDidLoad;
    YTEditEffectsGraph *_effectsGraph;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)effectsGraph:(id)arg1 didLoadSettings:(id)arg2;
- (void)effectsGraph:(id)arg1 didOutputVideoFrame:(struct __CVBuffer *)arg2 forEffectID:(id)arg3 timestamp:(double)arg4;
- (void)willCancel;
- (struct __CVBuffer *)processedVideoFrameFromVideoFrame:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)setUpAndWait;
- (void)dealloc;
- (id)initWithEffectsGraph:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

