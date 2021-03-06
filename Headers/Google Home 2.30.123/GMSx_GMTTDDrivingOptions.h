//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDTrafficReportOptions, NSMutableArray;

@interface GMSx_GMTTDDrivingOptions : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool avoidHighways; // @dynamic avoidHighways;
@property(nonatomic) _Bool avoidTolls; // @dynamic avoidTolls;
@property(nonatomic) _Bool hasAvoidHighways; // @dynamic hasAvoidHighways;
@property(nonatomic) _Bool hasAvoidTolls; // @dynamic hasAvoidTolls;
@property(nonatomic) _Bool hasIgnoreAnchoredTime; // @dynamic hasIgnoreAnchoredTime;
@property(nonatomic) _Bool hasIncludeElevationProfile; // @dynamic hasIncludeElevationProfile;
@property(nonatomic) _Bool hasIncludePassengerSafetyDetails; // @dynamic hasIncludePassengerSafetyDetails;
@property(nonatomic) _Bool hasIncludeSuspectedRoadClosures; // @dynamic hasIncludeSuspectedRoadClosures;
@property(nonatomic) _Bool hasIncludeTrafficData; // @dynamic hasIncludeTrafficData;
@property(nonatomic) _Bool hasIncludeTrafficIncidentNoticeAttributions; // @dynamic hasIncludeTrafficIncidentNoticeAttributions;
@property(nonatomic) _Bool hasIncludeTrafficIncidentNotices; // @dynamic hasIncludeTrafficIncidentNotices;
@property(nonatomic) _Bool hasIsIndashRequest; // @dynamic hasIsIndashRequest;
@property(nonatomic) _Bool hasLicensePlateLastDigit; // @dynamic hasLicensePlateLastDigit;
@property(nonatomic) _Bool hasTrafficReportOptions; // @dynamic hasTrafficReportOptions;
@property(nonatomic) _Bool ignoreAnchoredTime; // @dynamic ignoreAnchoredTime;
@property(nonatomic) _Bool includeElevationProfile; // @dynamic includeElevationProfile;
@property(nonatomic) _Bool includePassengerSafetyDetails; // @dynamic includePassengerSafetyDetails;
@property(nonatomic) _Bool includeSuspectedRoadClosures; // @dynamic includeSuspectedRoadClosures;
@property(nonatomic) _Bool includeTrafficData; // @dynamic includeTrafficData;
@property(nonatomic) _Bool includeTrafficIncidentNoticeAttributions; // @dynamic includeTrafficIncidentNoticeAttributions;
@property(nonatomic) _Bool includeTrafficIncidentNotices; // @dynamic includeTrafficIncidentNotices;
@property(nonatomic) _Bool isIndashRequest; // @dynamic isIndashRequest;
@property(nonatomic) int licensePlateLastDigit; // @dynamic licensePlateLastDigit;
@property(retain, nonatomic) NSMutableArray *licensePlateRestrictionArray; // @dynamic licensePlateRestrictionArray;
@property(readonly, nonatomic) unsigned long long licensePlateRestrictionArray_Count; // @dynamic licensePlateRestrictionArray_Count;
@property(retain, nonatomic) NSMutableArray *supportedLicensePlateCityArray; // @dynamic supportedLicensePlateCityArray;
@property(readonly, nonatomic) unsigned long long supportedLicensePlateCityArray_Count; // @dynamic supportedLicensePlateCityArray_Count;
@property(retain, nonatomic) GMSx_GMTTDTrafficReportOptions *trafficReportOptions; // @dynamic trafficReportOptions;

@end

