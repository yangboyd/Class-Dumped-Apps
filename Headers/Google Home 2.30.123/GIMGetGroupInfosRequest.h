//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMRequestHeader, NSMutableArray;

@interface GIMGetGroupInfosRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *groupIdsArray; // @dynamic groupIdsArray;
@property(readonly, nonatomic) unsigned long long groupIdsArray_Count; // @dynamic groupIdsArray_Count;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(retain, nonatomic) GIMRequestHeader *header; // @dynamic header;

@end

