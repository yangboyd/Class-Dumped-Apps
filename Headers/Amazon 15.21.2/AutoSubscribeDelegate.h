//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AIAuthenticationDelegate-Protocol.h"

@class AWPushNotifications, NSString;

@interface AutoSubscribeDelegate : NSObject <AIAuthenticationDelegate>
{
    AWPushNotifications *_pushNotificationsProcessor;
}

@property(nonatomic) __weak AWPushNotifications *pushNotificationsProcessor; // @synthesize pushNotificationsProcessor=_pushNotificationsProcessor;
- (void).cxx_destruct;
- (void)didFailAccessTokenRetrievalWithError:(id)arg1;
- (void)subscribeToTopics:(id)arg1;
- (void)didRetrieveAccessToken:(id)arg1;
- (id)initWithPushNotificationsProcessor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

