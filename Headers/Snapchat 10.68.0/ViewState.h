//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSCOREUUID;

@interface ViewState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSnapOwnerId; // @dynamic hasSnapOwnerId;
@property(nonatomic) long long screenshotTimeMs; // @dynamic screenshotTimeMs;
@property(retain, nonatomic) SCSCOREUUID *snapOwnerId; // @dynamic snapOwnerId;
@property(nonatomic) long long viewTimeMs; // @dynamic viewTimeMs;

@end

