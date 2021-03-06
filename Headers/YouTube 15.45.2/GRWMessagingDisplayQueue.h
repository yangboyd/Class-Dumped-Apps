//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRWMessagingCache, NSMutableDictionary;
@protocol GRWMessagingDisplayQueueDelegate, OS_dispatch_queue;

@interface GRWMessagingDisplayQueue : NSObject
{
    GRWMessagingCache *_messageCache;
    NSMutableDictionary *_displayQueueDictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id <GRWMessagingDisplayQueueDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GRWMessagingDisplayQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableDictionary *displayQueueDictionary; // @synthesize displayQueueDictionary=_displayQueueDictionary;
@property(nonatomic) __weak GRWMessagingCache *messageCache; // @synthesize messageCache=_messageCache;
- (void)handleWillResignActiveNotification:(id)arg1;
- (void)restoreDisplayQueueFromUserDefaults;
- (void)saveDisplayQueueToUserDefaults;
- (_Bool)messageIsQueued:(id)arg1 forUserID:(id)arg2;
- (id)queuedMessageForUserID:(id)arg1;
- (void)removeMessagesFromQueueForUserID:(id)arg1;
- (void)removeMessageFromQueue:(id)arg1 forUserID:(id)arg2;
- (void)addMessagesToQueue:(id)arg1 forUserID:(id)arg2;
- (void)setup;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 messagingCache:(id)arg2;

@end

