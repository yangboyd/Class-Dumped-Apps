//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoReadRevision, DYNProtoWorldItemLite, DYNProtoWorldSectionResponse, NSString;
@protocol JavaUtilList;

@protocol DYNProtoPaginatedWorldResponseOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoWorldItemLite *)getWorldItemsWithInt:(int)arg1;
- (id <JavaUtilList>)getWorldItemsList;
- (int)getWorldItemsCount;
- (DYNProtoReadRevision *)getUserRevision;
- (_Bool)hasUserRevision;
- (NSString *)getWorldConsistencyToken;
- (_Bool)hasWorldConsistencyToken;
- (DYNProtoWorldSectionResponse *)getWorldSectionResponsesWithInt:(int)arg1;
- (id <JavaUtilList>)getWorldSectionResponsesList;
- (int)getWorldSectionResponsesCount;
@end

