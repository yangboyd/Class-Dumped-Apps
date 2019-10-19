//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTHomeLogger, SPTHomeNavigationButton, SPTTheme;
@protocol SPTBarButtonItemManager, SPTFeedFeatureFlags, SPTFeedHeartBeatManager, SPTHomeTestManager, SPTLinkDispatcher;

@interface SPTHomeNavigationItemDecorator : NSObject
{
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTHomeLogger *_homeLogger;
    SPTTheme *_theme;
    id <SPTFeedFeatureFlags> _feedFeatureFlagManager;
    id <SPTFeedHeartBeatManager> _feedHeartbeatManager;
    id <SPTHomeTestManager> _testManager;
    SPTHomeNavigationButton *_settingsButton;
    SPTHomeNavigationButton *_feedButton;
}

@property(retain, nonatomic) SPTHomeNavigationButton *feedButton; // @synthesize feedButton=_feedButton;
@property(retain, nonatomic) SPTHomeNavigationButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(readonly, nonatomic) __weak id <SPTHomeTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTFeedHeartBeatManager> feedHeartbeatManager; // @synthesize feedHeartbeatManager=_feedHeartbeatManager;
@property(readonly, nonatomic) id <SPTFeedFeatureFlags> feedFeatureFlagManager; // @synthesize feedFeatureFlagManager=_feedFeatureFlagManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTHomeLogger *homeLogger; // @synthesize homeLogger=_homeLogger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
- (void).cxx_destruct;
- (void)updateFeedIcon:(_Bool)arg1 navigationItem:(id)arg2;
- (void)updateFeedNavigationItemIfNeeded:(id)arg1;
- (void)feedButtonPressed:(id)arg1;
- (void)settingsButtonPressed;
- (id)leftItems;
- (id)rightItems;
- (void)updateNavigationItemDecoratorAlpha:(double)arg1;
- (void)decoratePageController:(id)arg1;
- (id)initWithBarButtonItemManager:(id)arg1 linkDispatcher:(id)arg2 homeLogger:(id)arg3 theme:(id)arg4 feedFeatureFlagManager:(id)arg5 feedHeartbeatManager:(id)arg6 testManager:(id)arg7;

@end

