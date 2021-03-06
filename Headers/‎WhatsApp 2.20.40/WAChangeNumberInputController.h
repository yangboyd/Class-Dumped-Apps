//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "WAChangeNumberNotificationControllerDelegate-Protocol.h"
#import "WACountryPickerControllerDelegate-Protocol.h"
#import "WAPhoneNumberTextFieldDelegate-Protocol.h"
#import "WARegistrationViewController-Protocol.h"

@class NSArray, NSString, WAChangeNumberNotificationController, WACountryInfo, WACountryNameTableViewCell, WAOverlayView, WAPhoneNumberInputView, WATableRow;
@protocol WAChangeNumberInputControllerDelegate;

@interface WAChangeNumberInputController : WAStaticTableViewController <WAPhoneNumberTextFieldDelegate, WAChangeNumberNotificationControllerDelegate, WACountryPickerControllerDelegate, WARegistrationViewController>
{
    WACountryNameTableViewCell *_cellOldCountry;
    WACountryNameTableViewCell *_cellNewCountry;
    WATableRow *_rowOldPhoneNumber;
    WATableRow *_rowNewPhoneNumber;
    WAPhoneNumberInputView *_oldPhoneNumberInputView;
    WAPhoneNumberInputView *_newPhoneNumberInputView;
    WAOverlayView *_overlayView;
    _Bool _countryCodeWarningShown;
    NSArray *_notificationContacts;
    WAChangeNumberNotificationController *_changeNumberNotificationController;
    id <WAChangeNumberInputControllerDelegate> _delegate;
    WACountryInfo *_selectedCountryOld;
    WACountryInfo *_selectedCountryNew;
}

@property(retain, nonatomic) WACountryInfo *selectedCountryNew; // @synthesize selectedCountryNew=_selectedCountryNew;
@property(retain, nonatomic) WACountryInfo *selectedCountryOld; // @synthesize selectedCountryOld=_selectedCountryOld;
@property(nonatomic) __weak id <WAChangeNumberInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deviceCheckFailedWithError:(id)arg1;
- (void)deviceCheckFinishedWithResult:(id)arg1 session:(id)arg2 loginJID:(id)arg3;
- (void)phoneNumberTextFieldDidChange:(id)arg1;
- (void)phoneNumberTextFieldDidBeginEditing:(id)arg1;
- (void)disableRegistrationDelegate;
- (void)changeNumberNotificationControllerDidFinish:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setUpTableView;
- (void)viewDidLoad;
- (void)countryPicker:(id)arg1 didSelectCountry:(id)arg2;
- (void)showCountryPickerWithTag:(int)arg1;
- (void)newCodeChangedAction:(id)arg1;
- (void)oldCodeChangedAction:(id)arg1;
- (void)nextAction:(id)arg1;
- (void)presentChangeNumberNetworkRequiredAlert;
- (void)presentChangeNumberFormatWarningAlert;
- (void)cancelAction:(id)arg1;
- (_Bool)needToShowPhoneNumberFormatWarning;
- (void)saveCurrentUserParametersAndLockVerificationState;
- (void)proceedToAuthCodeRequestForSession:(id)arg1;
- (void)proceedToTwoFactorInputWithResponse:(id)arg1 session:(id)arg2;
- (void)showAppStoreAlert:(id)arg1;
- (void)showContactSupportAlert:(id)arg1 withContext:(id)arg2;
- (void)performSameDeviceCheckWithPhoneNumber:(id)arg1;
- (void)presentPhoneNumberDoesntMatchAlert;
- (void)presentCouldntConnectToServiceAlert;
- (void)validateOldPhoneNumber:(id)arg1 newPhoneNumber:(id)arg2;
- (void)validateUserInput;
- (void)showOverlay:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

