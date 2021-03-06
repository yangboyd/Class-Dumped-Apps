//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPopoverPresentationController.h>

@protocol PSPDFAdaptivePresentationDelegate;

@interface PSPDFAdaptivePopoverPresentationController : UIPopoverPresentationController
{
    id <PSPDFAdaptivePresentationDelegate> _adaptivePresentationDelegate;
}

@property(nonatomic) __weak id <PSPDFAdaptivePresentationDelegate> adaptivePresentationDelegate; // @synthesize adaptivePresentationDelegate=_adaptivePresentationDelegate;
- (void).cxx_destruct;
- (long long)presentationStyle;
- (id)overrideTraitCollection;
- (long long)adaptivePresentationStyleForTraitCollection:(id)arg1;
- (long long)adaptivePresentationStyle;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

