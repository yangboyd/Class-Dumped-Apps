//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SOJUFriendsResponse;

@interface SCSnapchattersFetchDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    unsigned long long _fetchFriends_source;
    long long _fetchFriends_triggerType;
    SOJUFriendsResponse *_handleSoJuFriendsResponse_response;
    unsigned long long _handleSoJuFriendsResponse_source;
    long long _handleSoJuFriendsResponse_triggerType;
}

+ (id)handleSoJuFriendsResponseWithResponse:(id)arg1 source:(unsigned long long)arg2 triggerType:(long long)arg3;
+ (id)fetchFriendsWithSource:(unsigned long long)arg1 triggerType:(long long)arg2;
- (void).cxx_destruct;
- (void)matchFetchFriends:(CDUnknownBlockType)arg1 handleSoJuFriendsResponse:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asHandleSoJuFriendsResponse;
- (id)asFetchFriends;

@end

