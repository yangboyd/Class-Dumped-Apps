//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBEnumArray, NSMutableArray;

@interface PILRpcMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long blockedUsec; // @dynamic blockedUsec;
@property(nonatomic) long long durationUsec; // @dynamic durationUsec;
@property(retain, nonatomic) GPBEnumArray *featureTypeArray; // @dynamic featureTypeArray;
@property(readonly, nonatomic) unsigned long long featureTypeArray_Count; // @dynamic featureTypeArray_Count;
@property(nonatomic) _Bool hasBlockedUsec; // @dynamic hasBlockedUsec;
@property(nonatomic) _Bool hasDurationUsec; // @dynamic hasDurationUsec;
@property(nonatomic) _Bool hasProcessingUsec; // @dynamic hasProcessingUsec;
@property(nonatomic) _Bool hasStatusCode; // @dynamic hasStatusCode;
@property(nonatomic) long long processingUsec; // @dynamic processingUsec;
@property(retain, nonatomic) NSMutableArray *requestIdArray; // @dynamic requestIdArray;
@property(readonly, nonatomic) unsigned long long requestIdArray_Count; // @dynamic requestIdArray_Count;
@property(nonatomic) int statusCode; // @dynamic statusCode;

@end

