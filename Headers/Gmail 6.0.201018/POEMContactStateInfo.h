//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class POEMPersonFieldMetadata, SGAPContactState;

@interface POEMContactStateInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SGAPContactState *contactState; // @dynamic contactState;
@property(nonatomic) _Bool hasContactState; // @dynamic hasContactState;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(retain, nonatomic) POEMPersonFieldMetadata *metadata; // @dynamic metadata;

@end

