//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class ASDisplayNode;
@protocol CALayerDelegate, _ASDisplayLayerDelegate;

@interface _ASDisplayLayer : CALayer
{
    _Bool _attemptedDisplayWhileZeroSized;
    _Bool _as_allowsHighlightDrawing;
    _Bool _displaySuspended;
    id <CALayerDelegate> _as_retainedDelegate;
    ASDisplayNode *_asyncdisplaykit_node;
    id <_ASDisplayLayerDelegate> _asyncDelegate;
}

+ (id)defaultValueForKey:(id)arg1;
+ (id)displayQueue;
+ (id)defaultActionForKey:(id)arg1;
@property(nonatomic, getter=isDisplaySuspended) _Bool displaySuspended; // @synthesize displaySuspended=_displaySuspended;
@property __weak id <_ASDisplayLayerDelegate> asyncDelegate; // @synthesize asyncDelegate=_asyncDelegate;
@property(nonatomic) __weak ASDisplayNode *asyncdisplaykit_node; // @synthesize asyncdisplaykit_node=_asyncdisplaykit_node;
@property(nonatomic, setter=as_setAllowsHighlightDrawing:) _Bool as_allowsHighlightDrawing; // @synthesize as_allowsHighlightDrawing=_as_allowsHighlightDrawing;
@property(retain, nonatomic) id <CALayerDelegate> as_retainedDelegate; // @synthesize as_retainedDelegate=_as_retainedDelegate;
- (void).cxx_destruct;
- (id)description;
- (void)cancelAsyncDisplay;
- (void)display:(_Bool)arg1;
- (void)display;
- (void)_hackResetNeedsDisplay;
- (void)displayImmediately;
- (void)setNeedsDisplay;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool displaysAsynchronously; // @dynamic displaysAsynchronously;

@end

