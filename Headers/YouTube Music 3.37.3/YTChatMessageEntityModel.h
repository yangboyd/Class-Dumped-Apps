//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "YTEntity-Protocol.h"

@class NSData, NSDictionary, NSString, YTChatMessageLinkTypeModel, YTChatMessageMetadataTypeModel, YTChatMessageTextTypeModel, YTChatMessageVideoTypeModel, YTIChatMessageEntity;
@protocol YTEntityStore;

@interface YTChatMessageEntityModel : NSObject <YTEntity, NSCopying, NSMutableCopying>
{
    NSString *_key;
    _Bool _parseAndExtractFieldsFromProtoData;
    _Bool _generateData;
    YTChatMessageMetadataTypeModel *_chatMessageMetadataType;
    YTChatMessageTextTypeModel *_chatMessageTextType;
    YTChatMessageVideoTypeModel *_chatMessageVideoType;
    YTChatMessageLinkTypeModel *_chatMessageLinkType;
    NSData *_data;
    NSDictionary *_metadata;
    id <YTEntityStore> _entityStore;
    YTIChatMessageEntity *_protoBuf;
}

@property(copy, nonatomic) YTIChatMessageEntity *protoBuf; // @synthesize protoBuf=_protoBuf;
@property(nonatomic) _Bool generateData; // @synthesize generateData=_generateData;
@property(nonatomic) _Bool parseAndExtractFieldsFromProtoData; // @synthesize parseAndExtractFieldsFromProtoData=_parseAndExtractFieldsFromProtoData;
@property(readonly, nonatomic) id <YTEntityStore> entityStore; // @synthesize entityStore=_entityStore;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) YTChatMessageLinkTypeModel *chatMessageLinkType; // @synthesize chatMessageLinkType=_chatMessageLinkType;
@property(retain, nonatomic) YTChatMessageVideoTypeModel *chatMessageVideoType; // @synthesize chatMessageVideoType=_chatMessageVideoType;
@property(retain, nonatomic) YTChatMessageTextTypeModel *chatMessageTextType; // @synthesize chatMessageTextType=_chatMessageTextType;
@property(retain, nonatomic) YTChatMessageMetadataTypeModel *chatMessageMetadataType; // @synthesize chatMessageMetadataType=_chatMessageMetadataType;
- (void).cxx_destruct;
- (_Bool)isEqualEntityValue:(id)arg1;
- (void)generateDataIfNecessary;
- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)allAssociationKeys;
- (_Bool)isEqualToEntity:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long created;
@property(readonly, nonatomic) _Bool hasCreated;
@property(readonly, nonatomic) int typeOneOfCase;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly, copy, nonatomic) NSString *entityKey;
- (id)init;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBuf:(id)arg3 protoBufData:(id)arg4 metadata:(id)arg5;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBufData:(id)arg3 metadata:(id)arg4;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBufData:(id)arg3;
- (id)initWithEntityStore:(id)arg1 protoBuf:(id)arg2 metadata:(id)arg3;
- (id)initWithEntityStore:(id)arg1 protoBuf:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

