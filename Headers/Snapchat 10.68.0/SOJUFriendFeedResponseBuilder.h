//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SOJUChatFeedResponse, SOJUFriendFeedRankingMetadata, SOJUFriendFeedResponseDebugInfo, SOJUFriendFeedUserSignals, SOJUStoriesResponse;

@interface SOJUFriendFeedResponseBuilder : NSObject
{
    SOJUChatFeedResponse *_chatFeedResponse;
    SOJUStoriesResponse *_storyFeedResponse;
    NSArray *_feedItems;
    SOJUFriendFeedRankingMetadata *_rankingMetadata;
    NSNumber *_creationTimestamp;
    NSString *_sessionId;
    NSString *_requestId;
    SOJUFriendFeedResponseDebugInfo *_debugInfo;
    NSNumber *_forceFullSyncFeedItems;
    SOJUFriendFeedUserSignals *_userSignals;
}

+ (id)withJUFriendFeedResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setUserSignals:(id)arg1;
- (id)setForceFullSyncFeedItems:(id)arg1;
- (id)setDebugInfo:(id)arg1;
- (id)setRequestId:(id)arg1;
- (id)setSessionId:(id)arg1;
- (id)setCreationTimestamp:(id)arg1;
- (id)setRankingMetadata:(id)arg1;
- (id)setFeedItems:(id)arg1;
- (id)setStoryFeedResponse:(id)arg1;
- (id)setChatFeedResponse:(id)arg1;
- (id)build;
- (id)setForceFullSyncFeedItemsValue:(_Bool)arg1;
- (id)setCreationTimestampValue:(long long)arg1;

@end

