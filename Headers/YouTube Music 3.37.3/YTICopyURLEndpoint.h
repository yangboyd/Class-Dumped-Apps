//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTICopyURLEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(retain, nonatomic) NSMutableArray *failureActionsArray; // @dynamic failureActionsArray;
@property(readonly, nonatomic) unsigned long long failureActionsArray_Count; // @dynamic failureActionsArray_Count;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(retain, nonatomic) NSMutableArray *successActionsArray; // @dynamic successActionsArray;
@property(readonly, nonatomic) unsigned long long successActionsArray_Count; // @dynamic successActionsArray_Count;

@end

