//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class Locale, NSMutableArray, NSString;

@interface S3UserInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *adaptationId; // @dynamic adaptationId;
@property(retain, nonatomic) NSMutableArray *additionalLanguagesArray; // @dynamic additionalLanguagesArray;
@property(readonly, nonatomic) unsigned long long additionalLanguagesArray_Count; // @dynamic additionalLanguagesArray_Count;
@property(retain, nonatomic) NSMutableArray *authTokenArray; // @dynamic authTokenArray;
@property(readonly, nonatomic) unsigned long long authTokenArray_Count; // @dynamic authTokenArray_Count;
@property(copy, nonatomic) NSString *clientInstanceId; // @dynamic clientInstanceId;
@property(nonatomic) _Bool hasAdaptationId; // @dynamic hasAdaptationId;
@property(nonatomic) _Bool hasClientInstanceId; // @dynamic hasClientInstanceId;
@property(nonatomic) _Bool hasInstallId; // @dynamic hasInstallId;
@property(nonatomic) _Bool hasLatLong; // @dynamic hasLatLong;
@property(nonatomic) _Bool hasPreferClientLocale; // @dynamic hasPreferClientLocale;
@property(nonatomic) _Bool hasSpeakerIdEnabled; // @dynamic hasSpeakerIdEnabled;
@property(nonatomic) _Bool hasSpokenLanguage; // @dynamic hasSpokenLanguage;
@property(nonatomic) _Bool hasUsePreciseGeolocation; // @dynamic hasUsePreciseGeolocation;
@property(nonatomic) _Bool hasUserLocale; // @dynamic hasUserLocale;
@property(nonatomic) _Bool hasXGeoLocation; // @dynamic hasXGeoLocation;
@property(retain, nonatomic) NSMutableArray *impersonatedUserArray; // @dynamic impersonatedUserArray;
@property(readonly, nonatomic) unsigned long long impersonatedUserArray_Count; // @dynamic impersonatedUserArray_Count;
@property(copy, nonatomic) NSString *installId; // @dynamic installId;
@property(copy, nonatomic) NSString *latLong; // @dynamic latLong;
@property(nonatomic) _Bool preferClientLocale; // @dynamic preferClientLocale;
@property(retain, nonatomic) NSMutableArray *serverAddedLanguagesArray; // @dynamic serverAddedLanguagesArray;
@property(readonly, nonatomic) unsigned long long serverAddedLanguagesArray_Count; // @dynamic serverAddedLanguagesArray_Count;
@property(nonatomic) _Bool speakerIdEnabled; // @dynamic speakerIdEnabled;
@property(retain, nonatomic) Locale *spokenLanguage; // @dynamic spokenLanguage;
@property(nonatomic) _Bool usePreciseGeolocation; // @dynamic usePreciseGeolocation;
@property(retain, nonatomic) Locale *userLocale; // @dynamic userLocale;
@property(copy, nonatomic) NSString *xGeoLocation; // @dynamic xGeoLocation;

@end

