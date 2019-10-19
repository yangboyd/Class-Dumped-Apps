//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraTooltipPriorityResolving-Protocol.h"

@class NSMutableArray, NSString, SCAlertViewCoordinator, SCDiscoverFeedStoryTooltipManager, SCLensesTooltipManager, SCUserSession, SCViewPageOnboardingTooltipManager, User;
@protocol SCCameraTooltipPriorityResolverDelegate;

@interface SCCameraTooltipPriorityResolver : NSObject <SCCameraTooltipPriorityResolving>
{
    id <SCCameraTooltipPriorityResolverDelegate> _tooltipPriorityResolverDelegate;
    User *_user;
    SCUserSession *_userSession;
    SCAlertViewCoordinator *_alertViewCoordinator;
    NSMutableArray *_rankedTooltipTypes;
    SCDiscoverFeedStoryTooltipManager *_storyTooltipManager;
    SCViewPageOnboardingTooltipManager *_viewPageOnboardingTooltipManager;
    SCLensesTooltipManager *_lensesTooltipManager;
}

- (void).cxx_destruct;
- (_Bool)_isOtherAlertVisible;
- (_Bool)_isOnMainCamera;
- (_Bool)_isLensesActiveOnCamera;
- (void)_setupTooltipItems;
- (_Bool)_isTooltipAvailable:(unsigned long long)arg1;
- (_Bool)canShowTooltipWithType:(unsigned long long)arg1;
- (id)initWithTooltipPriorityResolverDelegate:(id)arg1 user:(id)arg2 userSession:(id)arg3 alertViewCoordinator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

