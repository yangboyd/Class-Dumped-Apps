//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, SCSSMLongformVideoInterval;

@interface SCSSMLongformVideoAd : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *adPlacementMetadata; // @dynamic adPlacementMetadata;
@property(nonatomic) _Bool hasVideoInterval; // @dynamic hasVideoInterval;
@property(retain, nonatomic) SCSSMLongformVideoInterval *videoInterval; // @dynamic videoInterval;

@end

