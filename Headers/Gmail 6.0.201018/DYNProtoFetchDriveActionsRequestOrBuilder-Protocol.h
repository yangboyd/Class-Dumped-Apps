//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoRequestHeader, NSString;
@protocol ComGoogleProtobufProtocolStringList;

@protocol DYNProtoFetchDriveActionsRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getDriveIdsWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getDriveIdsList;
- (int)getDriveIdsCount;
- (DYNProtoRequestHeader *)getRequestHeader;
- (_Bool)hasRequestHeader;
@end

