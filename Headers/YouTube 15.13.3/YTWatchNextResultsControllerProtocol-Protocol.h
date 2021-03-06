//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString, YTCommandResponderEvent, YTDismissModalResponderEvent, YTICommand;
@protocol YTCollectionViewScrollObserver, YTCompanionAdSupportedRenderersProtocol, YTEngagementPanelNavigationControllerEventObserver;

@protocol YTWatchNextResultsControllerProtocol <NSObject>
@property(nonatomic) long long visibleSections;
- (void)collapseLiveChatEngagementPanel;
- (void)maybeShowLiveChatInEngagementPanel;
- (_Bool)isLiveChatInEngagementPanel;
- (_Bool)isLiveChatShowingInEngagementPanel;
- (void)layoutEngagementPanelWithHeight:(double)arg1 animated:(_Bool)arg2;
- (void)dismissAppStorePanelIfNeeded;
- (_Bool)handleAppStorePanelDismissEvent:(YTDismissModalResponderEvent *)arg1;
- (_Bool)handleShowAppStorePanelEvent:(YTCommandResponderEvent *)arg1;
- (_Bool)handleHideEngagementPanelCommand:(YTICommand *)arg1;
- (_Bool)handleShowEngagementPanelCommand:(YTICommand *)arg1;
- (void)removeEngagementPanel:(NSString *)arg1;
- (void)addEngagementPanelsWithModels:(NSMutableArray *)arg1;
- (void)addEngagementPanelScrollObserver:(id <YTCollectionViewScrollObserver>)arg1;
- (void)addEngagementPanelEventObserver:(id <YTEngagementPanelNavigationControllerEventObserver>)arg1;
- (void)removeScrollObserver:(id <YTCollectionViewScrollObserver>)arg1;
- (void)addScrollObserver:(id <YTCollectionViewScrollObserver>)arg1;
- (void)clearCompanionAdIfNeeded;
- (void)hideCompanionAd;
- (void)hideCompanionAdIfNeeded:(long long)arg1;
- (_Bool)isCompanionAdLoaded;
- (NSString *)companionLayoutID;
- (void)setCompanionAd:(id <YTCompanionAdSupportedRenderersProtocol>)arg1 layoutID:(NSString *)arg2;
- (void)setCompanionAd:(id <YTCompanionAdSupportedRenderersProtocol>)arg1;
@end

