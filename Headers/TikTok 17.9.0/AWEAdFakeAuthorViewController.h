//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAdFakeAuthorNewColorConvertViewDelegate-Protocol.h"
#import "AWEPlayVideoMessage-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AWEAdFakeAuthorColorConvertView, AWEAdFakeAuthorNewColorConvertView, AWEAdFakeAuthorPageSheetPresentationProvider, AWEAdLandingWebViewController, AWEAdMoreLinkView, AWEAwemeModel, AWEAwemePlayVideoViewController, AWEPageSheetPresentationNavigationController, NSString, UIImageView, UILabel, UIScrollView, UIView, YYLabel;

@interface AWEAdFakeAuthorViewController : UIViewController <UIScrollViewDelegate, AWEPlayVideoMessage, AWEAdFakeAuthorNewColorConvertViewDelegate>
{
    _Bool _isActive;
    _Bool _shouldImpactFeedback;
    _Bool _shouldTrackHalfToFull;
    _Bool _shouldTrackHalfDismissal;
    AWEAwemeModel *_model;
    UIScrollView *_scrollView;
    UIView *_topContainerView;
    UIImageView *_tipView;
    UIImageView *_avatarView;
    UILabel *_userNameLabel;
    UILabel *_introLabel;
    UILabel *_totalRatingsReviewsLabel;
    YYLabel *_adDescriptionLabel;
    YYLabel *_tagLabel;
    YYLabel *_starLabel;
    AWEAdMoreLinkView *_learnMoreLinkView;
    UIView *_closestView;
    AWEAwemePlayVideoViewController *_videoController;
    AWEAdFakeAuthorColorConvertView *_convertView;
    AWEAdFakeAuthorNewColorConvertView *_draggableConvertView;
    AWEAdFakeAuthorNewColorConvertView *_snapShotConvertView;
    AWEAdLandingWebViewController *_landingWebViewController;
    AWEPageSheetPresentationNavigationController *_presentationContainer;
    AWEAdFakeAuthorPageSheetPresentationProvider *_interactionController;
    double _initialTime;
}

+ (void)setPlayTime:(double)arg1;
+ (double)playTime;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldTrackHalfDismissal; // @synthesize shouldTrackHalfDismissal=_shouldTrackHalfDismissal;
@property(nonatomic) _Bool shouldTrackHalfToFull; // @synthesize shouldTrackHalfToFull=_shouldTrackHalfToFull;
@property(nonatomic) _Bool shouldImpactFeedback; // @synthesize shouldImpactFeedback=_shouldImpactFeedback;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) double initialTime; // @synthesize initialTime=_initialTime;
@property(retain, nonatomic) AWEAdFakeAuthorPageSheetPresentationProvider *interactionController; // @synthesize interactionController=_interactionController;
@property(retain, nonatomic) AWEPageSheetPresentationNavigationController *presentationContainer; // @synthesize presentationContainer=_presentationContainer;
@property(retain, nonatomic) AWEAdLandingWebViewController *landingWebViewController; // @synthesize landingWebViewController=_landingWebViewController;
@property(retain, nonatomic) AWEAdFakeAuthorNewColorConvertView *snapShotConvertView; // @synthesize snapShotConvertView=_snapShotConvertView;
@property(retain, nonatomic) AWEAdFakeAuthorNewColorConvertView *draggableConvertView; // @synthesize draggableConvertView=_draggableConvertView;
@property(retain, nonatomic) AWEAdFakeAuthorColorConvertView *convertView; // @synthesize convertView=_convertView;
@property(retain, nonatomic) AWEAwemePlayVideoViewController *videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) UIView *closestView; // @synthesize closestView=_closestView;
@property(retain, nonatomic) AWEAdMoreLinkView *learnMoreLinkView; // @synthesize learnMoreLinkView=_learnMoreLinkView;
@property(retain, nonatomic) YYLabel *starLabel; // @synthesize starLabel=_starLabel;
@property(retain, nonatomic) YYLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) YYLabel *adDescriptionLabel; // @synthesize adDescriptionLabel=_adDescriptionLabel;
@property(retain, nonatomic) UILabel *totalRatingsReviewsLabel; // @synthesize totalRatingsReviewsLabel=_totalRatingsReviewsLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) _Bool shouldLandingWebView;
- (void)onVideoPlayerClicked;
- (void)onConverViewClicked;
- (void)scrollViewDidScroll:(id)arg1;
- (void)playerDidReadyForDisplay:(id)arg1;
- (void)initVideoController;
- (void)playIfActive;
- (void)handlePageSheetDidEndDismissalNotification:(id)arg1;
- (void)handlePageSheetDidTransitionToPhaseNotification:(id)arg1;
- (void)onWindowDidResignKeyNotification:(id)arg1;
- (void)onWindowDidBecomeKeyNotification:(id)arg1;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)onAppllicationWillTerminate;
- (void)handleLightLandingWebViewControllerWillShowNotification:(id)arg1;
- (void)setUpLandingObserverIfNeeded;
- (void)addObserver;
- (void)didDragConvertView:(id)arg1;
- (void)didTapConvertView;
- (void)ABTestHandlerForOldStyle:(CDUnknownBlockType)arg1 newStyle:(CDUnknownBlockType)arg2;
- (void)generateShowingFeedback;
- (void)showTallPanelInitiallyShort;
- (double)draggableConvertViewNormalHeight;
- (id)tagViewWithName:(id)arg1;
- (id)setupStarText;
- (id)setupTagText;
- (id)setupDescriptionText;
- (void)setHeaderContentAlpha:(double)arg1;
- (void)addNavigationView;
- (id)setupDraggableConvertView;
- (void)setupUI;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

