//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDDuration, GMSx_GMTTDTime;

@interface GMSx_GMTTTransitDepartureList_TransitDepartureFrequencyInfo : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMTTDTime *end; // @dynamic end;
@property(nonatomic) _Bool hasEnd; // @dynamic hasEnd;
@property(nonatomic) _Bool hasPeriod; // @dynamic hasPeriod;
@property(nonatomic) _Bool hasStart; // @dynamic hasStart;
@property(retain, nonatomic) GMSx_GMTTDDuration *period; // @dynamic period;
@property(retain, nonatomic) GMSx_GMTTDTime *start; // @dynamic start;

@end

