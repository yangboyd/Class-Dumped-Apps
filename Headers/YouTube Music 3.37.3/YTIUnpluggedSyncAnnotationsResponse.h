//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFrameworkUpdateTransport, YTIResponseContext, YTIUnpluggedSyncAnnotationsSupportedContinuations;

@interface YTIUnpluggedSyncAnnotationsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *commandsArray; // @dynamic commandsArray;
@property(readonly, nonatomic) unsigned long long commandsArray_Count; // @dynamic commandsArray_Count;
@property(retain, nonatomic) YTIUnpluggedSyncAnnotationsSupportedContinuations *continuation; // @dynamic continuation;
@property(retain, nonatomic) YTIFrameworkUpdateTransport *frameworkUpdates; // @dynamic frameworkUpdates;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasFrameworkUpdates; // @dynamic hasFrameworkUpdates;
@property(nonatomic) _Bool hasOnErrorCommand; // @dynamic hasOnErrorCommand;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *onErrorCommand; // @dynamic onErrorCommand;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

