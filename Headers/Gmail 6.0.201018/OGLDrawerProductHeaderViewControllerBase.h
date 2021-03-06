//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "OGLDrawerHeader-Protocol.h"

@class NSString, OGLCloseButton, UIView;
@protocol OGLDrawerChildViewControllerDelegate;

@interface OGLDrawerProductHeaderViewControllerBase : UIViewController <OGLDrawerHeader>
{
    id <OGLDrawerChildViewControllerDelegate> _drawerDelegate;
    double _headerTransitionToTop;
    OGLCloseButton *_cancelButton;
    UIView *_productLogo;
    UIView *_dividerView;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UIView *productLogo; // @synthesize productLogo=_productLogo;
@property(retain, nonatomic) OGLCloseButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) double headerTransitionToTop; // @synthesize headerTransitionToTop=_headerTransitionToTop;
@property(nonatomic) __weak id <OGLDrawerChildViewControllerDelegate> drawerDelegate; // @synthesize drawerDelegate=_drawerDelegate;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (struct CGSize)preferredContentSize;
- (void)updateDrawerHeaderTransitionRatio:(double)arg1;
- (void)setHeaderTransitionToTop:(double)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
@property(readonly, nonatomic) double preferredHeight;
- (void)didTapCancelButton;
- (id)createCancelButton;
- (void)viewDidLayoutSubviews;
- (void)loadView;
@property(nonatomic, getter=isDividerHidden) _Bool dividerHidden;
- (id)initWithProductLogo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

