//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSUPABExperimentsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool forceRefresh; // @dynamic forceRefresh;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSMutableArray *studyIdsArray; // @dynamic studyIdsArray;
@property(readonly, nonatomic) unsigned long long studyIdsArray_Count; // @dynamic studyIdsArray_Count;

@end

