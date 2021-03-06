//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMTPixelBufferCapturer-Protocol.h"

@class CADisplayLink, CALayer, NSString, UIView;

@interface IESLiveMTLayerCapturer : NSObject <IESLiveMTPixelBufferCapturer>
{
    CALayer *_captureLayer;
    UIView *_captureView;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _captureBlock;
    CDUnknownBlockType _liveCoreCaptureBlock;
    struct __CVBuffer *_preFrame;
    struct CGSize _outputSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct __CVBuffer *preFrame; // @synthesize preFrame=_preFrame;
@property(copy, nonatomic) CDUnknownBlockType liveCoreCaptureBlock; // @synthesize liveCoreCaptureBlock=_liveCoreCaptureBlock;
@property(copy, nonatomic) CDUnknownBlockType captureBlock; // @synthesize captureBlock=_captureBlock;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) __weak UIView *captureView; // @synthesize captureView=_captureView;
@property(nonatomic) __weak CALayer *captureLayer; // @synthesize captureLayer=_captureLayer;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
- (_Bool)running;
- (void)destryDisplayLink;
- (void)setupDisplayLink;
- (void)captureFrame:(id)arg1;
- (void)setVideoProcessedCallback:(CDUnknownBlockType)arg1;
- (void)setPixelBufferProcessBlock:(CDUnknownBlockType)arg1;
- (void)stopCapture;
- (id)initWithView:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

