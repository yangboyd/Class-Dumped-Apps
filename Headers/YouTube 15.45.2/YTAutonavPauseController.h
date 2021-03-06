//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEngagementPanelContainerControllerEventObserver-Protocol.h"
#import "YTNGWatchContainerViewControllerEventObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSMutableArray, NSString, YTEngagementPanelNavigationController;
@protocol YTAutonavPauseControllerDelegate, YTEngagementPanelContainerController;

@interface YTAutonavPauseController : NSObject <YTEngagementPanelContainerControllerEventObserver, YTSystemNotificationsObserver, YTNGWatchContainerViewControllerEventObserver>
{
    id <YTAutonavPauseControllerDelegate> _delegate;
    _Bool _keyboardShown;
    YTEngagementPanelNavigationController *_visibleEngagementPanelNavigationController;
    _Bool _shouldCancelAutonavFromSwipe;
    _Bool _isTransitioningWatchViewLayout;
    NSMutableArray *_scrollObservers;
    _Bool _isCancelled;
    GIMMe *_gimme;
    id <YTEngagementPanelContainerController> _engagementPanelContainerController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTEngagementPanelContainerController> engagementPanelContainerController; // @synthesize engagementPanelContainerController=_engagementPanelContainerController;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)setIsCancelled:(_Bool)arg1;
- (_Bool)collectionViewIsScrolling;
- (void)maybeUpdateCountdownDelegate;
- (void)watchContainerViewControllerDidEndLayoutTransition;
- (void)watchContainerViewControllerDidBeginLayoutTransition;
- (void)engagementPanelContainerControllerWillCollapseTopEngagementPanelNavigationView:(id)arg1;
- (void)engagementPanelContainerController:(id)arg1 willPresentEngagementPanelRootNavigationViewAndRetainHeight:(_Bool)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)scrollObserver;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

