//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FVRAnalyticsManagerProtocol-Protocol.h"
#import "FVRAutoCompleteHandlerDelegate-Protocol.h"
#import "FVRNavigationVisibilityProtocol-Protocol.h"
#import "FVRReferralManagerProtocol-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"

@class FVRSearchService, NSDictionary, NSString, UIButton, _TtC6fiverr14FVRSearchField;

@interface FVRBaseViewController : UIViewController <UISearchBarDelegate, FVRAutoCompleteHandlerDelegate, UISearchDisplayDelegate, FVRAnalyticsManagerProtocol, FVRReferralManagerProtocol, FVRNavigationVisibilityProtocol>
{
    UIButton *_menuButton;
    int _activityCounter;
    _TtC6fiverr14FVRSearchField *_inactiveSearchField;
    _Bool _shouldShowSearchBar;
    _Bool _hidesNavigationBar;
    _Bool _isViewVisible;
    _Bool _didAppear;
    UIButton *_searchButton;
    _TtC6fiverr14FVRSearchField *_searchField;
    FVRSearchService *_searchService;
    NSString *_ctxId;
    NSDictionary *_mixpanelPayload;
}

@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(retain, nonatomic) NSDictionary *mixpanelPayload; // @synthesize mixpanelPayload=_mixpanelPayload;
@property(retain, nonatomic) NSString *ctxId; // @synthesize ctxId=_ctxId;
@property(retain, nonatomic) FVRSearchService *searchService; // @synthesize searchService=_searchService;
@property(nonatomic) _Bool isViewVisible; // @synthesize isViewVisible=_isViewVisible;
@property(nonatomic) _Bool hidesNavigationBar; // @synthesize hidesNavigationBar=_hidesNavigationBar;
@property(nonatomic) _Bool shouldShowSearchBar; // @synthesize shouldShowSearchBar=_shouldShowSearchBar;
@property(nonatomic) __weak _TtC6fiverr14FVRSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
- (void).cxx_destruct;
- (void)referralManagerViewWillAppearReport;
- (void)referralManagerViewDidLoadReport;
- (void)analyticsManagerReportShowEvent;
- (id)analyticsManagerScreenName;
- (void)moviePlayerWillExitFullScreen:(id)arg1;
- (void)moviePlayerWillEnterFullScreen:(id)arg1;
- (void)autoCompleteHandler:(id)arg1 searchButtonClickedForQuery:(id)arg2 type:(long long)arg3 mixpanelExtra:(id)arg4;
- (void)autoCompleteHandler:(id)arg1 didSelectUserName:(id)arg2;
- (void)autoCompleteHandler:(id)arg1 didSelectUserId:(id)arg2;
- (void)autoCompleteHandler:(id)arg1 didSelectGigItem:(id)arg2 atIndex:(unsigned long long)arg3 analyticImpression:(id)arg4;
- (void)autoCompleteHandler:(id)arg1 didSelectItem:(id)arg2 mixpanelExtra:(id)arg3;
- (void)searchBackButtonClicked;
- (void)networkChanged:(id)arg1;
- (void)stopVideoPlaying;
- (void)applicationDidEnterBackground;
- (void)appWillEnterForeground;
- (void)loggedOut:(id)arg1;
- (void)loggedIn:(id)arg1;
- (void)appModeNotificationListener:(id)arg1;
- (_Bool)isSearchActive;
- (_Bool)allowUserInteractioWhileLoading;
- (void)presentLoginViewController:(id)arg1;
- (void)pushLoginViewController:(id)arg1;
- (void)openSignUpScreenWith:(id)arg1 autoPrompt:(_Bool)arg2 isBeingPresented:(_Bool)arg3 hideNavigationBar:(_Bool)arg4;
- (void)openLoginScreenModally:(_Bool)arg1 hideNavigationBar:(_Bool)arg2;
- (void)createAndPresentConfirmationPageWithGigItem:(id)arg1 shippingOptions:(long long)arg2 gigQuantity:(id)arg3 resolutionReplyItem:(id)arg4;
- (void)createAndPresentConfirmationPageWithGigItem:(id)arg1 shippingOptions:(long long)arg2 gigQuantity:(id)arg3;
- (void)popToRoot;
- (void)popScreen;
- (void)setupCloseButton;
- (void)setupBackButton;
- (void)setupTitle:(id)arg1;
- (void)animateBadge:(id)arg1;
- (void)searchButtonPressed;
- (id)searchTransitionToSearchVC:(id)arg1;
- (void)showSearchBar:(_Bool)arg1;
- (void)hideLoadingIndicator:(id)arg1;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator:(id)arg1;
- (void)showLoadingIndicator;
- (void)setupView;
- (id)backgroundImage;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearTheFirstTime:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

