//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIEntityFieldMask, YTIEntityMutationOptions, YTIEntityMutationPayload;

@interface YTIEntityMutation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *entityKey; // @dynamic entityKey;
@property(retain, nonatomic) YTIEntityFieldMask *fieldMask; // @dynamic fieldMask;
@property(nonatomic) _Bool hasEntityKey; // @dynamic hasEntityKey;
@property(nonatomic) _Bool hasFieldMask; // @dynamic hasFieldMask;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasPayload; // @dynamic hasPayload;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) YTIEntityMutationOptions *options; // @dynamic options;
@property(retain, nonatomic) YTIEntityMutationPayload *payload; // @dynamic payload;
@property(nonatomic) int type; // @dynamic type;

@end

