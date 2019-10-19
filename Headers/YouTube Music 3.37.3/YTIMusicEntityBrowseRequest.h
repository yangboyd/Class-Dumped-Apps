//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIInnerTubeContext, YTIMusicEntityReference;

@interface YTIMusicEntityBrowseRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) YTIMusicEntityReference *entityId; // @dynamic entityId;
@property(retain, nonatomic) NSMutableArray *entityRequestIdsArray; // @dynamic entityRequestIdsArray;
@property(readonly, nonatomic) unsigned long long entityRequestIdsArray_Count; // @dynamic entityRequestIdsArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasEntityId; // @dynamic hasEntityId;
@property(nonatomic) _Bool hasPageId; // @dynamic hasPageId;
@property(nonatomic) _Bool hasPageToken; // @dynamic hasPageToken;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;
@property(copy, nonatomic) NSString *pageToken; // @dynamic pageToken;
@property(copy, nonatomic) NSString *params; // @dynamic params;

@end

