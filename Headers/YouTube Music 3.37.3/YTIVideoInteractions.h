//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTIVideoInteractions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *externalVideoId; // @dynamic externalVideoId;
@property(nonatomic) _Bool hasExternalVideoId; // @dynamic hasExternalVideoId;
@property(retain, nonatomic) NSMutableArray *interactionsArray; // @dynamic interactionsArray;
@property(readonly, nonatomic) unsigned long long interactionsArray_Count; // @dynamic interactionsArray_Count;

@end

