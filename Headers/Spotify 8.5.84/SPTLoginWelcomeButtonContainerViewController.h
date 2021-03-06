//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginWelcomeButtonViewController-Protocol.h"

@class NSString, SPTLoginActionButtonManager, SPTLoginTheme, SPTLoginWelcomeButtonContainerViewModel;
@protocol SPTLoginViewWithActionButtonsConfigurable><GLUEStyleable;

@interface SPTLoginWelcomeButtonContainerViewController : UIViewController <SPTLoginWelcomeButtonViewController>
{
    SPTLoginWelcomeButtonContainerViewModel *_viewModel;
    SPTLoginTheme *_theme;
    SPTLoginActionButtonManager *_actionButtonManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTLoginActionButtonManager *actionButtonManager; // @synthesize actionButtonManager=_actionButtonManager;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLoginWelcomeButtonContainerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)setDelegate:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 actionButtonManager:(id)arg2 viewModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <SPTLoginViewWithActionButtonsConfigurable><GLUEStyleable> view; // @dynamic view;

@end

