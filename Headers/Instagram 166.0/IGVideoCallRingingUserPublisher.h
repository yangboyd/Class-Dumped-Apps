//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectDataSubscriptionPublishing-Protocol.h>

@class IGVideoCallParticipantsStateServiceUpdate, NSMutableSet, NSString;
@protocol IGDirectDataSubscriptionPublishingDelegate;

@interface IGVideoCallRingingUserPublisher : NSObject <IGDirectDataSubscriptionPublishing>
{
    NSMutableSet *_rungUserKeys;
    id <IGDirectDataSubscriptionPublishingDelegate> _delegate;
    IGVideoCallParticipantsStateServiceUpdate *_state;
}

- (void).cxx_destruct;
- (id)publisherInputsForDebugging;
- (void)stopListeningForUpdates;
- (void)startListeningForUpdatesWithDelegate:(id)arg1;
- (void)notifyUserStartedRinging:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

