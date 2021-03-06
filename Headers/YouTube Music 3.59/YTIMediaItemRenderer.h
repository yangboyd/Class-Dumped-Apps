//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand, YTIMediaDescription, YTIMediaItemIdentifier;

@interface YTIMediaItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsPlayable; // @dynamic hasIsPlayable;
@property(nonatomic) _Bool hasMediaDescription; // @dynamic hasMediaDescription;
@property(nonatomic) _Bool hasMediaId; // @dynamic hasMediaId;
@property(nonatomic) _Bool hasMediaInfo; // @dynamic hasMediaInfo;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool isPlayable; // @dynamic isPlayable;
@property(retain, nonatomic) YTIMediaDescription *mediaDescription; // @dynamic mediaDescription;
@property(copy, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(retain, nonatomic) YTIMediaItemIdentifier *mediaInfo; // @dynamic mediaInfo;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;

@end

