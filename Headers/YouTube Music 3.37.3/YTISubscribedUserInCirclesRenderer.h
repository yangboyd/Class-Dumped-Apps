//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTISubscribedUserInCirclesRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *gplusProfileEndpoint; // @dynamic gplusProfileEndpoint;
@property(nonatomic) _Bool hasGplusProfileEndpoint; // @dynamic hasGplusProfileEndpoint;
@property(nonatomic) _Bool hasPublicName; // @dynamic hasPublicName;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(retain, nonatomic) YTIFormattedString *publicName; // @dynamic publicName;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;

@end

