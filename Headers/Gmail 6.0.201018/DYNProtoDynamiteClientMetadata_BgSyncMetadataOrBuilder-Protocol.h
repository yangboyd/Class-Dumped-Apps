//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoAppOpenType, DYNProtoDynamiteClientMetadata_BgSyncResult, DYNProtoDynamiteClientMetadata_BgSyncType;

@protocol DYNProtoDynamiteClientMetadata_BgSyncMetadataOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getIsNonForegroundAccount;
- (_Bool)hasIsNonForegroundAccount;
- (_Bool)getWasLastSyncKilled;
- (_Bool)hasWasLastSyncKilled;
- (DYNProtoDynamiteClientMetadata_BgSyncResult *)getBgSyncResult;
- (_Bool)hasBgSyncResult;
- (long long)getTimeSinceLastSyncMillis;
- (_Bool)hasTimeSinceLastSyncMillis;
- (DYNProtoAppOpenType *)getAppOpenType;
- (_Bool)hasAppOpenType;
- (DYNProtoDynamiteClientMetadata_BgSyncType *)getBgSyncType;
- (_Bool)hasBgSyncType;
@end

