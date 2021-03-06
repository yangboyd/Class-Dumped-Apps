//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface NowPlayingContentInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cardId; // @dynamic cardId;
@property(nonatomic) int cardType; // @dynamic cardType;
@property(nonatomic) unsigned int eligibleDeviceCount; // @dynamic eligibleDeviceCount;
@property(nonatomic) unsigned int eligibleGroupCount; // @dynamic eligibleGroupCount;
@property(nonatomic) _Bool hasCardId; // @dynamic hasCardId;
@property(nonatomic) _Bool hasCardType; // @dynamic hasCardType;
@property(nonatomic) _Bool hasEligibleDeviceCount; // @dynamic hasEligibleDeviceCount;
@property(nonatomic) _Bool hasEligibleGroupCount; // @dynamic hasEligibleGroupCount;
@property(nonatomic) _Bool hasSelectedDeviceCount; // @dynamic hasSelectedDeviceCount;
@property(nonatomic) unsigned int selectedDeviceCount; // @dynamic selectedDeviceCount;

@end

