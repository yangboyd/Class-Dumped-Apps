//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleProtobufByteString, DYNProtoGroupId, DYNProtoVirusScanResult, NSString;

@protocol DYNProtoBackendUploadMetadataOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleProtobufByteString *)getSha256;
- (_Bool)hasSha256;
- (long long)getUploadTimestampUsec;
- (_Bool)hasUploadTimestampUsec;
- (NSString *)getUploadIp;
- (_Bool)hasUploadIp;
- (DYNProtoVirusScanResult *)getVirusScanResult;
- (_Bool)hasVirusScanResult;
- (NSString *)getVideoThumbnailBlobId;
- (_Bool)hasVideoThumbnailBlobId;
- (NSString *)getVideoId;
- (_Bool)hasVideoId;
- (long long)getContentSize;
- (_Bool)hasContentSize;
- (DYNProtoGroupId *)getGroupId;
- (_Bool)hasGroupId;
- (NSString *)getBlobPath;
- (_Bool)hasBlobPath;
@end

