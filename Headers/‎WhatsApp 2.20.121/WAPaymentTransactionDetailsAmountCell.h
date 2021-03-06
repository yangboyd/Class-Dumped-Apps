//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <Payments/WAPaymentTransactionDetailsCellProtocol-Protocol.h>

@class NSString, UIButton, UILabel, WAActivityIndicatorView, WAPaymentBaseTransaction, WAPaymentMoneyTextView;
@protocol WAPaymentTransactionDetailsDelegate;

@interface WAPaymentTransactionDetailsAmountCell : UITableViewCell <WAPaymentTransactionDetailsCellProtocol>
{
    _Bool _loading;
    WAPaymentBaseTransaction *_transaction;
    id <WAPaymentTransactionDetailsDelegate> _delegate;
    WAPaymentMoneyTextView *_amountView;
    UILabel *_amountRuleLabel;
    UILabel *_descriptionLabel;
    UIButton *_primaryButton;
    UIButton *_declineButton;
    UIButton *_cancelButton;
    UIButton *_retryButton;
    UIButton *_acceptPaymentButton;
    WAActivityIndicatorView *_activityIndicatorView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WAActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak UIButton *acceptPaymentButton; // @synthesize acceptPaymentButton=_acceptPaymentButton;
@property(nonatomic) __weak UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(nonatomic) __weak UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *amountRuleLabel; // @synthesize amountRuleLabel=_amountRuleLabel;
@property(nonatomic) __weak WAPaymentMoneyTextView *amountView; // @synthesize amountView=_amountView;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <WAPaymentTransactionDetailsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAPaymentBaseTransaction *transaction; // @synthesize transaction=_transaction;
- (id)accessibilityLabel;
- (id)popupActions;
- (void)handleSelection;
- (void)actionAcceptPayment:(id)arg1;
- (void)actionRetry:(id)arg1;
- (void)actionSingle:(id)arg1;
- (void)actionSecondary:(id)arg1;
- (void)actionPrimary:(id)arg1;
- (void)updateConstraints;
- (void)updateButtonsVisibility;
- (id)buttonsToShow;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

