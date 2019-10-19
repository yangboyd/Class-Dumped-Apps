//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApplePayManagerProtocol-Protocol.h"
#import "FVRAddCreditCardViewControllerDelegate-Protocol.h"
#import "PayPalAssociateManagerProtocol-Protocol.h"

@class ApplePayManager, FVRPaymentProcessingViewController, NSDate, NSString, NSTimer, PayPalAssociateManager, _TtC6fiverr11Transaction, _TtC6fiverr20PaymentScreenManager;
@protocol FVRPaymentManagerDelegate;

@interface FVRPaymentManager : NSObject <PayPalAssociateManagerProtocol, ApplePayManagerProtocol, FVRAddCreditCardViewControllerDelegate>
{
    id <FVRPaymentManagerDelegate> _delegate;
    _TtC6fiverr11Transaction *_transaction;
    _TtC6fiverr20PaymentScreenManager *_paymentScreenManager;
    PayPalAssociateManager *_payPalAssociateManager;
    ApplePayManager *_applePayManager;
    NSDate *_lastChanceToCheck;
    long long _timeToWaitForOrder;
    NSTimer *_timeoutTimer;
    FVRPaymentProcessingViewController *_processingViewController;
    NSString *_type;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) FVRPaymentProcessingViewController *processingViewController; // @synthesize processingViewController=_processingViewController;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) long long timeToWaitForOrder; // @synthesize timeToWaitForOrder=_timeToWaitForOrder;
@property(retain, nonatomic) NSDate *lastChanceToCheck; // @synthesize lastChanceToCheck=_lastChanceToCheck;
@property(retain, nonatomic) ApplePayManager *applePayManager; // @synthesize applePayManager=_applePayManager;
@property(retain, nonatomic) PayPalAssociateManager *payPalAssociateManager; // @synthesize payPalAssociateManager=_payPalAssociateManager;
@property(retain, nonatomic) _TtC6fiverr20PaymentScreenManager *paymentScreenManager; // @synthesize paymentScreenManager=_paymentScreenManager;
@property(retain, nonatomic) _TtC6fiverr11Transaction *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) __weak id <FVRPaymentManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)orderCreationCompleted:(id)arg1;
- (void)reportAppsFlyerOrderEvent:(id)arg1;
- (void)userCompletedPurchaseReportAnalytics;
- (id)init;
- (void)checkOrderExistanceWith:(id)arg1 shouldReportAnalytics:(_Bool)arg2;
- (void)payWith:(id)arg1 withAnimation:(_Bool)arg2;
- (id)payPalAssociateManagerViewControllerToPresentOn;
- (void)payPalAssociateManagerDidClosed;
- (void)payPalAssociateManagerDidFailuedWithError:(id)arg1;
- (void)payPalAssociateManagerDidSucceededWithTransaction:(id)arg1;
- (void)applePayProcessDidSuccesedWithTransaction:(id)arg1;
- (void)applePayProcessDidFailWithError:(id)arg1;
- (id)applePayViewControllerToPresentPaymentAuthorization;
- (void)applePayProcessDidCancel;
- (void)payButtonWasClicked;
- (void)didGoBack;
- (void)didReceiveWarningFor:(id)arg1;
- (void)didAddCreditCard:(id)arg1 fourLastDigits:(id)arg2 ppcResponse:(id)arg3;
- (void)didStartAuthenticating:(id)arg1;

@end

