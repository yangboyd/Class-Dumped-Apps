//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CloudGameEntranceStructV2, NSString;

@interface CloudGameStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cloudGameId; // @dynamic cloudGameId;
@property(copy, nonatomic) NSString *downloadURL; // @dynamic downloadURL;
@property(retain, nonatomic) CloudGameEntranceStructV2 *entranceInfo; // @dynamic entranceInfo;
@property(copy, nonatomic) NSString *extra; // @dynamic extra;
@property(nonatomic) _Bool hasCloudGameId; // @dynamic hasCloudGameId;
@property(nonatomic) _Bool hasDownloadURL; // @dynamic hasDownloadURL;
@property(nonatomic) _Bool hasEntranceInfo; // @dynamic hasEntranceInfo;
@property(nonatomic) _Bool hasExtra; // @dynamic hasExtra;

@end

