//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTGraftingViewController-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTTopController-Protocol.h"

@class GIMMe, NSString, YTICommand, YTIPhoneVerificationIntroRenderer, YTPhoneVerificationIntroView;
@protocol YTResponder;

@interface YTPhoneVerificationIntroViewController : UIViewController <YTGraftingViewController, YTResponder, YTTopController>
{
    YTPhoneVerificationIntroView *_phoneVerificationIntroView;
    YTIPhoneVerificationIntroRenderer *_phoneVerificationIntroRenderer;
    YTICommand *_navigationEndpoint;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)handleButtonRenderer:(id)arg1;
- (void)showDialogsWithRenderers:(id)arg1;
- (void)didTapLearnMoreButton;
- (void)didTapGetStartedButton;
- (void)didTapCloseButton;
- (void)dismissViewController;
- (void)registerEventHandlers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)navEndpoint;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

