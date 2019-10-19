//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString;
@protocol SCChatMessageActionHandling, SCMediaSendTaskManager;

@interface SCFriendsFeedRetryActionHandler : NSObject <SCActionHandling>
{
    id <SCChatMessageActionHandling> _chatMessageActionHandler;
    id <SCMediaSendTaskManager> _mediaSendTaskManager;
}

- (void).cxx_destruct;
- (_Bool)_retryForMultiRecipientsIfPossible:(id)arg1;
- (_Bool)_retryForConversationIfPossible:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithChatMessageActionHandler:(id)arg1 mediaSendTaskManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

