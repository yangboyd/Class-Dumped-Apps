//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DLS/UIGestureRecognizerDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC3DLS20ModalSheetController : UIViewController <UIGestureRecognizerDelegate>
{
    // Error parsing type: , name: sheetContent
    // Error parsing type: , name: springAnimator
    // Error parsing type: , name: state
    // Error parsing type: , name: currentFrame
    // Error parsing type: , name: startingHeight
    // Error parsing type: , name: intrinsicHeight
    // Error parsing type: , name: maxHeight
    // Error parsing type: , name: expandedHeight
    // Error parsing type: , name: compressedHeight
    // Error parsing type: , name: dockedHeight
    // Error parsing type: , name: $__lazy_storage_$_cardHeightConstraint
    // Error parsing type: , name: $__lazy_storage_$_decoratorBottomConstraint
    // Error parsing type: , name: $__lazy_storage_$_topContentMarginConstraint
    // Error parsing type: , name: $__lazy_storage_$_leadingContentMarginConstraint
    // Error parsing type: , name: $__lazy_storage_$_trailingContentMarginConstraint
    // Error parsing type: , name: $__lazy_storage_$_scrollViewBottomConstraint
    // Error parsing type: , name: $__lazy_storage_$_minimumContentHeightConstraint
    // Error parsing type: , name: $__lazy_storage_$_dragRecognizer
    // Error parsing type: , name: decoratorView
    // Error parsing type: , name: loadingView
    // Error parsing type: , name: titleBarView
    // Error parsing type: , name: headerView
    // Error parsing type: , name: footerView
    // Error parsing type: , name: contentContainerView
    // Error parsing type: , name: $__lazy_storage_$_titleView
    // Error parsing type: , name: $__lazy_storage_$_messageView
    // Error parsing type: , name: cardContainerView
    // Error parsing type: , name: contentScrollView
    // Error parsing type: , name: $__lazy_storage_$_contentHeaderStackView
    // Error parsing type: , name: $__lazy_storage_$_contentStackView
    // Error parsing type: , name: $__lazy_storage_$_scrollObserver
    // Error parsing type: , name: $__lazy_storage_$_buttonGroup
    // Error parsing type: , name: $__lazy_storage_$_notificationObserver
    // Error parsing type: , name: activeField
    // Error parsing type: , name: presentedBy
    // Error parsing type: , name: textAlignment
    // Error parsing type: , name: titleSize
    // Error parsing type: , name: header
    // Error parsing type: , name: footer
    // Error parsing type: , name: decoration
    // Error parsing type: , name: actions
    // Error parsing type: , name: isInteractive
    // Error parsing type: , name: findChildScrollView
    // Error parsing type: , name: shouldCloseOnOverlayTap
    // Error parsing type: , name: isLoading
    // Error parsing type: , name: shouldShowContentHeader
    // Error parsing type: , name: shouldShowStickyHeader
    // Error parsing type: , name: hasContentMargins
    // Error parsing type: , name: startingState
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (_Bool)accessibilityPerformEscape;
- (void)didDragCardWithGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;

@end

