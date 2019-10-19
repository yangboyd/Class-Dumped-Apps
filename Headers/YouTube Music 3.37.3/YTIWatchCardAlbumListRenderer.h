//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString;

@interface YTIWatchCardAlbumListRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *albumsArray; // @dynamic albumsArray;
@property(readonly, nonatomic) unsigned long long albumsArray_Count; // @dynamic albumsArray_Count;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasViewAllEndpoint; // @dynamic hasViewAllEndpoint;
@property(nonatomic) _Bool hasViewAllText; // @dynamic hasViewAllText;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTICommand *viewAllEndpoint; // @dynamic viewAllEndpoint;
@property(retain, nonatomic) YTIFormattedString *viewAllText; // @dynamic viewAllText;

@end

