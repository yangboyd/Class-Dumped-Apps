//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCloudSearch_Metadata, GTLRCloudSearch_ResultDebugInfo, GTLRCloudSearch_Snippet, NSArray, NSNumber, NSString;

@interface GTLRCloudSearch_SearchResult : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSArray *clusteredResults; // @dynamic clusteredResults;
@property(retain, nonatomic) GTLRCloudSearch_ResultDebugInfo *debugInfo; // @dynamic debugInfo;
@property(retain, nonatomic) NSNumber *docid; // @dynamic docid;
@property(retain, nonatomic) GTLRCloudSearch_Metadata *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *resultDebugId; // @dynamic resultDebugId;
@property(retain, nonatomic) GTLRCloudSearch_Snippet *snippet; // @dynamic snippet;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *url; // @dynamic url;

@end

