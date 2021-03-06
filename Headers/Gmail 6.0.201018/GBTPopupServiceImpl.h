//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTPopupService-Protocol.h"
#import "UIAdaptivePresentationControllerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class IPadPopupController, NSString, UIView, UIViewController;

@interface GBTPopupServiceImpl : NSObject <UIPopoverPresentationControllerDelegate, UIAdaptivePresentationControllerDelegate, GBTPopupService>
{
    UIView *_maskView;
    UIView *_popupTriggeringView;
    UIViewController *_popupViewController;
    IPadPopupController *_legacyIPadPopupController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IPadPopupController *legacyIPadPopupController; // @synthesize legacyIPadPopupController=_legacyIPadPopupController;
@property(readonly, nonatomic) UIViewController *popupViewController; // @synthesize popupViewController=_popupViewController;
- (void)presentationControllerDidDismiss:(id)arg1;
- (_Bool)presentationControllerShouldDismiss:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (_Bool)showingPopup;
- (_Bool)dismissIPadPopupControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPopupViewControllerWithIgnoreIPadPopover:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissPopupViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPopupViewController;
- (void)presentPopupViewController:(id)arg1 triggeringView:(id)arg2 showDimmedMask:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentPopupViewController:(id)arg1;
- (void)presentLegacyIPadPopupController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

