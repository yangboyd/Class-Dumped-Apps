//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class UIPresentationController, UITraitCollection;
@protocol UIViewControllerTransitionCoordinator;

@protocol PSPDFAdaptivePresentationDelegate <NSObject>
- (void)presentationController:(UIPresentationController *)arg1 willPresentWithTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)presentationController:(UIPresentationController *)arg1 viewWillTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)presentationController:(UIPresentationController *)arg1 willTransitionToTraitCollection:(UITraitCollection *)arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
@end

