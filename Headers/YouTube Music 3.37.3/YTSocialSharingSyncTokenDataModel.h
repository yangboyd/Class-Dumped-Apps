//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSData, YTChatMessageSetPageDataModel, YTChatSetPageDataModel, YTChatSyncDataModel, YTForegroundChatDataModel, YTGlobalSyncDataModel, YTISocialSharingSyncTokenData;
@protocol YTEntityStore;

@interface YTSocialSharingSyncTokenDataModel : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _parseAndExtractFieldsFromProtoData;
    _Bool _generateData;
    YTChatMessageSetPageDataModel *_chatMessageSetPageData;
    YTChatSetPageDataModel *_chatSetPageData;
    YTGlobalSyncDataModel *_globalSyncData;
    YTChatSyncDataModel *_chatSyncData;
    YTForegroundChatDataModel *_foregroundChatData;
    NSData *_data;
    id <YTEntityStore> _entityStore;
    YTISocialSharingSyncTokenData *_protoBuf;
}

@property(copy, nonatomic) YTISocialSharingSyncTokenData *protoBuf; // @synthesize protoBuf=_protoBuf;
@property(nonatomic) _Bool generateData; // @synthesize generateData=_generateData;
@property(nonatomic) _Bool parseAndExtractFieldsFromProtoData; // @synthesize parseAndExtractFieldsFromProtoData=_parseAndExtractFieldsFromProtoData;
@property(readonly, nonatomic) id <YTEntityStore> entityStore; // @synthesize entityStore=_entityStore;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) YTForegroundChatDataModel *foregroundChatData; // @synthesize foregroundChatData=_foregroundChatData;
@property(retain, nonatomic) YTChatSyncDataModel *chatSyncData; // @synthesize chatSyncData=_chatSyncData;
@property(retain, nonatomic) YTGlobalSyncDataModel *globalSyncData; // @synthesize globalSyncData=_globalSyncData;
@property(retain, nonatomic) YTChatSetPageDataModel *chatSetPageData; // @synthesize chatSetPageData=_chatSetPageData;
@property(retain, nonatomic) YTChatMessageSetPageDataModel *chatMessageSetPageData; // @synthesize chatMessageSetPageData=_chatMessageSetPageData;
- (void).cxx_destruct;
- (_Bool)isEqualEntityValue:(id)arg1;
- (void)generateDataIfNecessary;
- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)entityVersion;
- (id)init;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBuf:(id)arg3 protoBufData:(id)arg4;
- (id)initWithEntityStore:(id)arg1 protoBufData:(id)arg2;
- (id)initWithEntityStore:(id)arg1 protoBuf:(id)arg2;

@end

