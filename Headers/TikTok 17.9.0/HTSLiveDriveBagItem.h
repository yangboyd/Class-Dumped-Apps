//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveDriveItem;

@interface HTSLiveDriveBagItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool equipped; // @dynamic equipped;
@property(nonatomic) _Bool hasItem; // @dynamic hasItem;
@property(retain, nonatomic) HTSLiveDriveItem *item; // @dynamic item;
@property(nonatomic) long long nextExpire; // @dynamic nextExpire;

@end

