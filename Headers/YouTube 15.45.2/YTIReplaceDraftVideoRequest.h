//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIClientVSI, YTIInnerTubeContext, YTILiveChatReplayTimeline, YTIUploadResourceId;

@interface YTIReplaceDraftVideoRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIClientVSI *clientVsi; // @dynamic clientVsi;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *frontendUploadId; // @dynamic frontendUploadId;
@property(nonatomic) _Bool hasClientVsi; // @dynamic hasClientVsi;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasFrontendUploadId; // @dynamic hasFrontendUploadId;
@property(nonatomic) _Bool hasResourceId; // @dynamic hasResourceId;
@property(nonatomic) _Bool hasTimeline; // @dynamic hasTimeline;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(retain, nonatomic) YTIUploadResourceId *resourceId; // @dynamic resourceId;
@property(retain, nonatomic) YTILiveChatReplayTimeline *timeline; // @dynamic timeline;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

