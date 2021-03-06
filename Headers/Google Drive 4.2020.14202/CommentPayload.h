//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class CommentPost, NSMutableArray, NSString;

@interface CommentPayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long commentCreationTime; // @dynamic commentCreationTime;
@property(copy, nonatomic) NSString *commentId; // @dynamic commentId;
@property(nonatomic) long long commentLastUpdatedTime; // @dynamic commentLastUpdatedTime;
@property(copy, nonatomic) NSString *commentURL; // @dynamic commentURL;
@property(copy, nonatomic) NSString *driveId; // @dynamic driveId;
@property(nonatomic) _Bool hasCommentCreationTime; // @dynamic hasCommentCreationTime;
@property(nonatomic) _Bool hasCommentId; // @dynamic hasCommentId;
@property(nonatomic) _Bool hasCommentLastUpdatedTime; // @dynamic hasCommentLastUpdatedTime;
@property(nonatomic) _Bool hasCommentURL; // @dynamic hasCommentURL;
@property(nonatomic) _Bool hasDriveId; // @dynamic hasDriveId;
@property(nonatomic) _Bool hasHeadPost; // @dynamic hasHeadPost;
@property(nonatomic) _Bool hasIsAnonymous; // @dynamic hasIsAnonymous;
@property(nonatomic) _Bool hasSenderId; // @dynamic hasSenderId;
@property(nonatomic) _Bool hasTimestampMs; // @dynamic hasTimestampMs;
@property(retain, nonatomic) CommentPost *headPost; // @dynamic headPost;
@property(nonatomic) _Bool isAnonymous; // @dynamic isAnonymous;
@property(retain, nonatomic) NSMutableArray *replyArray; // @dynamic replyArray;
@property(readonly, nonatomic) unsigned long long replyArray_Count; // @dynamic replyArray_Count;
@property(nonatomic) long long senderId; // @dynamic senderId;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;

@end

