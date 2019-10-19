//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCMapModalInteractionControllerDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCMapModalInteractionController, UINavigationController, UIView;
@protocol SCMapModalViewControllerSubclass;

@interface SCMapModalViewController : UIViewController <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, SCMapModalInteractionControllerDelegate, SCShakeToReportDelegate, SCPageNameLogging>
{
    UIView *_maskingContainer;
    UINavigationController *_navigationController;
    SCMapModalInteractionController *_interactionController;
    double _topOffset;
    double _presentationProgress;
    double _cornerRadius;
    UIViewController<SCMapModalViewControllerSubclass> *_viewController;
}

@property(readonly, nonatomic) UIViewController<SCMapModalViewControllerSubclass> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (id)defaultProjectNameV2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_onPan:(id)arg1;
@property(readonly, nonatomic) long long interactionType;
- (void)updateInterfaceForSCHeader:(id)arg1;
- (void)_userDidTapHeaderCloseButton;
- (double)mapModalInteractionControllerTotalAnimationDistanceForDismissal:(id)arg1;
- (void)mapModalInteractionController:(id)arg1 getDismissalProgress:(double *)arg2 andProgressVelocity:(double *)arg3 fromGesture:(id)arg4;
- (void)mapModalInteractionController:(id)arg1 setPresentationProgress:(double)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)pageViewName;
- (id)initWithViewController:(id)arg1 topOffset:(double)arg2 interactionType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

