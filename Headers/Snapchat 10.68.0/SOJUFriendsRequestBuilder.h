//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUFriendsRequestBuilder : NSObject
{
    NSString *_friendsSyncToken;
    NSNumber *_requestTokenOnlyDeprecated;
    NSString *_addedFriendsSyncToken;
}

+ (id)withJUFriendsRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setAddedFriendsSyncToken:(id)arg1;
- (id)setRequestTokenOnlyDeprecated:(id)arg1;
- (id)setFriendsSyncToken:(id)arg1;
- (id)build;
- (id)setRequestTokenOnlyDeprecatedValue:(_Bool)arg1;

@end

