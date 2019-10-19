//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFUIAttributedIconButton, NFUIGradientView, NFUIIconButton, NFUIListButton, NFUIPreviewTagsView, UIColor, UIStackView, UIViewPropertyAnimator;
@protocol NFUIPreviewsOverlayViewDelegate, NFUIVideoPaginationDatasource;

@interface NFUIPreviewsOverlayView : UIView
{
    id <NFUIPreviewsOverlayViewDelegate> _delegate;
    unsigned long long _myListStatus;
    UIColor *_color;
    NFUIListButton *_addToListButton;
    NFUIAttributedIconButton *_playButton;
    NFUIIconButton *_moreInfoButton;
    UIView *_buttonContainerView;
    UIStackView *_verticalContainerStackView;
    NFUIGradientView *_bottomGradientView;
    NFUIGradientView *_topGradientView;
    NFUIPreviewTagsView *_tagsView;
    UIViewPropertyAnimator *_animator;
    id <NFUIVideoPaginationDatasource> _listModel;
    long long _currentIndex;
    long long _toIndex;
    NFUIPreviewsOverlayView *_dummyView;
    UIColor *_gradientBackgroundColor;
}

@property(retain, nonatomic) UIColor *gradientBackgroundColor; // @synthesize gradientBackgroundColor=_gradientBackgroundColor;
@property(retain, nonatomic) NFUIPreviewsOverlayView *dummyView; // @synthesize dummyView=_dummyView;
@property(nonatomic) long long toIndex; // @synthesize toIndex=_toIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <NFUIVideoPaginationDatasource> listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) NFUIPreviewTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) NFUIGradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) NFUIGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) UIStackView *verticalContainerStackView; // @synthesize verticalContainerStackView=_verticalContainerStackView;
@property(retain, nonatomic) UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) NFUIIconButton *moreInfoButton; // @synthesize moreInfoButton=_moreInfoButton;
@property(retain, nonatomic) NFUIAttributedIconButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) NFUIListButton *addToListButton; // @synthesize addToListButton=_addToListButton;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long myListStatus; // @synthesize myListStatus=_myListStatus;
@property(nonatomic) __weak id <NFUIPreviewsOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isShowingTagsOnPreviews;
- (void)dealloc;
- (void)logPreviewPresentationForPreviewModel:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBackgroundViewsHidden:(_Bool)arg1;
- (void)setInteractiveViewsHidden:(_Bool)arg1;
- (void)configureAccessibility;
- (void)initSubviews;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)completeRenderingViews;
- (void)completeAnimationToIndex:(long long)arg1;
- (void)animateToPercentage:(double)arg1;
- (void)beginAnimatingToIndex:(long long)arg1;
- (void)subsDubsTapped;
- (void)moreInfoTapped;
- (void)myListTapped;
- (void)playTapped;
- (id)initWithListModel:(id)arg1 initialIndex:(long long)arg2;

@end

