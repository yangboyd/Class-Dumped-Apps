//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCUnifiedProfileNavigateToChatActionModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_friend_username;
    NSString *_friend_chatDeepLinkURLPath;
    NSString *_group_groupId;
    NSString *_group_chatDeepLinkURLPath;
}

+ (id)groupWithGroupId:(id)arg1 chatDeepLinkURLPath:(id)arg2;
+ (id)friendWithUsername:(id)arg1 chatDeepLinkURLPath:(id)arg2;
- (void).cxx_destruct;
- (void)matchFriend:(CDUnknownBlockType)arg1 group:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

