//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTILiveChatTickerItemSupportedRenderers;

@interface YTIAddLiveChatTickerItemAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long durationSec; // @dynamic durationSec;
@property(nonatomic) _Bool hasDurationSec; // @dynamic hasDurationSec;
@property(nonatomic) _Bool hasItem; // @dynamic hasItem;
@property(retain, nonatomic) YTILiveChatTickerItemSupportedRenderers *item; // @dynamic item;

@end

