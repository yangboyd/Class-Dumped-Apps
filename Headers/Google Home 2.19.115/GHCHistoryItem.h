//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCBasicView, GHCCameraCapturedData, GHCSoundSensingData, GPBTimestamp, NSMutableArray, NSString;

@interface GHCHistoryItem : GPBMessage
{
}

+ (id)descriptor;
- (double)hmeHistoryTimestamp;
- (long long)hmeHistoryEventType;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) GHCBasicView *basicView; // @dynamic basicView;
@property(retain, nonatomic) GHCCameraCapturedData *cameraCapturedData; // @dynamic cameraCapturedData;
@property(readonly, nonatomic) int eventDataOneOfCase; // @dynamic eventDataOneOfCase;
@property(nonatomic) _Bool hasBasicView; // @dynamic hasBasicView;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int itemType; // @dynamic itemType;
@property(retain, nonatomic) GHCSoundSensingData *soundSensingData; // @dynamic soundSensingData;
@property(retain, nonatomic) GPBTimestamp *timestamp; // @dynamic timestamp;

@end

