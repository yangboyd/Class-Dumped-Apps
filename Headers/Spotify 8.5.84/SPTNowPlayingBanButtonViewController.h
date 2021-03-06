//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingAuxiliaryActionsHandlerObserver-Protocol.h"
#import "SPTNowPlayingModelObserver-Protocol.h"

@class NSString, SPTNowPlayingButton, SPTNowPlayingModel, SPTTheme;
@protocol SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingTestManager;

@interface SPTNowPlayingBanButtonViewController : UIViewController <SPTNowPlayingModelObserver, SPTNowPlayingAuxiliaryActionsHandlerObserver>
{
    SPTNowPlayingModel *_model;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    id <SPTNowPlayingTestManager> _testManager;
    SPTTheme *_theme;
    SPTNowPlayingButton *_banButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTNowPlayingButton *banButton; // @synthesize banButton=_banButton;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (unsigned long long)negativeFeedbackType;
- (void)updateBanButton;
- (void)toggleBanState:(id)arg1;
- (void)auxiliaryActionsHandlerDidToggleCollectionState:(id)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithModel:(id)arg1 auxiliaryActionsHandler:(id)arg2 testManager:(id)arg3 theme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

