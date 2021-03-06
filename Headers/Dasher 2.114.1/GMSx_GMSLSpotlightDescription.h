//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class GMSx_GMSLSearchParams, GMSx_GMTTEntity, GMSx_GMTTLatLng, GMSx_GPBUInt32Array, NSString;

@interface GMSx_GMSLSpotlightDescription : GMSx_GPBMessage
{
}

+ (id)descriptor;
- (unsigned long long)hash;

// Remaining properties
@property(retain, nonatomic) GMSx_GMSLSpotlightDescription *context; // @dynamic context;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) GMSx_GMTTEntity *entity; // @dynamic entity;
@property(retain, nonatomic) GMSx_GPBUInt32Array *experimentIdArray; // @dynamic experimentIdArray;
@property(readonly, nonatomic) unsigned long long experimentIdArray_Count; // @dynamic experimentIdArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasEntity; // @dynamic hasEntity;
@property(nonatomic) _Bool hasIsNavIntent; // @dynamic hasIsNavIntent;
@property(nonatomic) _Bool hasSearchParams; // @dynamic hasSearchParams;
@property(nonatomic) _Bool hasSelectedIndoorLevelId; // @dynamic hasSelectedIndoorLevelId;
@property(nonatomic) _Bool hasUserLocation; // @dynamic hasUserLocation;
@property(nonatomic) _Bool isNavIntent; // @dynamic isNavIntent;
@property(retain, nonatomic) GMSx_GMSLSearchParams *searchParams; // @dynamic searchParams;
@property(copy, nonatomic) NSString *selectedIndoorLevelId; // @dynamic selectedIndoorLevelId;
@property(retain, nonatomic) GMSx_GMTTLatLng *userLocation; // @dynamic userLocation;

@end

