//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IVERendererDrawable-Protocol.h"

@class HTSGLContext, NSString, UIView;

@interface VEGLRendererDrawable : NSObject <IVERendererDrawable>
{
    unsigned int _displayRenderbuffer;
    unsigned int _displayFramebuffer;
    HTSGLContext *_context;
    UIView *_glDrawable;
    struct CGSize _sizeInPixel;
}

@property(nonatomic) struct CGSize sizeInPixel; // @synthesize sizeInPixel=_sizeInPixel;
@property(nonatomic) __weak UIView *glDrawable; // @synthesize glDrawable=_glDrawable;
@property(nonatomic) __weak HTSGLContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)presentScreenFBO;
- (void *)opaquePointer;
@property(readonly, nonatomic) struct CGSize size;
- (void)layoutIfNeed;
- (_Bool)bindScreenFBO;
- (void)destoryFBO;
- (void)prepareFBO;
- (void)dealloc;
- (id)initWithDrawable:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

