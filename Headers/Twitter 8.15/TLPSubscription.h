//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, TLPSubscriptionDelegate;

@interface TLPSubscription : NSObject
{
    NSObject<OS_dispatch_queue> *_eventDelegateQueue;
    long long _eventType;
    NSString *_eventTopic;
    id <TLPSubscriptionDelegate> _eventDelegate;
    long long _state;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak id <TLPSubscriptionDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(readonly, copy, nonatomic) NSString *eventTopic; // @synthesize eventTopic=_eventTopic;
@property(readonly, nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (void)didChangeState:(long long)arg1;
- (void)distributeEvent:(id)arg1;
- (id)initWithTopic:(id)arg1 delegate:(id)arg2;
- (id)initWithEventType:(long long)arg1 topicID:(id)arg2 delegate:(id)arg3;

@end

