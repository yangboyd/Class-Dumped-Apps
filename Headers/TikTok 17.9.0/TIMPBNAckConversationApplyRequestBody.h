//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary;

@interface TIMPBNAckConversationApplyRequestBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long applyId; // @dynamic applyId;
@property(nonatomic) int applyStatus; // @dynamic applyStatus;
@property(retain, nonatomic) NSMutableDictionary *bizExt; // @dynamic bizExt;
@property(readonly, nonatomic) unsigned long long bizExt_Count; // @dynamic bizExt_Count;
@property(nonatomic) _Bool hasApplyId; // @dynamic hasApplyId;
@property(nonatomic) _Bool hasApplyStatus; // @dynamic hasApplyStatus;

@end

