//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCCognacTargetingGeoBlacklist, SCCognacTargetingGeoControl, SCCognacTargetingUserControl;

@interface SCCognacTargetingTargetingControl : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCognacTargetingGeoBlacklist *geoBlacklist; // @dynamic geoBlacklist;
@property(retain, nonatomic) SCCognacTargetingGeoControl *geoControl; // @dynamic geoControl;
@property(nonatomic) _Bool hasGeoBlacklist; // @dynamic hasGeoBlacklist;
@property(nonatomic) _Bool hasGeoControl; // @dynamic hasGeoControl;
@property(nonatomic) _Bool hasUserControl; // @dynamic hasUserControl;
@property(retain, nonatomic) SCCognacTargetingUserControl *userControl; // @dynamic userControl;

@end

