//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoGroupId, DYNProtoHold, NSString;
@protocol ComGoogleProtobufProtocolStringList, JavaUtilList;

@protocol DYNProtoSearchFilterForLegalOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoHold *)getHoldWithInt:(int)arg1;
- (id <JavaUtilList>)getHoldList;
- (int)getHoldCount;
- (NSString *)getSearchTerm;
- (_Bool)hasSearchTerm;
- (NSString *)getAnnotationTypeWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getAnnotationTypeList;
- (int)getAnnotationTypeCount;
- (long long)getAuthorIdWithInt:(int)arg1;
- (id <JavaUtilList>)getAuthorIdList;
- (int)getAuthorIdCount;
- (_Bool)getSearchAllDmsOnly;
- (_Bool)hasSearchAllDmsOnly;
- (_Bool)getSearchAllRoomsOnly;
- (_Bool)hasSearchAllRoomsOnly;
- (DYNProtoGroupId *)getGroupIdsWithInt:(int)arg1;
- (id <JavaUtilList>)getGroupIdsList;
- (int)getGroupIdsCount;
@end

