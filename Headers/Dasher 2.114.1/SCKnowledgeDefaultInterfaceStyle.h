//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServiceKnowledge/SCInterfaceAction-Protocol.h>
#import <ServiceKnowledge/SCInterfaceEventResponder-Protocol.h>
#import <ServiceKnowledge/SCInterfacePresentation-Protocol.h>
#import <ServiceKnowledge/SCInterfaceStyle-Protocol.h>
#import <ServiceKnowledge/SCOverlayPresentationControllerDelegate-Protocol.h>
#import <ServiceKnowledge/UINavigationControllerDelegate-Protocol.h>
#import <ServiceKnowledge/UISplitViewControllerDelegate-Protocol.h>

@class NSString, SCInterfaceRouter, SCSArticlePreview, SCSPresentationWindow;

@interface SCKnowledgeDefaultInterfaceStyle : NSObject <SCOverlayPresentationControllerDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, SCInterfaceStyle, SCInterfacePresentation, SCInterfaceEventResponder, SCInterfaceAction>
{
    NSString *_style;
    SCInterfaceRouter *_router;
    SCSArticlePreview *_articlePreview;
    SCSPresentationWindow *_presentationWindow;
}

+ (void)load;
@property(retain, nonatomic) SCSPresentationWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property(retain, nonatomic) SCSArticlePreview *articlePreview; // @synthesize articlePreview=_articlePreview;
@property(nonatomic) __weak SCInterfaceRouter *router; // @synthesize router=_router;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (_Bool)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3;
- (_Bool)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)primaryViewControllerForExpandingSplitViewController:(id)arg1;
- (id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
- (long long)targetDisplayModeForActionInSplitViewController:(id)arg1;
- (_Bool)prefersActionContainerHiddenForController:(id)arg1;
- (long long)preferredSortIndexForInterfaceAction:(id)arg1;
- (id)eventNameForInterfaceAction:(id)arg1;
- (id)actionItemForInterfaceAction:(id)arg1;
- (id)availableInterfaceActions;
- (void)showViewController:(id)arg1 fromEvent:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)interactionReceivedWithEvent:(id)arg1;
- (id)viewControllerForEvent:(id)arg1;
- (_Bool)supportsEventsWithName:(id)arg1;
- (id)presentationWindowForEvent:(id)arg1;
- (void)overlayPresentationController:(id)arg1 backgroundViewTapped:(id)arg2;
- (_Bool)applyStyleToPresentationController:(id)arg1;
- (id)transitioningDelegateForPresentedController:(id)arg1 presentingController:(id)arg2;
- (id)searchableControllerWithinController:(id)arg1;
- (void)showSearchInterface:(id)arg1;
- (id)knowledgeInterface;
- (id)fromControllerForEvent:(id)arg1;
- (id)topControllerForViewController:(id)arg1;
- (id)currentArticleViewControllerForEvent:(id)arg1;
- (id)currentNavigationControllerForEvent:(id)arg1;
- (id)initWithRouter:(id)arg1 interfaceStyle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

