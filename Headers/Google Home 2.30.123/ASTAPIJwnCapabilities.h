//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary;

@interface ASTAPIJwnCapabilities : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSupportsJwn; // @dynamic hasSupportsJwn;
@property(retain, nonatomic) NSMutableDictionary *librariesVersionMap; // @dynamic librariesVersionMap;
@property(readonly, nonatomic) unsigned long long librariesVersionMap_Count; // @dynamic librariesVersionMap_Count;
@property(nonatomic) _Bool supportsJwn; // @dynamic supportsJwn;

@end

