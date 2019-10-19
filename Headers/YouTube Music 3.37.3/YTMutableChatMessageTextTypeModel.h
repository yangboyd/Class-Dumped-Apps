//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTChatMessageTextTypeModel.h"

@class NSArray, NSData, NSString, YTContactEntityModel;

@interface YTMutableChatMessageTextTypeModel : YTChatMessageTextTypeModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *deleteToken; // @dynamic deleteToken;
@property(retain, nonatomic) NSString *removeHeartToken; // @dynamic removeHeartToken;
@property(retain, nonatomic) NSString *addHeartToken; // @dynamic addHeartToken;
@property(retain, nonatomic) NSString *temporaryClientId; // @dynamic temporaryClientId;
@property(retain, nonatomic) NSArray *emotionsArray; // @dynamic emotionsArray;
@property(retain, nonatomic) NSData *text; // @dynamic text;
@property(retain, nonatomic) YTContactEntityModel *author; // @dynamic author;
- (id)initWithEntityStore:(id)arg1;

@end

