//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseViewController.h>

#import "TWOverlayContentViewControllerProtocol-Protocol.h"

@class NSString, UIButton;
@protocol TWEndBroadcastConfirmationViewControllerInteractionProtocol;

__attribute__((visibility("hidden")))
@interface TWEndBroadcastConfirmationViewController : TWBaseViewController <TWOverlayContentViewControllerProtocol>
{
    id <TWEndBroadcastConfirmationViewControllerInteractionProtocol> _interactionDelegate;
    UIButton *_endButton;
}

- (void).cxx_destruct;
- (void)applyTheme:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)viewWillLayoutSubviews;
- (void)endButtonTapped;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)initWithInteractionDelegate:(id)arg1 themeManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

