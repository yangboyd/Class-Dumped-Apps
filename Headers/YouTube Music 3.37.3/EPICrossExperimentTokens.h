//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface EPICrossExperimentTokens : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *fromConfigPackage; // @dynamic fromConfigPackage;
@property(copy, nonatomic) NSString *fromObfuscatedGaiaId; // @dynamic fromObfuscatedGaiaId;
@property(nonatomic) _Bool hasFromConfigPackage; // @dynamic hasFromConfigPackage;
@property(nonatomic) _Bool hasFromObfuscatedGaiaId; // @dynamic hasFromObfuscatedGaiaId;
@property(nonatomic) _Bool hasToConfigPackage; // @dynamic hasToConfigPackage;
@property(copy, nonatomic) NSString *toConfigPackage; // @dynamic toConfigPackage;
@property(retain, nonatomic) NSMutableArray *tokenArray; // @dynamic tokenArray;
@property(readonly, nonatomic) unsigned long long tokenArray_Count; // @dynamic tokenArray_Count;

@end

