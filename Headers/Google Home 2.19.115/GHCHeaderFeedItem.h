//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCAction, NSString;

@interface GHCHeaderFeedItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCAction *action; // @dynamic action;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(copy, nonatomic) NSString *headerText; // @dynamic headerText;
@property(nonatomic) _Bool showDivider; // @dynamic showDivider;

@end

