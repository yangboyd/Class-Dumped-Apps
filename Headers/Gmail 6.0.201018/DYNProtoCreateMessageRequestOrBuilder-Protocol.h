//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoAnnotation, DYNProtoMessageParentId, DYNProtoRequestHeader, NSString;
@protocol JavaUtilList;

@protocol DYNProtoCreateMessageRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getMessageId;
- (_Bool)hasMessageId;
- (NSString *)getLocalId;
- (_Bool)hasLocalId;
- (DYNProtoAnnotation *)getAnnotationsWithInt:(int)arg1;
- (id <JavaUtilList>)getAnnotationsList;
- (int)getAnnotationsCount;
- (NSString *)getTextBody;
- (_Bool)hasTextBody;
- (DYNProtoMessageParentId *)getParentId;
- (_Bool)hasParentId;
- (DYNProtoRequestHeader *)getRequestHeader;
- (_Bool)hasRequestHeader;
@end

