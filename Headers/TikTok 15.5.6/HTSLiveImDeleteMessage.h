//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, HTSLiveCommon;

@interface HTSLiveImDeleteMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(retain, nonatomic) GPBInt64Array *deleteMsgIdsArray; // @dynamic deleteMsgIdsArray;
@property(readonly, nonatomic) unsigned long long deleteMsgIdsArray_Count; // @dynamic deleteMsgIdsArray_Count;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;

@end

