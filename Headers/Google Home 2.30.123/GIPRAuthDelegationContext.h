//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIPRUnicornDelegation, NSString;

@interface GIPRAuthDelegationContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int delegationOneOfCase; // @dynamic delegationOneOfCase;
@property(nonatomic) int delegationType; // @dynamic delegationType;
@property(copy, nonatomic) NSString *obfuscatedOwnerId; // @dynamic obfuscatedOwnerId;
@property(retain, nonatomic) GIPRUnicornDelegation *unicorn; // @dynamic unicorn;

@end

