//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class DialogTurnIntent, MAJFormattedValue, NSMutableArray;

@interface MAJResourceSet : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) DialogTurnIntent *dialogTurnIntent; // @dynamic dialogTurnIntent;
@property(retain, nonatomic) MAJFormattedValue *displayPrompt; // @dynamic displayPrompt;
@property(nonatomic) _Bool hasDialogTurnIntent; // @dynamic hasDialogTurnIntent;
@property(nonatomic) _Bool hasDisplayPrompt; // @dynamic hasDisplayPrompt;
@property(nonatomic) _Bool hasInteraction; // @dynamic hasInteraction;
@property(nonatomic) _Bool hasMinimumNumberOfItems; // @dynamic hasMinimumNumberOfItems;
@property(nonatomic) _Bool hasNumberOfAttempts; // @dynamic hasNumberOfAttempts;
@property(nonatomic) _Bool hasNumberOfTimeouts; // @dynamic hasNumberOfTimeouts;
@property(nonatomic) _Bool hasRequiresAppIndexingApiSupport; // @dynamic hasRequiresAppIndexingApiSupport;
@property(nonatomic) _Bool hasShouldUseServerPrompt; // @dynamic hasShouldUseServerPrompt;
@property(nonatomic) _Bool hasSubPurpose; // @dynamic hasSubPurpose;
@property(nonatomic) _Bool hasVocalizedPrompt; // @dynamic hasVocalizedPrompt;
@property(nonatomic) int interaction; // @dynamic interaction;
@property(nonatomic) int minimumNumberOfItems; // @dynamic minimumNumberOfItems;
@property(nonatomic) int numberOfAttempts; // @dynamic numberOfAttempts;
@property(nonatomic) int numberOfTimeouts; // @dynamic numberOfTimeouts;
@property(nonatomic) _Bool requiresAppIndexingApiSupport; // @dynamic requiresAppIndexingApiSupport;
@property(nonatomic) _Bool shouldUseServerPrompt; // @dynamic shouldUseServerPrompt;
@property(nonatomic) int subPurpose; // @dynamic subPurpose;
@property(retain, nonatomic) NSMutableArray *suggestionsArray; // @dynamic suggestionsArray;
@property(readonly, nonatomic) unsigned long long suggestionsArray_Count; // @dynamic suggestionsArray_Count;
@property(retain, nonatomic) MAJFormattedValue *vocalizedPrompt; // @dynamic vocalizedPrompt;

@end

