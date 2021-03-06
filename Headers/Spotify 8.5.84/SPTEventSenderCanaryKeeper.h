//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol SPTEventSender, SPTRemoteConfigurationResolver;

@interface SPTEventSenderCanaryKeeper : NSObject
{
    _Bool _shouldSendAuthenticatedEvents;
    id <SPTRemoteConfigurationResolver> _remoteConfigResolver;
    id <SPTEventSender> _eventSender;
    long long _batchSize;
    long long _repeatInterval;
    NSTimer *_repeatTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *repeatTimer; // @synthesize repeatTimer=_repeatTimer;
@property(nonatomic) long long repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) __weak id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(nonatomic) _Bool shouldSendAuthenticatedEvents; // @synthesize shouldSendAuthenticatedEvents=_shouldSendAuthenticatedEvents;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigResolver; // @synthesize remoteConfigResolver=_remoteConfigResolver;
- (void)sendCanaryBatch:(id)arg1;
- (void)triggerCanaryEventBatchesIfRemoteConfigEnabled;
- (void)dealloc;
- (id)initWithEventSender:(id)arg1;

@end

