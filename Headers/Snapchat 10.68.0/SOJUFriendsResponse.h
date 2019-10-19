//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUFriendsResponse-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SOJUFriendsResponse : NSObject <SOJUFriendsResponse>
{
    NSArray *_friends;
    NSString *_friendsSyncToken;
    NSString *_friendsSyncType;
    NSArray *_addedFriends;
    NSArray *_bests;
    NSDictionary *_extraFriendmojiMutableDict;
    NSDictionary *_extraFriendmojiReadOnlyDict;
    NSString *_addedFriendsSyncToken;
    NSString *_addedFriendsSyncType;
    NSArray *_partialFriends;
    NSArray *_bestsUserIds;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *bestsUserIds; // @synthesize bestsUserIds=_bestsUserIds;
@property(readonly, copy, nonatomic) NSArray *partialFriends; // @synthesize partialFriends=_partialFriends;
@property(readonly, copy, nonatomic) NSString *addedFriendsSyncType; // @synthesize addedFriendsSyncType=_addedFriendsSyncType;
@property(readonly, copy, nonatomic) NSString *addedFriendsSyncToken; // @synthesize addedFriendsSyncToken=_addedFriendsSyncToken;
@property(readonly, copy, nonatomic) NSDictionary *extraFriendmojiReadOnlyDict; // @synthesize extraFriendmojiReadOnlyDict=_extraFriendmojiReadOnlyDict;
@property(readonly, copy, nonatomic) NSDictionary *extraFriendmojiMutableDict; // @synthesize extraFriendmojiMutableDict=_extraFriendmojiMutableDict;
@property(readonly, copy, nonatomic) NSArray *bests; // @synthesize bests=_bests;
@property(readonly, copy, nonatomic) NSArray *addedFriends; // @synthesize addedFriends=_addedFriends;
@property(readonly, copy, nonatomic) NSString *friendsSyncType; // @synthesize friendsSyncType=_friendsSyncType;
@property(readonly, copy, nonatomic) NSString *friendsSyncToken; // @synthesize friendsSyncToken=_friendsSyncToken;
@property(readonly, copy, nonatomic) NSArray *friends; // @synthesize friends=_friends;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFriends:(id)arg1 friendsSyncToken:(id)arg2 friendsSyncType:(id)arg3 addedFriends:(id)arg4 bests:(id)arg5 extraFriendmojiMutableDict:(id)arg6 extraFriendmojiReadOnlyDict:(id)arg7 addedFriendsSyncToken:(id)arg8 addedFriendsSyncType:(id)arg9 partialFriends:(id)arg10 bestsUserIds:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)addedFriendsSyncTypeEnum;
- (long long)friendsSyncTypeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

