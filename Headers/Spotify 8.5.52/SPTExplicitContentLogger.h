//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter, SPTUBILogger, SPTUBIMobileExplicitcontentEventFactory;

@interface SPTExplicitContentLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTUBIMobileExplicitcontentEventFactory> _eventFactory;
    id <SPTUBILogger> _ubiLogger;
}

@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTUBIMobileExplicitcontentEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (double)timestamp;
- (void)logSettingsMenuInteractionEnabled:(_Bool)arg1 contentURI:(id)arg2;
- (void)logPlaybackPreventedByLockPopUpCloseButtonInteraction;
- (void)logPlaybackPreventedPopUpNotNowButtonInteraction;
- (void)logPlaybackPreventedPopUpGoToSettingsInteraction:(id)arg1 pageURI:(id)arg2;
- (void)logPlaybackPreventedPopUpImpressionContentURI:(id)arg1 pageURI:(id)arg2 lockedState:(_Bool)arg3;
- (id)initWithLogCenter:(id)arg1 eventFactory:(id)arg2 ubiLogger:(id)arg3;

@end

