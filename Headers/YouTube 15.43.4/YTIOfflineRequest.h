//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIInnerTubeContext;

@interface YTIOfflineRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasIsSeriesMetadataRequest; // @dynamic hasIsSeriesMetadataRequest;
@property(nonatomic) _Bool isSeriesMetadataRequest; // @dynamic isSeriesMetadataRequest;
@property(retain, nonatomic) NSMutableArray *playlistIdsArray; // @dynamic playlistIdsArray;
@property(readonly, nonatomic) unsigned long long playlistIdsArray_Count; // @dynamic playlistIdsArray_Count;
@property(retain, nonatomic) NSMutableArray *videoIdsArray; // @dynamic videoIdsArray;
@property(readonly, nonatomic) unsigned long long videoIdsArray_Count; // @dynamic videoIdsArray_Count;

@end

