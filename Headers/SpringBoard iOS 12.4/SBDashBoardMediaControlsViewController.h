//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "MRPlatterViewControllerDelegate.h"
#import "SBDashBoardAdjunctItemHosting.h"

@class MRPlatterViewController, NSString;

@interface SBDashBoardMediaControlsViewController : SBDashBoardViewControllerBase <MRPlatterViewControllerDelegate, SBDashBoardAdjunctItemHosting>
{
    MRPlatterViewController *_platterViewController;
    struct CGSize _containerSize;
}

+ (Class)viewClass;
- (void).cxx_destruct;
- (struct CGRect)_suggestedFrameForMediaControls;
- (void)_updatePersistentUpdatesEnabled:(_Bool)arg1;
- (void)_layoutMediaControls;
- (void)setVibrantStylingProvider:(id)arg1;
- (void)setContainerSize:(struct CGSize)arg1;
- (void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationType;
- (struct CGSize)preferredContentSize;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

