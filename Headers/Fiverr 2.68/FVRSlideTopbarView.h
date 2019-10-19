//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIColor, UIScrollView;
@protocol FVRSlideTopbarViewDelegate;

@interface FVRSlideTopbarView : UIView <UIScrollViewDelegate>
{
    struct {
        unsigned int DidDefineColorOfSlider:1;
        unsigned int DidDefineColorOfSlideView:1;
        unsigned int DidDefineBadgeNumbers:1;
    } _delegateFlags;
    id <FVRSlideTopbarViewDelegate> _delegate;
    long long _numberOfSlideItems;
    NSArray *_namesOfSlideItems;
    UIColor *_colorOfSlider;
    UIColor *_colorOfSlideView;
    UIView *_slideBar;
    UIView *_slider;
    UIScrollView *_contentScrollView;
    NSMutableArray *_containerViewsArray;
    NSMutableArray *_nameLabelsArray;
    NSMutableArray *_buttonsArray;
    NSMutableArray *_badgeViewsArray;
    NSMutableArray *_badgeLabelsArray;
}

@property(retain, nonatomic) NSMutableArray *badgeLabelsArray; // @synthesize badgeLabelsArray=_badgeLabelsArray;
@property(retain, nonatomic) NSMutableArray *badgeViewsArray; // @synthesize badgeViewsArray=_badgeViewsArray;
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(retain, nonatomic) NSMutableArray *nameLabelsArray; // @synthesize nameLabelsArray=_nameLabelsArray;
@property(retain, nonatomic) NSMutableArray *containerViewsArray; // @synthesize containerViewsArray=_containerViewsArray;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) UIView *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UIView *slideBar; // @synthesize slideBar=_slideBar;
@property(retain, nonatomic) UIColor *colorOfSlideView; // @synthesize colorOfSlideView=_colorOfSlideView;
@property(retain, nonatomic) UIColor *colorOfSlider; // @synthesize colorOfSlider=_colorOfSlider;
@property(retain, nonatomic) NSArray *namesOfSlideItems; // @synthesize namesOfSlideItems=_namesOfSlideItems;
@property(nonatomic) long long numberOfSlideItems; // @synthesize numberOfSlideItems=_numberOfSlideItems;
@property(nonatomic) __weak id <FVRSlideTopbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)setSelectedTabIndex:(long long)arg1;
- (void)animateSliderToPositionByIndex:(long long)arg1;
- (void)p_animateSliderWithTag:(long long)arg1;
- (id)p_sliderWithFrame:(struct CGRect)arg1;
- (void)setBadgeNumber:(long long)arg1 forBarIndex:(long long)arg2;
- (void)updateBadges;
- (void)reloadTopbar;
- (id)p_customButtonWithFrame:(struct CGRect)arg1 forTitle:(id)arg2 withTag:(long long)arg3;
- (void)addSlider;
- (void)addButtons;
- (void)addSlideBar;
- (void)addSubviews;
- (void)configureData;
- (void)initData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

