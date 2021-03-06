//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAPaymentBaseTransaction.h>

@class NSDictionary, NSString, WAMessageID, WAPaymentMoney, WAUserJID;

@interface WAPaymentBaseTransaction (Core)
- (void)updateMetadataWithResponse:(id)arg1;
- (void)updateWithStatus:(id)arg1 updateLastStatusTimestamp:(_Bool)arg2;
- (void)updateWithStanza:(id)arg1 messageID:(id)arg2;
- (void)updateTransactionTypeWithResponse:(id)arg1;
- (void)updateWithResponse:(id)arg1 messageDate:(id)arg2;
- (void)unfutureproof;
- (void)updateFutureproofWithMetadata:(id)arg1 messageDate:(id)arg2;
- (_Bool)canBeAcceptedWithTransaction:(id)arg1;
- (_Bool)canBeDeclinedWithMessage:(id)arg1;
- (void)updateToCollectRequestWithMessageID:(id)arg1 amount:(id)arg2 localTransactionId:(id)arg3 receiverJID:(id)arg4 senderJID:(id)arg5 groupJID:(id)arg6 messageDate:(id)arg7 expiryDate:(id)arg8;
@property(nonatomic, readonly) WAUserJID *peerJID;
@property(nonatomic, readonly) _Bool hasSenderJID;
@property(nonatomic, readonly) NSString *alternativeSenderName;
@property(nonatomic, readonly) NSString *alternativeReceiverName;
@property(nonatomic, readonly) NSString *amountWithCurrency;
@property(nonatomic, readonly) _Bool isWaitingToAcceptIncomingPayment;
@property(nonatomic, readonly) _Bool isWaitingToAcceptIncomingCollectRequest;
@property(nonatomic, readonly) WAUserJID *receiverJIDForChat;
@property(nonatomic, readonly) _Bool replyable;
@property(nonatomic, readonly) _Bool completed;
@property(nonatomic, readonly) _Bool cancelable;
@property(nonatomic, readonly) _Bool sendable;
@property(nonatomic, readonly) _Bool eligibleForChat;
@property(nonatomic, readonly) _Bool newStatusNeedsToBeAnnounced;
@property(nonatomic, readonly) _Bool needsTitleInNotification;
@property(nonatomic, readonly) _Bool fromMe;
@property(nonatomic, readonly) _Bool toMe;
@property(nonatomic, readonly) unsigned long long originalMessagePaymentType;
@property(nonatomic, readonly) unsigned long long messagePaymentType;
@property(nonatomic, readonly) _Bool collectRequest;
@property(nonatomic, readonly) NSString *countryCode;
@property(nonatomic, retain) WAMessageID *messageID;
@property(nonatomic, readonly) NSString *uniqueId;
@property(nonatomic, readonly) _Bool isValidToReceivePayment;
@property(nonatomic, readonly) WAPaymentMoney *exchangeAmount;
@property(nonatomic, readonly) _Bool shouldDisplayExchangeAmount;
@property(nonatomic, readonly) NSDictionary *supportFields;
@property(nonatomic) long long errorCode;
@end

