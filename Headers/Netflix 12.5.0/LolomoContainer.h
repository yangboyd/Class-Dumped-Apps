//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAccessibilityIdentification-Protocol.h"

@class LolomoViewController, NFUILolomoRequest, NSString;

@interface LolomoContainer : UIViewController <UIAccessibilityIdentification>
{
    NFUILolomoRequest *_pendingLolomoRequest;
    LolomoViewController *_lolomoViewController;
    NSString *_accessibilityIdentifier;
}

@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) LolomoViewController *lolomoViewController; // @synthesize lolomoViewController=_lolomoViewController;
@property(retain, nonatomic) NFUILolomoRequest *pendingLolomoRequest; // @synthesize pendingLolomoRequest=_pendingLolomoRequest;
- (void).cxx_destruct;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerContainingSegueSource:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidLoad;
- (id)enqueueRefresh:(_Bool)arg1;
- (id)enqueueFetch:(id)arg1;
- (void)setLolomoViewController:(id)arg1 animated:(_Bool)arg2;
- (id)lolomoTransition:(_Bool)arg1;
- (void)willSetLolomoController:(id)arg1;
- (id)createLolomoViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

