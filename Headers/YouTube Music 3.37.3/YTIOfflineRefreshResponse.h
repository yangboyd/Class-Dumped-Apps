//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIOfflineRefreshSupportedContinuations, YTIResponseContext;

@interface YTIOfflineRefreshResponse : GPBMessage
{
}

+ (id)descriptor;
- (id)allVideoIDs;

// Remaining properties
@property(retain, nonatomic) YTIOfflineRefreshSupportedContinuations *continuation; // @dynamic continuation;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasRefreshInSeconds; // @dynamic hasRefreshInSeconds;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) NSMutableArray *offlinedVideoSetUpdatesArray; // @dynamic offlinedVideoSetUpdatesArray;
@property(readonly, nonatomic) unsigned long long offlinedVideoSetUpdatesArray_Count; // @dynamic offlinedVideoSetUpdatesArray_Count;
@property(nonatomic) unsigned int refreshInSeconds; // @dynamic refreshInSeconds;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

