//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, POEMGoogleGroupExtendedData;

@interface GIPMGoogleGroup : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *emailsArray; // @dynamic emailsArray;
@property(readonly, nonatomic) unsigned long long emailsArray_Count; // @dynamic emailsArray_Count;
@property(retain, nonatomic) POEMGoogleGroupExtendedData *extendedData; // @dynamic extendedData;
@property(nonatomic) _Bool hasExtendedData; // @dynamic hasExtendedData;
@property(retain, nonatomic) NSMutableArray *namesArray; // @dynamic namesArray;
@property(readonly, nonatomic) unsigned long long namesArray_Count; // @dynamic namesArray_Count;
@property(copy, nonatomic) NSString *personId; // @dynamic personId;

@end

