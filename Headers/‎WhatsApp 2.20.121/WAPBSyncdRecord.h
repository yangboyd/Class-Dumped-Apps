//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class WAPBKeyId, WAPBSyncdIndex, WAPBSyncdValue;

@interface WAPBSyncdRecord : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIndex; // @dynamic hasIndex;
@property(nonatomic) _Bool hasKeyId; // @dynamic hasKeyId;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) WAPBSyncdIndex *index; // @dynamic index;
@property(retain, nonatomic) WAPBKeyId *keyId; // @dynamic keyId;
@property(retain, nonatomic) WAPBSyncdValue *value; // @dynamic value;

@end

