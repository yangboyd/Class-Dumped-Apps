//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSPKSceneRule.h"

#import "TSPKTriggerRule-Protocol.h"

@class NSString, NSTimer;

@interface TSPKPageStatusRule : TSPKSceneRule <TSPKTriggerRule>
{
    _Bool _carePageAppear;
    _Bool _carePageDisappear;
    _Bool _isInterestPageOnScreen;
    NSString *_pageName;
    long long _detectTimeDelay;
    CDUnknownBlockType _action;
    NSTimer *_timer;
    double _lastCheckTime;
}

- (void).cxx_destruct;
@property(nonatomic) double lastCheckTime; // @synthesize lastCheckTime=_lastCheckTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) _Bool isInterestPageOnScreen; // @synthesize isInterestPageOnScreen=_isInterestPageOnScreen;
@property(nonatomic) long long detectTimeDelay; // @synthesize detectTimeDelay=_detectTimeDelay;
@property(nonatomic) _Bool carePageDisappear; // @synthesize carePageDisappear=_carePageDisappear;
@property(nonatomic) _Bool carePageAppear; // @synthesize carePageAppear=_carePageAppear;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (_Bool)hasCheckRecently;
- (void)executeDetectAction;
- (void)cancelDetectAction;
- (void)scheduleDetectAction;
- (void)setTriggerDetectAction:(CDUnknownBlockType)arg1;
- (void)applicationEnterBackground;
- (void)applicationBecomeInactive;
- (void)applicationEnterForeground;
- (void)applicationBecomeActive;
- (void)pageStatusChangeForDetectAction:(_Bool)arg1;
- (void)pageDidDisappear:(id)arg1;
- (void)pageDidAppear:(id)arg1;
- (void)handlePageStatusChangeNotification:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
- (void)dealloc;
- (id)initWithRuleModel:(id)arg1;
- (void)decodeParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

