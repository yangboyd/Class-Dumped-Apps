//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKView.h>

#import <Core/WASampleBufferDisplayViewDelegate-Protocol.h>
#import <Core/WASampleBufferDisplayViewProtocol-Protocol.h>

@class CADisplayLink, NSObject, NSString, WASampleBufferDisplayViewRenderer;
@protocol OS_dispatch_queue, WASampleBufferDisplayViewDelegate;

@interface WASampleBufferDisplayView : GLKView <WASampleBufferDisplayViewDelegate, WASampleBufferDisplayViewProtocol>
{
    CADisplayLink *_displayLink;
    WASampleBufferDisplayViewRenderer *_renderer;
    struct opaqueCMBufferQueueTriggerToken *_highWaterMarkTrigger;
    struct opaqueCMBufferQueueTriggerToken *_lowWaterMarkTrigger;
    _Bool _haveRequestedContext;
    _Bool _paused;
    _Bool _readyForMoreMediaData;
    id <WASampleBufferDisplayViewDelegate> _sampleBufferDisplayViewDelegate;
    long long _status;
    NSObject<OS_dispatch_queue> *_mediaProviderQueue;
    CDUnknownBlockType _mediaProviderBlock;
    struct opaqueCMBufferQueue *_bufferQueue;
    struct OpaqueCMTimebase *_controlTimebase;
}

- (void).cxx_destruct;
@property struct OpaqueCMTimebase *controlTimebase; // @synthesize controlTimebase=_controlTimebase;
@property(getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData; // @synthesize readyForMoreMediaData=_readyForMoreMediaData;
@property(nonatomic) struct opaqueCMBufferQueue *bufferQueue; // @synthesize bufferQueue=_bufferQueue;
@property(copy) CDUnknownBlockType mediaProviderBlock; // @synthesize mediaProviderBlock=_mediaProviderBlock;
@property(retain) NSObject<OS_dispatch_queue> *mediaProviderQueue; // @synthesize mediaProviderQueue=_mediaProviderQueue;
@property long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <WASampleBufferDisplayViewDelegate> sampleBufferDisplayViewDelegate; // @synthesize sampleBufferDisplayViewDelegate=_sampleBufferDisplayViewDelegate;
- (void)sampleBufferDisplayViewDidDrawFrameWithSourceTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
- (_Bool)shouldBePaused;
- (void)updatePaused;
- (_Bool)createBufferQueue;
- (void)moveToTime:(CDStruct_1b6d18a9)arg1;
- (void)removeFramesOlderThan:(CDStruct_1b6d18a9)arg1;
- (void)clearQueue;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)stopRequestingMediaData;
- (void)setReadyForMoreMediaDataIfPossible;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)loadContext;
- (void)requestContext;
- (void)redraw:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithStartTime:(CDStruct_1b6d18a9)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

