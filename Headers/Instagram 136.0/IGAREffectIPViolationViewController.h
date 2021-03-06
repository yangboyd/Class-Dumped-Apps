//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGAREffectIPViolationViewDelegate-Protocol.h>

@class IGAREffectIPViolationView, IGAREffectIPViolationViewModel, IGUserSession, NSString;

@interface IGAREffectIPViolationViewController : UIViewController <IGAREffectIPViolationViewDelegate>
{
    IGAREffectIPViolationViewModel *_viewModel;
    IGAREffectIPViolationView *_ipViolationView;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)arEffectIPViolationViewDidTapCTA:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;
- (void)configureWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

