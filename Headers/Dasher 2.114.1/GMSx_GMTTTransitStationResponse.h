//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class GMSx_GMTTTransitStation, NSString;

@interface GMSx_GMTTTransitStationResponse : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *ei; // @dynamic ei;
@property(nonatomic) _Bool hasEi; // @dynamic hasEi;
@property(nonatomic) _Bool hasStation; // @dynamic hasStation;
@property(retain, nonatomic) GMSx_GMTTTransitStation *station; // @dynamic station;

@end

