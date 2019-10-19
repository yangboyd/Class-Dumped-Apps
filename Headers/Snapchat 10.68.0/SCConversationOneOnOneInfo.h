//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCConversationOneOnOneAuth;

@interface SCConversationOneOnOneInfo : NSObject <NSCopying>
{
    _Bool _recipientSupportsCash;
    NSString *_iterToken;
    unsigned long long _messageRetentionInMins;
    SCConversationOneOnOneAuth *_auth;
}

@property(readonly, copy, nonatomic) SCConversationOneOnOneAuth *auth; // @synthesize auth=_auth;
@property(readonly, nonatomic) unsigned long long messageRetentionInMins; // @synthesize messageRetentionInMins=_messageRetentionInMins;
@property(readonly, nonatomic) _Bool recipientSupportsCash; // @synthesize recipientSupportsCash=_recipientSupportsCash;
@property(readonly, copy, nonatomic) NSString *iterToken; // @synthesize iterToken=_iterToken;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIterToken:(id)arg1 recipientSupportsCash:(_Bool)arg2 messageRetentionInMins:(unsigned long long)arg3 auth:(id)arg4;

@end

