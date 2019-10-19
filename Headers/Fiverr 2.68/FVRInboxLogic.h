//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FVRAttachmentService, FVRChatService, FVRConversationItem, FVRMessageItem, FVRUserService, NSData, NSString;

@interface FVRInboxLogic : NSObject
{
    int _totalConversations;
    FVRMessageItem *_retryMessage;
    NSString *_currentAttachmentId;
    NSData *_currentAttachment;
    FVRConversationItem *_currentConversation;
    long long _currentAttachmentType;
    FVRAttachmentService *_attachmentService;
    FVRChatService *_chatService;
    FVRUserService *_userService;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FVRUserService *userService; // @synthesize userService=_userService;
@property(retain, nonatomic) FVRChatService *chatService; // @synthesize chatService=_chatService;
@property(retain, nonatomic) FVRAttachmentService *attachmentService; // @synthesize attachmentService=_attachmentService;
@property(nonatomic) long long currentAttachmentType; // @synthesize currentAttachmentType=_currentAttachmentType;
@property(retain, nonatomic) FVRConversationItem *currentConversation; // @synthesize currentConversation=_currentConversation;
@property(retain, nonatomic) NSData *currentAttachment; // @synthesize currentAttachment=_currentAttachment;
@property(nonatomic) int totalConversations; // @synthesize totalConversations=_totalConversations;
@property(retain, nonatomic) NSString *currentAttachmentId; // @synthesize currentAttachmentId=_currentAttachmentId;
@property(retain, nonatomic) FVRMessageItem *retryMessage; // @synthesize retryMessage=_retryMessage;
- (void).cxx_destruct;
- (void)getUserQuickResponsesWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)sendAttachment:(id)arg1 type:(long long)arg2 fileName:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)sendMessage:(id)arg1 orderId:(id)arg2 gigId:(id)arg3 to:(id)arg4 attachment_ids:(id)arg5 messageFormat:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)getConversationForContact:(id)arg1 pageNumber:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)resetCurrentAttachments;
- (id)init;

@end

