//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GRWSAppsFilter, GRWSClient, GRWSGrowthRequestHeader;

@interface GRWALGetAppsListRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GRWSClient *client; // @dynamic client;
@property(retain, nonatomic) GRWSAppsFilter *filter; // @dynamic filter;
@property(nonatomic) _Bool hasClient; // @dynamic hasClient;
@property(nonatomic) _Bool hasFilter; // @dynamic hasFilter;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(retain, nonatomic) GRWSGrowthRequestHeader *header; // @dynamic header;

@end

