//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCChatActiveConversationDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_setActiveConversation_conversationId;
    _Bool _setActiveConversation_isGroup;
    NSString *_resumeActiveConversation_conversationId;
    _Bool _resumeActiveConversation_isGroup;
    NSString *_unsetActiveConversation_conversationId;
}

+ (id)unsetActiveConversationWithConversationId:(id)arg1;
+ (id)setActiveConversationWithConversationId:(id)arg1 isGroup:(_Bool)arg2;
+ (id)resumeActiveConversationWithConversationId:(id)arg1 isGroup:(_Bool)arg2;
- (void).cxx_destruct;
- (void)matchSetActiveConversation:(CDUnknownBlockType)arg1 resumeActiveConversation:(CDUnknownBlockType)arg2 unsetActiveConversation:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

