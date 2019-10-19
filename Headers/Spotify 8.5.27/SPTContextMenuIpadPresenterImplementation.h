//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuPresenter-Protocol.h"
#import "SPTContextMenuViewControllerIPadDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class NSString, SPNavigationController, SPTContextMenuViewControllerIPad;
@protocol SPTContextMenuPresenterDelegate;

@interface SPTContextMenuIpadPresenterImplementation : NSObject <UIPopoverPresentationControllerDelegate, SPTContextMenuViewControllerIPadDelegate, SPTContextMenuPresenter>
{
    id <SPTContextMenuPresenterDelegate> _delegate;
    SPTContextMenuViewControllerIPad *_viewController;
    SPNavigationController *_navigationController;
}

@property(readonly, nonatomic) SPNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) SPTContextMenuViewControllerIPad *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <SPTContextMenuPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contextMenuViewControllerIPadDidDismiss:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)dismissAnimated:(_Bool)arg1;
- (void)updateHeaderViewAnimated:(_Bool)arg1;
- (void)presentInViewController:(id)arg1 presentationStyle:(long long)arg2 senderView:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animated:(_Bool)arg5;
- (void)presentWithSenderView:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)presentInViewController:(id)arg1 senderView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

