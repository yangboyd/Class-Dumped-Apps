//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBAny, GPBEnumArray, NSMutableArray, NSString;

@interface GHAThermostatWobleTask : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *functionArray; // @dynamic functionArray;
@property(readonly, nonatomic) unsigned long long functionArray_Count; // @dynamic functionArray_Count;
@property(retain, nonatomic) GPBEnumArray *functionKeyArray; // @dynamic functionKeyArray;
@property(readonly, nonatomic) unsigned long long functionKeyArray_Count; // @dynamic functionKeyArray_Count;
@property(nonatomic) _Bool hasScreen; // @dynamic hasScreen;
@property(nonatomic) _Bool hasShowErrorAlert; // @dynamic hasShowErrorAlert;
@property(nonatomic) _Bool isTransient; // @dynamic isTransient;
@property(copy, nonatomic) NSString *outputErrorValue; // @dynamic outputErrorValue;
@property(copy, nonatomic) NSString *outputFailureValue; // @dynamic outputFailureValue;
@property(copy, nonatomic) NSString *outputKey; // @dynamic outputKey;
@property(copy, nonatomic) NSString *outputSuccessValue; // @dynamic outputSuccessValue;
@property(retain, nonatomic) GPBAny *screen; // @dynamic screen;
@property(retain, nonatomic) GPBAny *showErrorAlert; // @dynamic showErrorAlert;
@property(copy, nonatomic) NSString *taskId; // @dynamic taskId;
@property(copy, nonatomic) NSString *weaveSetupDeviceInfoKey; // @dynamic weaveSetupDeviceInfoKey;

@end

