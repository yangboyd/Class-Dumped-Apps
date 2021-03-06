//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGAnalyticsModule-Protocol.h>
#import <InstagramAppCoreFramework/IGRegistrationAccountPrivacyContainerViewDelegate-Protocol.h>

@class IGRegistrationAccountPrivacyContainerView, NSString;
@protocol IGRegistrationAccountPrivacyViewControllerDelegate;

@interface IGRegistrationAccountPrivacyViewController : UIViewController <IGAnalyticsModule, IGRegistrationAccountPrivacyContainerViewDelegate>
{
    IGRegistrationAccountPrivacyContainerView *_containerView;
    _Bool _privateOptionSelected;
    id <IGRegistrationAccountPrivacyViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationAccountPrivacyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)containerView:(id)arg1 didToggleRadioWithIsPublic:(_Bool)arg2;
- (void)containerViewDidTapNextButton:(id)arg1;
- (id)analyticsModule;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithIsPrivateByDefault:(_Bool)arg1 showPrivateOptionFirst:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

