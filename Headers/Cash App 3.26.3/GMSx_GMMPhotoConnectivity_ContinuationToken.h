//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTSHLatLngRectangle, NSString;

@interface GMSx_GMMPhotoConnectivity_ContinuationToken : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRegion; // @dynamic hasRegion;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(retain, nonatomic) GMSx_GMTTSHLatLngRectangle *region; // @dynamic region;
@property(copy, nonatomic) NSString *token; // @dynamic token;

@end

