//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView, UILabel, UITextField, UITextView, UIView, _TtC3DLS6Button;

@interface _TtC14DoordashDriver37SignatureConfirmationViewControllerV2 : UIViewController
{
    // Error parsing type: , name: recipientNameLabel
    // Error parsing type: , name: recipientTextField
    // Error parsing type: , name: recipientRelationshipView
    // Error parsing type: , name: recipientRelationshipLabel
    // Error parsing type: , name: recipientRelationshipTextField
    // Error parsing type: , name: manualRelationshipTextField
    // Error parsing type: , name: confirmationTitleLabel
    // Error parsing type: , name: signatureDrawImage
    // Error parsing type: , name: disclaimerTextView
    // Error parsing type: , name: signatureClearButton
    // Error parsing type: , name: continueButton
    // Error parsing type: , name: _deliverySignatureService
    // Error parsing type: , name: recipientName
    // Error parsing type: , name: deliveryId
    // Error parsing type: , name: onNext
    // Error parsing type: , name: swiped
    // Error parsing type: , name: lastPoint
    // Error parsing type: , name: signatureIsWithinBounds
    // Error parsing type: , name: pickerView
    // Error parsing type: , name: selectedRelationshipOption
    // Error parsing type: , name: requiresRelationship
    // Error parsing type: , name: manualEntryRecipientRelationship
    // Error parsing type: , name: viewState
    // Error parsing type: , name: onHelpSelected
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)helpButtonTapped:(id)arg1;
- (void)recipientTextFieldChanged:(id)arg1;
- (void)manualRelationshipTextFieldChanged:(id)arg1;
- (void)onContinueTap:(id)arg1;
- (void)onClearSignatureTap:(id)arg1;
- (void)onEditingDidEnd:(id)arg1;
- (void)onReturnKeyTapped:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak _TtC3DLS6Button *continueButton; // @synthesize continueButton;
@property(nonatomic) __weak UIButton *signatureClearButton; // @synthesize signatureClearButton;
@property(nonatomic) __weak UITextView *disclaimerTextView; // @synthesize disclaimerTextView;
@property(nonatomic) __weak UIImageView *signatureDrawImage; // @synthesize signatureDrawImage;
@property(nonatomic) __weak UILabel *confirmationTitleLabel; // @synthesize confirmationTitleLabel;
@property(nonatomic, retain) UITextField *manualRelationshipTextField; // @synthesize manualRelationshipTextField;
@property(nonatomic) __weak UITextField *recipientRelationshipTextField; // @synthesize recipientRelationshipTextField;
@property(nonatomic) __weak UILabel *recipientRelationshipLabel; // @synthesize recipientRelationshipLabel;
@property(nonatomic, retain) UIView *recipientRelationshipView; // @synthesize recipientRelationshipView;
@property(nonatomic) __weak UITextField *recipientTextField; // @synthesize recipientTextField;
@property(nonatomic) __weak UILabel *recipientNameLabel; // @synthesize recipientNameLabel;

@end

