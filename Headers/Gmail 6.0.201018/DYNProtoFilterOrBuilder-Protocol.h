//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoFilter_ByCase, DYNProtoFilter_CreateTimeCase, DYNProtoFilter_UpdateTimeCase;

@protocol DYNProtoFilterOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoFilter_UpdateTimeCase *)getUpdateTimeCase;
- (DYNProtoFilter_CreateTimeCase *)getCreateTimeCase;
- (DYNProtoFilter_ByCase *)getByCase;
- (long long)getAfterUpdateTime;
- (_Bool)hasAfterUpdateTime;
- (long long)getBeforeUpdateTime;
- (_Bool)hasBeforeUpdateTime;
- (long long)getAfterCreateTime;
- (_Bool)hasAfterCreateTime;
- (long long)getBeforeCreateTime;
- (_Bool)hasBeforeCreateTime;
- (long long)getAfterTime;
- (_Bool)hasAfterTime;
- (long long)getBeforeTime;
- (_Bool)hasBeforeTime;
@end

