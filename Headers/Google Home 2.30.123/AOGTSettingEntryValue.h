//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AOGTAddress, AOGTExistingInstrument;

@interface AOGTSettingEntryValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int booleanSettingValue; // @dynamic booleanSettingValue;
@property(nonatomic) int category; // @dynamic category;
@property(retain, nonatomic) AOGTAddress *deliveryAddressValue; // @dynamic deliveryAddressValue;
@property(retain, nonatomic) AOGTExistingInstrument *instrumentValue; // @dynamic instrumentValue;
@property(readonly, nonatomic) int valueOneOfCase; // @dynamic valueOneOfCase;

@end

