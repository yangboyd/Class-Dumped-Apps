//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMLogger-Protocol.h"

@class NSString;
@protocol SPTEventSender, SPTLogCenter;

@interface SPTVideoLoggerImpl : NSObject <BMLogger>
{
    id <SPTLogCenter> _logCenter;
    id <SPTEventSender> _eventSender;
}

@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)mapToGabitoPlaybackSessionMessage:(id)arg1;
- (id)mapToGabitoPlaybackErrorMessage:(id)arg1;
- (id)mapToEndVideoMessage:(id)arg1;
- (void)sendPlaybackErrorMessage:(id)arg1;
- (void)sendPlaybackSessionMessage:(id)arg1;
- (_Bool)updatePendingEndVideoMessage:(id)arg1;
- (_Bool)sendPendingEndVideoMessage:(id)arg1;
- (id)createPendingEndVideoMessage;
- (id)initWithLogCenter:(id)arg1 eventSender:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

