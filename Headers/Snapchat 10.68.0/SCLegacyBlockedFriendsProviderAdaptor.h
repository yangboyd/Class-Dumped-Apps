//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyBlockedFriendsProvider-Protocol.h"

@class SCLazy;

@interface SCLegacyBlockedFriendsProviderAdaptor : NSObject <SCLegacyBlockedFriendsProvider>
{
    SCLazy *_friends;
}

- (void).cxx_destruct;
- (_Bool)isBlockedForUsername:(id)arg1;
- (id)blockedFriends;
- (id)initWithFriends:(id)arg1;

@end

