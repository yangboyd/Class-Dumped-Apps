//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCPreferenceId, GHCPreferenceState;

@interface GHCPreferenceSetting : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPreferenceId; // @dynamic hasPreferenceId;
@property(nonatomic) _Bool hasPreferenceState; // @dynamic hasPreferenceState;
@property(retain, nonatomic) GHCPreferenceId *preferenceId; // @dynamic preferenceId;
@property(retain, nonatomic) GHCPreferenceState *preferenceState; // @dynamic preferenceState;

@end

