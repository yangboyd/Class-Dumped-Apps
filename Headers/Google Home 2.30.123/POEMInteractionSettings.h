//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class POEMPersonFieldMetadata;

@interface POEMInteractionSettings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowed; // @dynamic allowed;
@property(nonatomic) _Bool hasAllowed; // @dynamic hasAllowed;
@property(nonatomic) _Bool hasInteraction; // @dynamic hasInteraction;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) int interaction; // @dynamic interaction;
@property(retain, nonatomic) POEMPersonFieldMetadata *metadata; // @dynamic metadata;

@end

