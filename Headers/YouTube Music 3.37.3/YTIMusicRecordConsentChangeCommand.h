//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIMusicLocationMasterSwitchConsentChangeMetadata, YTIMusicRecordConsentChangeCommand_ConsentTextDetails;

@interface YTIMusicRecordConsentChangeCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int consentContextId; // @dynamic consentContextId;
@property(readonly, nonatomic) int consentMetadataOneOfCase; // @dynamic consentMetadataOneOfCase;
@property(retain, nonatomic) YTIMusicRecordConsentChangeCommand_ConsentTextDetails *consentTextDetails; // @dynamic consentTextDetails;
@property(nonatomic) _Bool hasConsentContextId; // @dynamic hasConsentContextId;
@property(nonatomic) _Bool hasConsentTextDetails; // @dynamic hasConsentTextDetails;
@property(nonatomic) _Bool hasOnSuccess; // @dynamic hasOnSuccess;
@property(retain, nonatomic) YTIMusicLocationMasterSwitchConsentChangeMetadata *musicLocationMasterSwitchConsentChangeMetadata; // @dynamic musicLocationMasterSwitchConsentChangeMetadata;
@property(retain, nonatomic) YTICommand *onSuccess; // @dynamic onSuccess;

@end

