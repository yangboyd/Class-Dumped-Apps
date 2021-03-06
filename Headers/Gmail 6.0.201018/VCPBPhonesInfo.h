//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, VCPBDefaultVoipSettings, VCPBLinkedPhoneRestrictions;

@interface VCPBPhonesInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *accountPhoneArray; // @dynamic accountPhoneArray;
@property(readonly, nonatomic) unsigned long long accountPhoneArray_Count; // @dynamic accountPhoneArray_Count;
@property(retain, nonatomic) NSMutableArray *callAsPhoneArray; // @dynamic callAsPhoneArray;
@property(readonly, nonatomic) unsigned long long callAsPhoneArray_Count; // @dynamic callAsPhoneArray_Count;
@property(retain, nonatomic) VCPBDefaultVoipSettings *defaultVoipSettings; // @dynamic defaultVoipSettings;
@property(nonatomic) _Bool hasDefaultVoipSettings; // @dynamic hasDefaultVoipSettings;
@property(nonatomic) _Bool hasLinkedPhoneRestrictions; // @dynamic hasLinkedPhoneRestrictions;
@property(retain, nonatomic) NSMutableArray *linkedPhoneArray; // @dynamic linkedPhoneArray;
@property(readonly, nonatomic) unsigned long long linkedPhoneArray_Count; // @dynamic linkedPhoneArray_Count;
@property(retain, nonatomic) VCPBLinkedPhoneRestrictions *linkedPhoneRestrictions; // @dynamic linkedPhoneRestrictions;
@property(retain, nonatomic) NSMutableArray *linkedVoipDeviceArray; // @dynamic linkedVoipDeviceArray;
@property(readonly, nonatomic) unsigned long long linkedVoipDeviceArray_Count; // @dynamic linkedVoipDeviceArray_Count;

@end

