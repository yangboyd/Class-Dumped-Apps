//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCashTransaction-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUCashTransaction : NSObject <SOJUCashTransaction>
{
    NSString *_conversationId;
    NSString *_transactionId;
    NSString *_senderId;
    NSString *_senderUsername;
    NSString *_recipientId;
    NSString *_recipientUsername;
    NSNumber *_amount;
    NSString *_currencyCode;
    NSString *_message;
    NSArray *_textAttributeArray;
    NSArray *_mediaCardAttributeArray;
    NSArray *_cashTagArray;
    NSString *_cashTags;
    NSNumber *_createdAt;
    NSNumber *_lastUpdatedAt;
    NSNumber *_status;
    NSNumber *_invisible;
    NSNumber *_senderViewed;
    NSNumber *_recipientViewed;
    NSNumber *_senderSaved;
    NSNumber *_senderSaveVersion;
    NSNumber *_recipientSaved;
    NSNumber *_recipientSaveVersion;
    NSNumber *_rain;
    NSString *_provider;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(readonly, copy, nonatomic) NSNumber *rain; // @synthesize rain=_rain;
@property(readonly, copy, nonatomic) NSNumber *recipientSaveVersion; // @synthesize recipientSaveVersion=_recipientSaveVersion;
@property(readonly, copy, nonatomic) NSNumber *recipientSaved; // @synthesize recipientSaved=_recipientSaved;
@property(readonly, copy, nonatomic) NSNumber *senderSaveVersion; // @synthesize senderSaveVersion=_senderSaveVersion;
@property(readonly, copy, nonatomic) NSNumber *senderSaved; // @synthesize senderSaved=_senderSaved;
@property(readonly, copy, nonatomic) NSNumber *recipientViewed; // @synthesize recipientViewed=_recipientViewed;
@property(readonly, copy, nonatomic) NSNumber *senderViewed; // @synthesize senderViewed=_senderViewed;
@property(readonly, copy, nonatomic) NSNumber *invisible; // @synthesize invisible=_invisible;
@property(readonly, copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedAt; // @synthesize lastUpdatedAt=_lastUpdatedAt;
@property(readonly, copy, nonatomic) NSNumber *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSString *cashTags; // @synthesize cashTags=_cashTags;
@property(readonly, copy, nonatomic) NSArray *cashTagArray; // @synthesize cashTagArray=_cashTagArray;
@property(readonly, copy, nonatomic) NSArray *mediaCardAttributeArray; // @synthesize mediaCardAttributeArray=_mediaCardAttributeArray;
@property(readonly, copy, nonatomic) NSArray *textAttributeArray; // @synthesize textAttributeArray=_textAttributeArray;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, copy, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) NSString *recipientUsername; // @synthesize recipientUsername=_recipientUsername;
@property(readonly, copy, nonatomic) NSString *recipientId; // @synthesize recipientId=_recipientId;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(readonly, copy, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(readonly, copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
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
- (id)initWithConversationId:(id)arg1 transactionId:(id)arg2 senderId:(id)arg3 senderUsername:(id)arg4 recipientId:(id)arg5 recipientUsername:(id)arg6 amount:(id)arg7 currencyCode:(id)arg8 message:(id)arg9 textAttributeArray:(id)arg10 mediaCardAttributeArray:(id)arg11 cashTagArray:(id)arg12 cashTags:(id)arg13 createdAt:(id)arg14 lastUpdatedAt:(id)arg15 status:(id)arg16 invisible:(id)arg17 senderViewed:(id)arg18 recipientViewed:(id)arg19 senderSaved:(id)arg20 senderSaveVersion:(id)arg21 recipientSaved:(id)arg22 recipientSaveVersion:(id)arg23 rain:(id)arg24 provider:(id)arg25;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)providerEnum;
- (_Bool)rainValue;
- (int)recipientSaveVersionValue;
- (_Bool)recipientSavedValue;
- (int)senderSaveVersionValue;
- (_Bool)senderSavedValue;
- (_Bool)recipientViewedValue;
- (_Bool)senderViewedValue;
- (_Bool)invisibleValue;
- (int)statusValue;
- (long long)lastUpdatedAtValue;
- (long long)createdAtValue;
- (int)amountValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

