//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>

@class NSObject, NSString, WAUserJID;
@protocol WAXOutgoingStanzaElementNoviPaymentPayPrecheckRequest_Account_Amount;

@protocol WAXOutgoingStanzaElementNoviPaymentPayPrecheckRequest_Account <NSObject>
@property(readonly, nonatomic) NSObject<WAXOutgoingStanzaElementNoviPaymentPayPrecheckRequest_Account_Amount> *amount;
@property(readonly, nonatomic) WAUserJID *receiver;
@property(readonly, copy, nonatomic) NSString *session_token;
@property(readonly, copy, nonatomic) NSString *action;
@end

