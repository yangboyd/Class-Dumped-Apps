//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFluidSwitcherViewController.h"

#import "SBSwitcherAppSuggestionViewControllerDelegate.h"

@class NSString, SBSwitcherAppSuggestionViewController;

@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController <SBSwitcherAppSuggestionViewControllerDelegate>
{
    SBSwitcherAppSuggestionViewController *_appSuggestionController;
}

+ (Class)defaultSwitcherPersonalityClass;
@property(retain, nonatomic) SBSwitcherAppSuggestionViewController *appSuggestionController; // @synthesize appSuggestionController=_appSuggestionController;
- (void).cxx_destruct;
- (long long)orientationForSuggestionViewController:(id)arg1;
- (void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2;
- (void)_setBestAppSuggestion:(id)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)setBestAppSuggestion:(id)arg1;
- (id)bestAppSuggestion;
- (void)fluidSwitcherGestureTransaction:(id)arg1 didBeginGesture:(id)arg2;
- (void)sceneLayoutControllerDidEndLayoutStateTransition:(id)arg1 wasInterrupted:(_Bool)arg2;
- (void)sceneLayoutController:(id)arg1 didBeginLayoutStateTransitionWithContext:(id)arg2;
- (void)performTransitionWithContext:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillLayoutSubviews;
- (_Bool)hasInteractiveContentAtBottomOfScreen;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

