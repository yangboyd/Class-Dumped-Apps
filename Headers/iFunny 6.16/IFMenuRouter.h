//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFBaseRouter.h>

#import <Funny/IFMenuRouterProtocol-Protocol.h>
#import <Funny/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString;

@interface IFMenuRouter : IFBaseRouter <UIViewControllerTransitioningDelegate, IFMenuRouterProtocol>
{
}

- (id)parentActivityView;
- (id)parentSuccessAlertView;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)showDebugPanel;
- (void)showStudio;
- (void)showChat;
- (id)showProfileWithResultController;
- (void)showProfile;
- (void)showExplore;
- (void)showSubscriptions;
- (void)showOriginals;
- (void)showCollective;
- (void)showFeatured;
- (void)showMap;
- (void)showMenuItemWithItem:(unsigned long long)arg1;
- (void)dissmissMenuController;
- (void)closeMenu;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

