//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageViewModelFactory-Protocol.h"

@class NSString, SCUserSession;

@interface SCChatMessageViewModelFactoryV3 : NSObject <SCChatMessageViewModelFactory>
{
    SCUserSession *_userSession;
}

@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (_Bool)_messageIsSentByUser:(id)arg1;
- (id)_senderColorForMessage:(id)arg1 inConversation:(id)arg2 group:(id)arg3;
- (Class)_getPayloadViewModelClassForMessage:(id)arg1;
- (void)_updateCornersBasedOnPreviousViewModel:(id)arg1 previousViewModel:(id)arg2 message:(id)arg3;
- (id)_createSingleMessageViewModelWithViewModelProps:(id)arg1 messageMetadata:(id)arg2 message:(id)arg3 viewModelClass:(Class)arg4 previousViewModel:(id)arg5;
- (id)_createCompositeMessageViewModelWithViewModelProps:(id)arg1 messageMetadata:(id)arg2 message:(id)arg3 viewModelClass:(Class)arg4 previousViewModel:(id)arg5;
- (id)_updatePreviousViewModelForMessage:(id)arg1 previousViewModel:(id)arg2 messageMetadata:(id)arg3 viewModelProps:(id)arg4;
- (_Bool)_shouldUpdateViewModelForClass:(Class)arg1 previousViewModel:(id)arg2 messageProps:(id)arg3 message:(id)arg4 config:(id)arg5;
- (Class)_getViewModelClassForMessage:(id)arg1;
- (id)_createViewModelPropsWithConversation:(id)arg1 group:(id)arg2 message:(id)arg3 previousViewModel:(id)arg4 config:(id)arg5 showsDateHeader:(_Bool)arg6 showsBelowTheFold:(_Bool)arg7 showsTimestamp:(_Bool)arg8 metadata:(id)arg9 cornerMask:(unsigned long long)arg10 cognacMessageProperty:(id)arg11 miniThumbnailImages:(id)arg12;
- (id)_viewModelForMessage:(id)arg1 withConversation:(id)arg2 messageMetadata:(id)arg3 group:(id)arg4 config:(id)arg5 previousViewModel:(id)arg6 showsDateHeader:(_Bool)arg7 showsBelowTheFold:(_Bool)arg8 showsTimestamp:(_Bool)arg9 cornerMask:(unsigned long long)arg10 cognacMessageProperty:(id)arg11 miniThumbnailImages:(id)arg12;
- (id)viewModelForPendingSnaps:(long long)arg1 pendingChats:(long long)arg2 conversationId:(id)arg3;
- (id)viewModelForPlaceholder;
- (id)viewModelForLoading:(long long)arg1;
- (id)viewModelForEmptyChatConversation:(id)arg1;
- (id)viewModelForToday;
- (id)viewModelForMessage:(id)arg1 messageGroup:(id)arg2 withConversation:(id)arg3 messageMetadata:(id)arg4 group:(id)arg5 currentUsername:(id)arg6 currentUserId:(id)arg7 config:(id)arg8 previousViewModel:(id)arg9 parsingData:(id)arg10 isFailedAtLeastOnce:(_Bool)arg11 messageAnimationData:(id)arg12 miniThumbnailImages:(id)arg13 snapchattersData:(id)arg14 isGroupInviteChat:(_Bool)arg15;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

