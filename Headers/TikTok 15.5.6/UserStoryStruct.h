//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, UrlStruct, UserStruct;

@interface UserStoryStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *allStoryListArray; // @dynamic allStoryListArray;
@property(readonly, nonatomic) unsigned long long allStoryListArray_Count; // @dynamic allStoryListArray_Count;
@property(nonatomic) long long curPos; // @dynamic curPos;
@property(nonatomic) int friendType; // @dynamic friendType;
@property(nonatomic) _Bool hasCurPos; // @dynamic hasCurPos;
@property(nonatomic) _Bool hasFriendType; // @dynamic hasFriendType;
@property(nonatomic) _Bool hasHasMore_p; // @dynamic hasHasMore_p;
@property(nonatomic) _Bool hasLabelLarge; // @dynamic hasLabelLarge;
@property(nonatomic) _Bool hasLabelThumb; // @dynamic hasLabelThumb;
@property(nonatomic) _Bool hasMaxCursor; // @dynamic hasMaxCursor;
@property(nonatomic) _Bool hasMinCursor; // @dynamic hasMinCursor;
@property(nonatomic) int hasMore_p; // @dynamic hasMore_p;
@property(nonatomic) _Bool hasOffset; // @dynamic hasOffset;
@property(nonatomic) _Bool hasReadFlag; // @dynamic hasReadFlag;
@property(nonatomic) _Bool hasRecommendReason; // @dynamic hasRecommendReason;
@property(nonatomic) _Bool hasTotalCount; // @dynamic hasTotalCount;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(retain, nonatomic) UrlStruct *labelLarge; // @dynamic labelLarge;
@property(retain, nonatomic) UrlStruct *labelThumb; // @dynamic labelThumb;
@property(nonatomic) long long maxCursor; // @dynamic maxCursor;
@property(nonatomic) long long minCursor; // @dynamic minCursor;
@property(nonatomic) long long offset; // @dynamic offset;
@property(nonatomic) int readFlag; // @dynamic readFlag;
@property(copy, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(retain, nonatomic) NSMutableArray *storyListArray; // @dynamic storyListArray;
@property(readonly, nonatomic) unsigned long long storyListArray_Count; // @dynamic storyListArray_Count;
@property(nonatomic) long long totalCount; // @dynamic totalCount;
@property(retain, nonatomic) UserStruct *user; // @dynamic user;

@end

