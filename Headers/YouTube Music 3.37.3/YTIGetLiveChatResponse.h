//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIContinuationSupportedRenderers, YTIFrameworkUpdateTransport, YTILiveChatResponseSupportedRenderers, YTIResponseContext;

@interface YTIGetLiveChatResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTILiveChatResponseSupportedRenderers *contents; // @dynamic contents;
@property(retain, nonatomic) YTIContinuationSupportedRenderers *continuationContents; // @dynamic continuationContents;
@property(retain, nonatomic) YTIFrameworkUpdateTransport *frameworkUpdates; // @dynamic frameworkUpdates;
@property(nonatomic) _Bool hasContents; // @dynamic hasContents;
@property(nonatomic) _Bool hasContinuationContents; // @dynamic hasContinuationContents;
@property(nonatomic) _Bool hasFrameworkUpdates; // @dynamic hasFrameworkUpdates;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

