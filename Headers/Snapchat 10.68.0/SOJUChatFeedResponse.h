//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUChatFeedResponse-Protocol.h"

@class NSArray, NSString, SOJUConversationsResponseInfo, SOJUFeedDeltaSyncToken, SOJUFeedResponseInfo, SOJUFriendsResponse, SOJUMessagingGatewayInfo, SOJUServerInfoResponse, SOJUUpdatesResponse;

@interface SOJUChatFeedResponse : NSObject <SOJUChatFeedResponse>
{
    SOJUServerInfoResponse *_serverInfo;
    SOJUMessagingGatewayInfo *_messagingGatewayInfo;
    SOJUUpdatesResponse *_updatesResponse;
    SOJUFriendsResponse *_friendsResponse;
    SOJUFeedResponseInfo *_feedResponseInfo;
    NSArray *_mischiefResponse;
    NSArray *_conversationsResponse;
    SOJUConversationsResponseInfo *_conversationsResponseInfo;
    SOJUFeedDeltaSyncToken *_feedDeltaSyncToken;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUFeedDeltaSyncToken *feedDeltaSyncToken; // @synthesize feedDeltaSyncToken=_feedDeltaSyncToken;
@property(readonly, copy, nonatomic) SOJUConversationsResponseInfo *conversationsResponseInfo; // @synthesize conversationsResponseInfo=_conversationsResponseInfo;
@property(readonly, copy, nonatomic) NSArray *conversationsResponse; // @synthesize conversationsResponse=_conversationsResponse;
@property(readonly, copy, nonatomic) NSArray *mischiefResponse; // @synthesize mischiefResponse=_mischiefResponse;
@property(readonly, copy, nonatomic) SOJUFeedResponseInfo *feedResponseInfo; // @synthesize feedResponseInfo=_feedResponseInfo;
@property(readonly, copy, nonatomic) SOJUFriendsResponse *friendsResponse; // @synthesize friendsResponse=_friendsResponse;
@property(readonly, copy, nonatomic) SOJUUpdatesResponse *updatesResponse; // @synthesize updatesResponse=_updatesResponse;
@property(readonly, copy, nonatomic) SOJUMessagingGatewayInfo *messagingGatewayInfo; // @synthesize messagingGatewayInfo=_messagingGatewayInfo;
@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo; // @synthesize serverInfo=_serverInfo;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServerInfo:(id)arg1 messagingGatewayInfo:(id)arg2 updatesResponse:(id)arg3 friendsResponse:(id)arg4 feedResponseInfo:(id)arg5 mischiefResponse:(id)arg6 conversationsResponse:(id)arg7 conversationsResponseInfo:(id)arg8 feedDeltaSyncToken:(id)arg9;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

