//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface KeyStoreData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *keyTableArray; // @dynamic keyTableArray;
@property(readonly, nonatomic) unsigned long long keyTableArray_Count; // @dynamic keyTableArray_Count;
@property(nonatomic) int schemaVersion; // @dynamic schemaVersion;
@property(retain, nonatomic) NSMutableArray *structureTableArray; // @dynamic structureTableArray;
@property(readonly, nonatomic) unsigned long long structureTableArray_Count; // @dynamic structureTableArray_Count;

@end

