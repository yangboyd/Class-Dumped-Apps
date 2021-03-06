//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMMessageStoreChangesObserver-Protocol.h"
#import "TIMStartUpTaskProtocol-Protocol.h"

@class NSString;

@interface TIMOConversationNotifier : NSObject <TIMStartUpTaskProtocol, TIMMessageStoreChangesObserver>
{
}

+ (id)sharedInstance;
+ (long long)startUpOrder;
+ (void)startUp;
- (void)onConversationCleared:(id)arg1;
- (void)onConversationsDeleted:(id)arg1;
- (void)onConversationsUpdated:(id)arg1;
- (void)onConversationsCreated:(id)arg1;
- (void)onMessagesDeleted:(id)arg1 belongingConversationMap:(id)arg2;
- (void)onMessagesUpdated:(id)arg1 belongingConversationMap:(id)arg2;
- (void)onMessagesCreated:(id)arg1 belongingConversationMap:(id)arg2 reason:(id)arg3;
- (id)__conversationWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

