//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, POEMAboutMeExtendedData, POEMCallerIdExtendedData, POEMGplusExtendedData, POEMHangoutsExtendedData, POEMMapsExtendedData, POEMPlayGamesExtendedData, POEMWebContactsExtendedData, SGWPPEDynamiteExtendedData, SGWPPEPaisaExtendedData;

@interface POEMPersonExtendedData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) POEMAboutMeExtendedData *aboutMeExtendedData; // @dynamic aboutMeExtendedData;
@property(retain, nonatomic) POEMCallerIdExtendedData *callerIdExtendedData; // @dynamic callerIdExtendedData;
@property(retain, nonatomic) POEMWebContactsExtendedData *contactsExtendedData; // @dynamic contactsExtendedData;
@property(retain, nonatomic) NSMutableArray *domainNameArray; // @dynamic domainNameArray;
@property(readonly, nonatomic) unsigned long long domainNameArray_Count; // @dynamic domainNameArray_Count;
@property(retain, nonatomic) SGWPPEDynamiteExtendedData *dynamiteExtendedData; // @dynamic dynamiteExtendedData;
@property(retain, nonatomic) POEMGplusExtendedData *gplusExtendedData; // @dynamic gplusExtendedData;
@property(retain, nonatomic) POEMHangoutsExtendedData *hangoutsExtendedData; // @dynamic hangoutsExtendedData;
@property(nonatomic) _Bool hasAboutMeExtendedData; // @dynamic hasAboutMeExtendedData;
@property(nonatomic) _Bool hasCallerIdExtendedData; // @dynamic hasCallerIdExtendedData;
@property(nonatomic) _Bool hasContactsExtendedData; // @dynamic hasContactsExtendedData;
@property(nonatomic) _Bool hasDynamiteExtendedData; // @dynamic hasDynamiteExtendedData;
@property(nonatomic) _Bool hasGplusExtendedData; // @dynamic hasGplusExtendedData;
@property(nonatomic) _Bool hasHangoutsExtendedData; // @dynamic hasHangoutsExtendedData;
@property(nonatomic) _Bool hasIsPlaceholder; // @dynamic hasIsPlaceholder;
@property(nonatomic) _Bool hasMapsExtendedData; // @dynamic hasMapsExtendedData;
@property(nonatomic) _Bool hasPaisaExtendedData; // @dynamic hasPaisaExtendedData;
@property(nonatomic) _Bool hasPlayGamesExtendedData; // @dynamic hasPlayGamesExtendedData;
@property(nonatomic) _Bool hasTlsIsPlaceholder; // @dynamic hasTlsIsPlaceholder;
@property(nonatomic) _Bool isPlaceholder; // @dynamic isPlaceholder;
@property(retain, nonatomic) POEMMapsExtendedData *mapsExtendedData; // @dynamic mapsExtendedData;
@property(retain, nonatomic) SGWPPEPaisaExtendedData *paisaExtendedData; // @dynamic paisaExtendedData;
@property(retain, nonatomic) POEMPlayGamesExtendedData *playGamesExtendedData; // @dynamic playGamesExtendedData;
@property(nonatomic) _Bool tlsIsPlaceholder; // @dynamic tlsIsPlaceholder;

@end

