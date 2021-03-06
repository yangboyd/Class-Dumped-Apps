//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <RedditUI/UIGestureRecognizerDelegate-Protocol.h>

@class BaseView;
@protocol _TtP8RedditUI33BottomSheetViewControllerDelegate_;

@interface _TtC8RedditUI25BottomSheetViewController : UIViewController <UIGestureRecognizerDelegate>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: shouldDismissOnDimmerViewTap
    // Error parsing type: , name: dismissOnSwipeDown
    // Error parsing type: , name: expandOnSwipeUp
    // Error parsing type: , name: hasSwipeHandle
    // Error parsing type: , name: contentOccupiesFullHeight
    // Error parsing type: , name: preferredContentHeight
    // Error parsing type: , name: containerView
    // Error parsing type: , name: contentView
    // Error parsing type: , name: dimmerView
    // Error parsing type: , name: swipeHandleViewContrainer
    // Error parsing type: , name: swipeHandleView
    // Error parsing type: , name: contentTopConstraint
    // Error parsing type: , name: contentHeightConstraint
    // Error parsing type: , name: contentMaxHeightConstraint
    // Error parsing type: , name: verticalOffsetConstraint
    // Error parsing type: , name: child
    // Error parsing type: , name: isExpanded
    // Error parsing type: , name: verticalOffset
    // Error parsing type: , name: panStartInfo
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)panWithGesture:(id)arg1;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
- (void)dimmerViewTapped;
- (void)expandToFullSheet;
- (id)initWithCoder:(id)arg1;
- (id)initWithChild:(id)arg1 initialHeight:(double)arg2 isFullSheet:(_Bool)arg3;
@property(nonatomic, readonly) double dismissedVerticalOffset;
@property(nonatomic, readonly) double presentedVerticalOffset;
@property(nonatomic) double verticalOffset; // @synthesize verticalOffset;
@property(nonatomic) double dimmerAlpha;
@property(nonatomic) double contentAlpha;
@property(nonatomic, readonly) BaseView *containerView; // @synthesize containerView;
@property(nonatomic) _Bool contentOccupiesFullHeight; // @synthesize contentOccupiesFullHeight;
@property(nonatomic) _Bool hasSwipeHandle; // @synthesize hasSwipeHandle;
@property(nonatomic) _Bool expandOnSwipeUp; // @synthesize expandOnSwipeUp;
@property(nonatomic) _Bool dismissOnSwipeDown; // @synthesize dismissOnSwipeDown;
@property(nonatomic) _Bool shouldDismissOnDimmerViewTap; // @synthesize shouldDismissOnDimmerViewTap;
@property(nonatomic) __weak id <_TtP8RedditUI33BottomSheetViewControllerDelegate_> delegate; // @synthesize delegate;

@end

