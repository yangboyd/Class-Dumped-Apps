//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, ReadReceiptState, SCSCOREUUID;

@interface SnapReadReceipt : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int friendLinkState; // @dynamic friendLinkState;
@property(nonatomic) _Bool hasReadReceiptState; // @dynamic hasReadReceiptState;
@property(nonatomic) _Bool hasSnapOwnerId; // @dynamic hasSnapOwnerId;
@property(nonatomic) _Bool hasViewerUserId; // @dynamic hasViewerUserId;
@property(retain, nonatomic) ReadReceiptState *readReceiptState; // @dynamic readReceiptState;
@property(nonatomic) long long snapExpirationTimeMs; // @dynamic snapExpirationTimeMs;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;
@property(retain, nonatomic) SCSCOREUUID *snapOwnerId; // @dynamic snapOwnerId;
@property(nonatomic) int storyType; // @dynamic storyType;
@property(nonatomic) long long viewTimeMs; // @dynamic viewTimeMs;
@property(retain, nonatomic) SCSCOREUUID *viewerUserId; // @dynamic viewerUserId;

@end

