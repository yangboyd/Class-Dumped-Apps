//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface AbuseModeration : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(copy, nonatomic) NSString *banReason; // @dynamic banReason;
@property(nonatomic) long long banUserExpiration; // @dynamic banUserExpiration;
@property(copy, nonatomic) NSString *banUserId; // @dynamic banUserId;
@property(nonatomic) long long banUserTimestamp; // @dynamic banUserTimestamp;
@property(copy, nonatomic) NSString *banUsername; // @dynamic banUsername;
@property(nonatomic) long long currentViewCount; // @dynamic currentViewCount;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *dynamicStoryId; // @dynamic dynamicStoryId;
@property(copy, nonatomic) NSString *lensId; // @dynamic lensId;
@property(nonatomic) int modToolSource; // @dynamic modToolSource;
@property(copy, nonatomic) NSString *moderator; // @dynamic moderator;
@property(nonatomic) double openNsfwScore; // @dynamic openNsfwScore;
@property(nonatomic) int reason; // @dynamic reason;
@property(copy, nonatomic) NSString *reporterUserId; // @dynamic reporterUserId;
@property(copy, nonatomic) NSString *reporterUsername; // @dynamic reporterUsername;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;
@property(copy, nonatomic) NSString *snapUserId; // @dynamic snapUserId;
@property(copy, nonatomic) NSString *snapUsername; // @dynamic snapUsername;
@property(nonatomic) int source; // @dynamic source;
@property(copy, nonatomic) NSString *storyId; // @dynamic storyId;
@property(copy, nonatomic) NSString *suppressedUserId; // @dynamic suppressedUserId;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;

@end

