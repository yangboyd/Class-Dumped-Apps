//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSLSImpressionInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *resultImpressionsArray; // @dynamic resultImpressionsArray;
@property(readonly, nonatomic) unsigned long long resultImpressionsArray_Count; // @dynamic resultImpressionsArray_Count;
@property(nonatomic) long long searchQueryId; // @dynamic searchQueryId;
@property(copy, nonatomic) NSString *searchSessionId; // @dynamic searchSessionId;

@end

