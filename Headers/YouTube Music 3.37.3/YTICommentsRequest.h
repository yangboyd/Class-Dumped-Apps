//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTICommentRequestOptions, YTIInnerTubeContext;

@interface YTICommentsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool channelDiscussionOnly; // @dynamic channelDiscussionOnly;
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(retain, nonatomic) NSMutableArray *commentIdsArray; // @dynamic commentIdsArray;
@property(readonly, nonatomic) unsigned long long commentIdsArray_Count; // @dynamic commentIdsArray_Count;
@property(retain, nonatomic) YTICommentRequestOptions *commentOptions; // @dynamic commentOptions;
@property(nonatomic) int commentType; // @dynamic commentType;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *continuation; // @dynamic continuation;
@property(nonatomic) _Bool hasChannelDiscussionOnly; // @dynamic hasChannelDiscussionOnly;
@property(nonatomic) _Bool hasChannelId; // @dynamic hasChannelId;
@property(nonatomic) _Bool hasCommentOptions; // @dynamic hasCommentOptions;
@property(nonatomic) _Bool hasCommentType; // @dynamic hasCommentType;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasMaxReplies; // @dynamic hasMaxReplies;
@property(nonatomic) _Bool hasMaxThreads; // @dynamic hasMaxThreads;
@property(nonatomic) _Bool hasModerationState; // @dynamic hasModerationState;
@property(nonatomic) _Bool hasNotableOnly; // @dynamic hasNotableOnly;
@property(nonatomic) _Bool hasSearchQuery; // @dynamic hasSearchQuery;
@property(nonatomic) _Bool hasSearchQueryForHeldForReviewTab; // @dynamic hasSearchQueryForHeldForReviewTab;
@property(nonatomic) _Bool hasSearchQueryForSpamTab; // @dynamic hasSearchQueryForSpamTab;
@property(nonatomic) _Bool hasSortOrder; // @dynamic hasSortOrder;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) unsigned int maxReplies; // @dynamic maxReplies;
@property(nonatomic) unsigned int maxThreads; // @dynamic maxThreads;
@property(nonatomic) int moderationState; // @dynamic moderationState;
@property(nonatomic) _Bool notableOnly; // @dynamic notableOnly;
@property(copy, nonatomic) NSString *searchQuery; // @dynamic searchQuery;
@property(copy, nonatomic) NSString *searchQueryForHeldForReviewTab; // @dynamic searchQueryForHeldForReviewTab;
@property(copy, nonatomic) NSString *searchQueryForSpamTab; // @dynamic searchQueryForSpamTab;
@property(nonatomic) int sortOrder; // @dynamic sortOrder;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

