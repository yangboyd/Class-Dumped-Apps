//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIPhonebookInviteTokenData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRefreshOnUsages; // @dynamic hasRefreshOnUsages;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(nonatomic) _Bool hasUsages; // @dynamic hasUsages;
@property(nonatomic) int refreshOnUsages; // @dynamic refreshOnUsages;
@property(copy, nonatomic) NSString *token; // @dynamic token;
@property(nonatomic) int usages; // @dynamic usages;

@end

