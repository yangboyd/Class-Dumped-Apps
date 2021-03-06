//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TMAgeGateViewControllerProtocol-Protocol.h"
#import "TMPassErrorHandlerProtocol-Protocol.h"

@class DYRouterModel, NSString, TMLoginButton, TMLoginInputView, UIDatePicker, UILabel;

@interface TMAgeGateViewController : UIViewController <TMPassErrorHandlerProtocol, TMAgeGateViewControllerProtocol>
{
    _Bool _isFTC;
    _Bool _isDuringRegistering;
    _Bool _shouldHideNav;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    TMLoginInputView *_birthdayTextField;
    TMLoginButton *_nextButton;
    DYRouterModel *_userContext;
    UIDatePicker *_birthdayPicker;
    CDUnknownBlockType _completion;
    NSString *_birthdayString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *birthdayString; // @synthesize birthdayString=_birthdayString;
@property(nonatomic) _Bool shouldHideNav; // @synthesize shouldHideNav=_shouldHideNav;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIDatePicker *birthdayPicker; // @synthesize birthdayPicker=_birthdayPicker;
@property(retain, nonatomic) DYRouterModel *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) TMLoginButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) TMLoginInputView *birthdayTextField; // @synthesize birthdayTextField=_birthdayTextField;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isDuringRegistering; // @synthesize isDuringRegistering=_isDuringRegistering;
@property(nonatomic) _Bool isFTC; // @synthesize isFTC=_isFTC;
- (void)handlePassedError:(id)arg1 customMessage:(id)arg2;
- (void)supportAction;
- (void)closeAction;
- (void)toastOut:(id)arg1;
- (void)checkFTCRegister:(id)arg1 birthday:(id)arg2;
- (void)toastToConitune:(id)arg1;
- (void)trackInfoAndSync:(id)arg1 ageGateMode:(id)arg2;
- (void)ftcAgeGateFlowWithBirthday:(id)arg1;
- (void)trackTermConsentVCShow;
- (id)termConsentViewController;
- (id)platformString:(unsigned long long)arg1;
- (void)nextAction;
- (id)currentPage;
- (void)defaultErrorAlert:(id)arg1;
- (void)showError:(id)arg1;
- (void)setDefaultTime;
- (void)setDateLimit;
- (void)dateChanged;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 isFTC:(_Bool)arg2 isDuringRegistering:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

