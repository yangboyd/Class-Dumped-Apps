//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Adjust/NSCopying-Protocol.h>

@class NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;
@protocol ADJLogger;

@interface ADJEvent : NSObject <NSCopying>
{
    _Bool _emptyReceipt;
    NSNumber *_revenue;
    NSString *_eventToken;
    NSString *_transactionId;
    NSString *_currency;
    NSData *_receipt;
    id <ADJLogger> _logger;
    NSMutableDictionary *_callbackMutableParameters;
    NSMutableDictionary *_partnerMutableParameters;
}

+ (id)eventWithEventToken:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *partnerMutableParameters; // @synthesize partnerMutableParameters=_partnerMutableParameters;
@property(retain, nonatomic) NSMutableDictionary *callbackMutableParameters; // @synthesize callbackMutableParameters=_callbackMutableParameters;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) _Bool emptyReceipt; // @synthesize emptyReceipt=_emptyReceipt;
@property(readonly, copy, nonatomic) NSData *receipt; // @synthesize receipt=_receipt;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, copy, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(readonly, copy, nonatomic) NSNumber *revenue; // @synthesize revenue=_revenue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)checkReceipt:(id)arg1 transactionId:(id)arg2;
- (void)setReceipt:(id)arg1 transactionId:(id)arg2;
- (_Bool)isValid;
- (_Bool)checkRevenue:(id)arg1 currency:(id)arg2;
- (_Bool)checkEventToken:(id)arg1;
@property(readonly, nonatomic) NSDictionary *partnerParameters;
@property(readonly, nonatomic) NSDictionary *callbackParameters;
- (void)setTransactionId:(id)arg1;
- (void)setRevenue:(double)arg1 currency:(id)arg2;
- (void)addPartnerParameter:(id)arg1 value:(id)arg2;
- (void)addCallbackParameter:(id)arg1 value:(id)arg2;
- (id)initWithEventToken:(id)arg1;

@end

