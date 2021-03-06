//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTEventListener-Protocol.h"

@class NSNumber, NSString;
@protocol JBTBigTopSyncClientAPI, JBTItemList, NotificationAggregator;

@interface ImapLocalNotificationProducer : NSObject <JBTEventListener>
{
    id <JBTBigTopSyncClientAPI> _client;
    id <NotificationAggregator> _delegate;
    id <JBTItemList> _items;
    NSString *_email;
    _Bool _stopped;
}

+ (id)producerWithClient:(id)arg1 email:(id)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
- (long long)mostRecentItemReceivedTimeMs;
- (id)syncFrequencyAnnotations;
- (id)lastSeenTimestampKey;
@property(retain, nonatomic) NSNumber *lastSeenTimestamp;
- (id)categoryIdentifierForConversation:(id)arg1;
- (void)generateNotificationForConversation:(id)arg1 snippet:(id)arg2 accountID:(id)arg3;
- (void)postNotificationsForNewUnreadItemsShowingEmptySnippets:(_Bool)arg1;
- (_Bool)shouldPostNotificationsForNewUnreadItems;
- (void)maybePostUnreadNotificationsShowingEmptySnippets:(_Bool)arg1;
- (void)onEventWithJBTEvent:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)stop;
- (id)initWithClient:(id)arg1 email:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

