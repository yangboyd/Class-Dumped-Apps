//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIDataSyncPath;

@interface YTIContactMenuEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIDataSyncPath *contactDataSyncPath; // @dynamic contactDataSyncPath;
@property(copy, nonatomic) NSString *contactId; // @dynamic contactId;
@property(nonatomic) _Bool hasContactDataSyncPath; // @dynamic hasContactDataSyncPath;
@property(nonatomic) _Bool hasContactId; // @dynamic hasContactId;

@end

