//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUChatConversationDeltaQuery-Protocol.h"

@class NSDictionary, NSString;

@interface SOJUChatConversationDeltaQuery : NSObject <SOJUChatConversationDeltaQuery>
{
    NSDictionary *_lastKnownMsgSeqs;
    NSDictionary *_lastKnownUpdateSeqs;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSDictionary *lastKnownUpdateSeqs; // @synthesize lastKnownUpdateSeqs=_lastKnownUpdateSeqs;
@property(readonly, copy, nonatomic) NSDictionary *lastKnownMsgSeqs; // @synthesize lastKnownMsgSeqs=_lastKnownMsgSeqs;
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
- (id)initWithLastKnownMsgSeqs:(id)arg1 lastKnownUpdateSeqs:(id)arg2;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

