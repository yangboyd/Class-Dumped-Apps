//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMAccountSettings, GIMReachableIdsValue, GIMRegistrationInfoListValue, NSMutableArray;

@interface GIMChangeAccountInfoPush : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIMAccountSettings *accountSettings; // @dynamic accountSettings;
@property(nonatomic) _Bool hasAccountSettings; // @dynamic hasAccountSettings;
@property(nonatomic) _Bool hasReachableIds; // @dynamic hasReachableIds;
@property(nonatomic) _Bool hasRegistrations; // @dynamic hasRegistrations;
@property(retain, nonatomic) GIMReachableIdsValue *reachableIds; // @dynamic reachableIds;
@property(retain, nonatomic) GIMRegistrationInfoListValue *registrations; // @dynamic registrations;
@property(retain, nonatomic) NSMutableArray *selfOnlyRegistrationInfoArray; // @dynamic selfOnlyRegistrationInfoArray;
@property(readonly, nonatomic) unsigned long long selfOnlyRegistrationInfoArray_Count; // @dynamic selfOnlyRegistrationInfoArray_Count;
@property(nonatomic) long long txnTimestampUsec; // @dynamic txnTimestampUsec;

@end

