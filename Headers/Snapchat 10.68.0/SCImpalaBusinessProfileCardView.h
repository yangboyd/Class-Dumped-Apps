//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCImpalaBusinessLogoView, SCImpalaBusinessProfileCardViewModel, SCOfficialBadgeDisplayNameLabel, SCSearchActionButton, SCSearchColorThemeProvider, UILabel;
@protocol SCCanceling, SCImpalaBusinessProfileCardViewDelegate;

@interface SCImpalaBusinessProfileCardView : UIView <UIGestureRecognizerDelegate>
{
    SCSearchColorThemeProvider *_colorProvider;
    id <SCCanceling> _businessProfileObserver;
    SCImpalaBusinessLogoView *_logoView;
    UIView *_textContainer;
    SCOfficialBadgeDisplayNameLabel *_titleLabel;
    UILabel *_subtitleLabel;
    SCSearchActionButton *_actionButton;
    _Bool _updatingSubscribedState;
    id <SCImpalaBusinessProfileCardViewDelegate> _delegate;
    SCImpalaBusinessProfileCardViewModel *_viewModel;
}

+ (double)preferredHeight;
@property(copy, nonatomic) SCImpalaBusinessProfileCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SCImpalaBusinessProfileCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_reload;
- (void)_updateStoryButton;
- (void)_actionDidTap;
- (void)_didTapToOpenProfile;
- (void)_didTapToPlayStory;
- (_Bool)hasOverridedTapAction;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

