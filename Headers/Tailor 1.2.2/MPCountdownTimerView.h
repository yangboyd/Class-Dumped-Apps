//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIWebViewDelegate-Protocol.h"

@class MPTimer, NSString, UIWebView;

@interface MPCountdownTimerView : UIView <UIWebViewDelegate>
{
    _Bool _isPaused;
    CDUnknownBlockType _completionBlock;
    double _currentSeconds;
    MPTimer *_timer;
    UIWebView *_timerView;
}

@property(retain, nonatomic) UIWebView *timerView; // @synthesize timerView=_timerView;
@property(retain, nonatomic) MPTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double currentSeconds; // @synthesize currentSeconds=_currentSeconds;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)onTimerUpdate:(id)arg1;
- (id)timerBaseUrl;
- (id)timerHtml;
- (void)resume;
- (void)pause;
- (void)stopAndSignalCompletion:(_Bool)arg1;
- (void)startWithTimerCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isActive;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

