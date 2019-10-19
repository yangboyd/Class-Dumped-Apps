//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnboardingTooltipManager.h"

@class MainViewController, SCCheetahMyStoryManagementTooltip, SCCheetahMyStoryViewTooltip, SCCheetahTooltipGroupStory, SCGalleryAutoSaveTooltip, SCUserSession, UIView;
@protocol SCTooltip;

@interface SCDiscoverFeedStoryTooltipManager : SCOnboardingTooltipManager
{
    SCCheetahMyStoryViewTooltip *_myStoryViewTooltip;
    SCCheetahMyStoryManagementTooltip *_myStoryManagementTooltip;
    SCGalleryAutoSaveTooltip *_galleryAutoSaveTooltip;
    SCCheetahTooltipGroupStory *_groupStoryTooltip;
    SCUserSession *_userSession;
    UIView *_parentView;
    MainViewController *_mainViewController;
}

@property(nonatomic) __weak MainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(readonly, nonatomic) id <SCTooltip> galleryAutoSaveTooltip; // @synthesize galleryAutoSaveTooltip=_galleryAutoSaveTooltip;
@property(readonly, nonatomic) id <SCTooltip> myStoryManagementTooltip; // @synthesize myStoryManagementTooltip=_myStoryManagementTooltip;
@property(readonly, nonatomic) id <SCTooltip> myStoryViewTooltip; // @synthesize myStoryViewTooltip=_myStoryViewTooltip;
- (void).cxx_destruct;
- (void)markTooltipCompleted:(id)arg1;
- (id)getNextAvailableTooltip;
- (void)hideStoryOnboardingTooltips;
- (void)showGroupStoryTooltipIfPossibleWithDisplayName:(id)arg1 storyType:(long long)arg2 source:(long long)arg3;
- (void)setupWithParentView:(id)arg1 withMainViewController:(id)arg2;
- (id)initWithUserSession:(id)arg1;

@end

