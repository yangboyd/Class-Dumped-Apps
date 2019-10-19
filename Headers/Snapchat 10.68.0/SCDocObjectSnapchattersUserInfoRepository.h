//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersUserInfoRepository-Protocol.h"

@class NSArray, NSNumber, NSString, SCDocObjectContext, SCSnapchattersBestFriendMetadataObserver, SCSnapchattersDeltaSyncMetadataObserver;
@protocol OS_dispatch_queue, SCSnapchatterUserInfoMutator, SCSnapchatterUserInfoProvider, SCViewedIncomingFriendsTracker;

@interface SCDocObjectSnapchattersUserInfoRepository : NSObject <SCSnapchattersUserInfoRepository>
{
    SCDocObjectContext *_docObjectContext;
    id <SCSnapchatterUserInfoProvider> _userInfoProvider;
    id <SCSnapchatterUserInfoMutator> _userInfoMutator;
    id <SCViewedIncomingFriendsTracker> _incomingFriendsTracker;
    NSObject<OS_dispatch_queue> *_serialLock;
    SCSnapchattersDeltaSyncMetadataObserver *_deltaFriendSyncMetadataObserver;
    SCSnapchattersDeltaSyncMetadataObserver *_deltaIncomingFriendSyncMetadataObserver;
    SCSnapchattersBestFriendMetadataObserver *_bestFriendMetadataObserver;
    long long _deltaFriendSyncMetadataObserverOnceToken;
    long long _deltaIncomingFriendSyncMetadataObserverOnceToken;
    long long _bestFriendMetadataObserverOnceToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAspiringInfluencer;
@property(readonly, nonatomic) NSNumber *incomingFriendsLastViewedTimestamp;
@property(nonatomic) long long storyPrivacy;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, nonatomic) _Bool hasGrantedContactAccessAndPhoneVerified;
@property(nonatomic) _Bool isContactSyncEnabled;
@property(readonly, copy, nonatomic) NSArray *bestFriendsUsernames;
@property(readonly, copy, nonatomic) NSString *deltaIncomingFriendToken;
@property(readonly, copy, nonatomic) NSString *deltaFriendToken;
- (id)initWithDocObjectContext:(id)arg1 userInfoProvider:(id)arg2 userInfoMutator:(id)arg3 incomingFriendsTracker:(id)arg4;

@end

