//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsDynamiteV1SharedHangoutsInteropClientMetadata_ConserverErrorType, ComGoogleAppsDynamiteV1SharedInteropInOrderQueueMetadata, ComGoogleProtobufTimestamp, NSString;

@protocol ComGoogleAppsDynamiteV1SharedHangoutsInteropClientMetadataOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleProtobufTimestamp *)getScliteMigratedTimestamp;
- (_Bool)hasScliteMigratedTimestamp;
- (ComGoogleAppsDynamiteV1SharedInteropInOrderQueueMetadata *)getInOrderQueueMetadata;
- (_Bool)hasInOrderQueueMetadata;
- (NSString *)getServerAssignedRequestTraceId;
- (_Bool)hasServerAssignedRequestTraceId;
- (ComGoogleAppsDynamiteV1SharedHangoutsInteropClientMetadata_ConserverErrorType *)getErrorType;
- (_Bool)hasErrorType;
@end

