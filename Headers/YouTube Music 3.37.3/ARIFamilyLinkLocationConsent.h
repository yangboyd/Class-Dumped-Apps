//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARITwoStateSettingValue;

@interface ARIFamilyLinkLocationConsent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARITwoStateSettingValue *deviceLocationAllDevices; // @dynamic deviceLocationAllDevices;
@property(nonatomic) _Bool hasDeviceLocationAllDevices; // @dynamic hasDeviceLocationAllDevices;
@property(nonatomic) _Bool hasKoreanTerms; // @dynamic hasKoreanTerms;
@property(nonatomic) _Bool hasLocationHistoryAccount; // @dynamic hasLocationHistoryAccount;
@property(nonatomic) _Bool hasLocationReportingAllDevices; // @dynamic hasLocationReportingAllDevices;
@property(retain, nonatomic) ARITwoStateSettingValue *koreanTerms; // @dynamic koreanTerms;
@property(retain, nonatomic) ARITwoStateSettingValue *locationHistoryAccount; // @dynamic locationHistoryAccount;
@property(retain, nonatomic) ARITwoStateSettingValue *locationReportingAllDevices; // @dynamic locationReportingAllDevices;

@end

