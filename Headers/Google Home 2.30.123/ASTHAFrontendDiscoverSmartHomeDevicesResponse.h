//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface ASTHAFrontendDiscoverSmartHomeDevicesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *devicesArray; // @dynamic devicesArray;
@property(readonly, nonatomic) unsigned long long devicesArray_Count; // @dynamic devicesArray_Count;
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasStateDescription; // @dynamic hasStateDescription;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSMutableArray *roomsArray; // @dynamic roomsArray;
@property(readonly, nonatomic) unsigned long long roomsArray_Count; // @dynamic roomsArray_Count;
@property(copy, nonatomic) NSString *stateDescription; // @dynamic stateDescription;
@property(retain, nonatomic) NSMutableArray *structuresArray; // @dynamic structuresArray;
@property(readonly, nonatomic) unsigned long long structuresArray_Count; // @dynamic structuresArray_Count;

@end

