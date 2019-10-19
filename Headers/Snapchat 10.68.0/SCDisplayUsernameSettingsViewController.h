//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCPageNameLogging-Protocol.h"
#import "SCTextViewDelegate-Protocol.h"

@class NSString, SCReauthenticationService, SCTextView, SCUserSession, SCUsernameChangeService, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface SCDisplayUsernameSettingsViewController : SCGenericSettingsViewController <SCTextViewDelegate, SCPageNameLogging>
{
    SCReauthenticationService *_reauthenticationService;
    SCUsernameChangeService *_usernameChangeService;
    SCUserSession *_userSession;
    UILabel *_topLabel;
    UIView *_suggestionCheckView;
    UILabel *_suggestionResponseLabel;
    UIActivityIndicatorView *_saveBarActivity;
    SCTextView *_usernameTextView;
    UIButton *_saveBar;
    NSString *_currentDisplayUsername;
    NSString *_usernameInput;
}

@property(retain, nonatomic) NSString *usernameInput; // @synthesize usernameInput=_usernameInput;
- (void).cxx_destruct;
- (void)_updateChangeStatus;
- (void)_clearInputResponse;
- (void)_updateInputResponseLabelWithText:(id)arg1 color:(id)arg2;
- (void)_showCheckLoader:(_Bool)arg1;
- (id)_createLabel:(id)arg1 color:(id)arg2;
- (id)_createTextViewForSettings;
- (void)_checkUsernameAvailabilityWithInput:(id)arg1 andDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_navigateToPasswordConfirmationWithUsername:(id)arg1;
- (void)_showConfirmationDialogWithTitle:(id)arg1;
- (void)leftSwipeCancelled;
- (void)leftSwipePrepare;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
- (void)saveButtonBarPressed:(id)arg1;
- (_Bool)hasUsernameChanged;
- (_Bool)textViewShouldReturn:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setSaveBarTitle:(id)arg1;
- (void)stopSaveBarAnimation;
- (void)startSaveBarAnimation;
- (void)setInputSuccess;
- (void)setInputError:(id)arg1;
- (void)saveButtonBarPressed;
- (void)_createLoadingView;
- (void)_createSaveBar;
- (void)_createTextView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 reauthenticationService:(id)arg2 usernameChangeService:(id)arg3;
- (id)getInfo;
- (id)getTitle;
- (id)pageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

