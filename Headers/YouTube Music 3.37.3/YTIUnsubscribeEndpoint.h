//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIUnsubscribeConfirmDialogSupportedRenderers;

@interface YTIUnsubscribeEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *channelIdsArray; // @dynamic channelIdsArray;
@property(readonly, nonatomic) unsigned long long channelIdsArray_Count; // @dynamic channelIdsArray_Count;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasSiloName; // @dynamic hasSiloName;
@property(nonatomic) _Bool hasUnsubscribeDialog; // @dynamic hasUnsubscribeDialog;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(copy, nonatomic) NSString *siloName; // @dynamic siloName;
@property(retain, nonatomic) YTIUnsubscribeConfirmDialogSupportedRenderers *unsubscribeDialog; // @dynamic unsubscribeDialog;

@end

