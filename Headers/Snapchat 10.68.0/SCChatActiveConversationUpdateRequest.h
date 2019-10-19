//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCChatActiveConversationData;

@interface SCChatActiveConversationUpdateRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCChatActiveConversationData *_success_activeConversationData;
    NSString *_success_token;
    NSString *_failure_conversationId;
    NSString *_failure_token;
}

+ (id)successWithActiveConversationData:(id)arg1 token:(id)arg2;
+ (id)failureWithConversationId:(id)arg1 token:(id)arg2;
- (void).cxx_destruct;
- (void)matchSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

