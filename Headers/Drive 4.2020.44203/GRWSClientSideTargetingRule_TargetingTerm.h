//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GRWSAppStatePredicate, GRWSEventCountPredicate, GRWSIosPermissionStatePredicate;

@interface GRWSClientSideTargetingRule_TargetingTerm : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GRWSAppStatePredicate *appState; // @dynamic appState;
@property(retain, nonatomic) GRWSEventCountPredicate *eventCount; // @dynamic eventCount;
@property(nonatomic) _Bool hasNegate; // @dynamic hasNegate;
@property(nonatomic) _Bool negate; // @dynamic negate;
@property(retain, nonatomic) GRWSIosPermissionStatePredicate *permission; // @dynamic permission;
@property(readonly, nonatomic) int predicateOneOfCase; // @dynamic predicateOneOfCase;

@end

