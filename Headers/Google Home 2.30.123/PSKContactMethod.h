//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, PSKDisplayInfo, PSKEmail, PSKInAppTarget, PSKPhone;

@interface PSKContactMethod : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PSKDisplayInfo *displayInfo; // @dynamic displayInfo;
@property(retain, nonatomic) PSKEmail *email; // @dynamic email;
@property(nonatomic) _Bool hasDisplayInfo; // @dynamic hasDisplayInfo;
@property(retain, nonatomic) PSKInAppTarget *inAppTarget; // @dynamic inAppTarget;
@property(retain, nonatomic) PSKPhone *phone; // @dynamic phone;
@property(retain, nonatomic) NSMutableArray *sourceIdsArray; // @dynamic sourceIdsArray;
@property(readonly, nonatomic) unsigned long long sourceIdsArray_Count; // @dynamic sourceIdsArray_Count;
@property(readonly, nonatomic) int valueOneOfCase; // @dynamic valueOneOfCase;

@end

