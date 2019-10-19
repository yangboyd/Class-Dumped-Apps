//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaEventListener-Protocol.h"

@class NSString, SCCognacBlizzardEventLoggingController, SCFeatureSettingsManager, SCGCDBlockTimer, SCLazy, UIView;

@interface SCCognacButtonTooltipController : NSObject <SCOperaEventListener>
{
    SCFeatureSettingsManager *_featureSettingsManager;
    _Bool _partyForAWhile;
    double _audioButtonCheveronXPosition;
    UIView *_targetView;
    unsigned long long _presentUserCount;
    SCLazy *_audioButtonTooltipLazy;
    SCGCDBlockTimer *_partyTimer;
    _Bool _aloneForAWhile;
    double _inviteButtonCheveronXPosition;
    SCLazy *_inviteButtonTooltipLazy;
    SCGCDBlockTimer *_aloneTimer;
    SCCognacBlizzardEventLoggingController *_eventLoggingController;
}

@property(readonly, nonatomic) SCCognacBlizzardEventLoggingController *eventLoggingController; // @synthesize eventLoggingController=_eventLoggingController;
- (void).cxx_destruct;
- (void)_cancelAloneTimer;
- (void)_handleAloneTimerDidFire;
- (void)_cancelPartyTimer;
- (void)_handlePartyTimerDidFire;
- (void)_setupPartyTimer;
- (id)_createInviteTooltip;
- (void)_markInviteButtonTooltipAsSeen;
- (void)_hideInviteButtonTooltip;
- (void)_showInviteButtonTooltip;
- (void)_setInviteButtonCheveronXPosition:(double)arg1;
- (id)_createAudioTooltip;
- (void)_hideAudioButtonTooltip;
- (void)_markAudioButtonTooltipAsSeen;
- (void)_showAudioButtonTooltip;
- (void)_setAudioButtonCheveronXPosition:(double)arg1;
- (void)setupAloneTimer;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)_clear;
- (void)updatePresentUserCount:(unsigned long long)arg1;
- (id)initWithFeatureSettingsManager:(id)arg1 eventLoggingController:(id)arg2;
- (void)logTootipDisplayEvent:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

