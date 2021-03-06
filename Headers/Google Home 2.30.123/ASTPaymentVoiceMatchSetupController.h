//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTPaymentSetupTask-Protocol.h"
#import "ASTPaymentSetupTaskDelegate-Protocol.h"
#import "ASTThemeContainer-Protocol.h"
#import "NVLVisualElementProvider-Protocol.h"

@class ASTReauthenticationController, ASTSettingsMenuService, ASTSettingsViewController, ASTThemableViewController, ASTUIPaymentsSettingsUi, NSArray, NSString, UINavigationController, UIViewController;
@protocol ASTPaymentSetupTaskDelegate;

@interface ASTPaymentVoiceMatchSetupController : NSObject <ASTPaymentSetupTaskDelegate, NVLVisualElementProvider, ASTPaymentSetupTask, ASTThemeContainer>
{
    UIViewController *_parentViewController;
    UINavigationController *_navigationViewController;
    ASTUIPaymentsSettingsUi *_paymentSettings;
    ASTSettingsMenuService *_settingsService;
    ASTReauthenticationController *_reauthenticationController;
    _Bool _isFirstPage;
    _Bool _hasAddOrFixInstrument;
    unsigned long long _ast_theme;
    id <ASTPaymentSetupTaskDelegate> _delegate;
    ASTThemableViewController *_initialViewController;
    ASTThemableViewController *_secondViewController;
    ASTSettingsViewController *_instrumentSelectionController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASTSettingsViewController *instrumentSelectionController; // @synthesize instrumentSelectionController=_instrumentSelectionController;
@property(retain, nonatomic) ASTThemableViewController *secondViewController; // @synthesize secondViewController=_secondViewController;
@property(retain, nonatomic) ASTThemableViewController *initialViewController; // @synthesize initialViewController=_initialViewController;
@property(nonatomic) __weak id <ASTPaymentSetupTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long ast_theme; // @synthesize ast_theme=_ast_theme;
@property(readonly, nonatomic) NSArray *nvl_childVisualElements;
- (void)ast_updateTheme:(unsigned long long)arg1;
- (void)task:(id)arg1 didCompleteWithResult:(_Bool)arg2 data:(id)arg3;
- (void)didTapPaymentVoiceMatchNextButton:(id)arg1;
- (void)updateVoiceMatchOptinSetting:(int)arg1;
- (void)didTapPaymentVoiceMatchSetupOptInButton:(id)arg1;
- (void)didTapPaymentVoiceMatchSetupOptOutButton:(id)arg1;
- (void)presentWithPresentationBlock:(CDUnknownBlockType)arg1;
- (id)initWithPaymentSettings:(id)arg1 settingsService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly) Class superclass;

@end

