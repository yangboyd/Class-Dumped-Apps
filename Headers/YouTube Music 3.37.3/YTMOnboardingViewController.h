//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTAccountsListResponseDataDelegate-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTMOnboardingVideoViewDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSString, UIImageView, UILabel, YTAccountsListResponseData, YTGoogleAccount, YTIAccountItemRenderer, YTICommand, YTMFirstTimeSignInView, YTMOnboardingVideoView, YTMSpinnableButton, YTThumbnailController;
@protocol YTMOnboardingViewControllerDelegate, YTResponder;

@interface YTMOnboardingViewController : UIViewController <YTMOnboardingVideoViewDelegate, YTAccountsListResponseDataDelegate, YTSystemNotificationsObserver, YTGraftingViewController, YTResponder>
{
    UIImageView *_logoView;
    UIImageView *_backgroundImageView;
    UILabel *_titleLabel;
    _Bool _didAppearOnce;
    _Bool _videoLoaded;
    YTICommand *_navEndpoint;
    YTGoogleAccount *_lastDeviceGoogleAccount;
    YTAccountsListResponseData *_accountsListResponseData;
    long long _fetchAttemptsCount;
    YTIAccountItemRenderer *_accountItem;
    YTThumbnailController *_thumbnailController;
    _Bool _didTapChooseAccount;
    _Bool _suggestAccount;
    YTMSpinnableButton *_signInButton;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTMOnboardingViewControllerDelegate> _delegate;
    YTMFirstTimeSignInView *_firstTimeSignInView;
    YTMOnboardingVideoView *_videoView;
}

@property(retain, nonatomic) YTMOnboardingVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) YTMFirstTimeSignInView *firstTimeSignInView; // @synthesize firstTimeSignInView=_firstTimeSignInView;
@property(nonatomic) __weak id <YTMOnboardingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)createSignInButton;
- (void)createFirstTimeSignInView;
- (id)launchImage;
- (id)textLabelWithShadow;
- (void)fadePlayerInAndStartPlayback;
- (void)maybeTryAgain;
- (void)fetchAndUpdateCurrentUser:(id)arg1;
- (void)didTapSignInButton;
- (void)appWillEnterForeground:(id)arg1;
- (void)onboardingVideoViewDidLoadVideo:(id)arg1;
- (id)navEndpoint;
- (void)accountStatusDidChangeForGoogleAccount:(id)arg1 previousStatus:(unsigned long long)arg2 newStatus:(unsigned long long)arg3;
- (void)didTapAlternateAccount:(id)arg1;
- (void)didTapChooseAccount:(id)arg1;
- (void)updateFirstTimeSignInView;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithLastDeviceIdentity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

