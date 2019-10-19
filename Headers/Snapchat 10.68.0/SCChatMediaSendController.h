//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSDate, NSString, SCChatMediaContent, SCPreviewSnapSenderConfiguration, SCSendToTransitionProvider, SCUserSession, UIImage, UIViewController;

@interface SCChatMediaSendController : NSObject <SCSendToDelegate, SCSendToNavigationDelegate, SCTraceEnabled>
{
    SCUserSession *_userSession;
    SCSendToTransitionProvider *_transitionProvider;
    UIViewController *_presentingViewController;
    SCChatMediaContent *_content;
    UIImage *_image;
    NSString *_senderUsername;
    _Bool _isGroupMessage;
    NSString *_ownerId;
    NSDate *_creationDate;
    unsigned long long _sendSource;
    SCPreviewSnapSenderConfiguration *_snapSenderConfiguration;
}

- (void).cxx_destruct;
- (void)_logChatMediaForwardWithSendToRecipients:(id)arg1 storiesPostingConfig:(id)arg2 mischiefs:(id)arg3;
- (void)dismissSendViewController:(id)arg1;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 mischiefs:(id)arg5 businessProfiles:(id)arg6 appStories:(id)arg7 gallery:(_Bool)arg8 inviteRecipientShown:(long long)arg9 additionalText:(id)arg10;
- (void)_presentChatMediaContent:(id)arg1 senderUsername:(id)arg2 isGroupMessage:(_Bool)arg3 ownerId:(id)arg4 selectRecipientsConfiguration:(id)arg5;
- (void)_unarchiveChatMediaContent:(id)arg1 operationQueue:(id)arg2;
- (void)_downloadChatMediaContentWithConversationId:(id)arg1 messageId:(id)arg2 messageType:(long long)arg3 senderUsername:(id)arg4 chatMediaContent:(id)arg5 operationQueue:(id)arg6;
- (void)presentSendViewControllerWithConversationId:(id)arg1 messageId:(id)arg2 messageType:(long long)arg3 senderUsername:(id)arg4 isGroupMessage:(_Bool)arg5 ownerId:(id)arg6 chatMediaContent:(id)arg7 creationDate:(id)arg8 sendSource:(unsigned long long)arg9 selectRecipientsConfiguration:(id)arg10;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

