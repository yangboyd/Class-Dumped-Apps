//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class CAGradientLayer, NSArray, NSDictionary, NSString, UIColor, UIFont, UIScrollView;
@protocol SGScrollTabControlDelegate;

@interface SGScrollTabControl : UIView <UIScrollViewDelegate>
{
    NSArray *_titles;
    id <SGScrollTabControlDelegate> _delegate;
    UIScrollView *_labelContainer;
    long long _selectedIndex;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_selectedTextColor;
    double _separation;
    double _margin;
    CAGradientLayer *_fadeLayer;
    UIView *_bottomLine;
    NSDictionary *_titleLabelsMap;
    NSArray *_titleLabels;
    UIView *_fadeContainer;
    UIView *_dividerLineView;
}

+ (void)initialize;
@property(retain, nonatomic) UIView *dividerLineView; // @synthesize dividerLineView=_dividerLineView;
@property(retain, nonatomic) UIView *fadeContainer; // @synthesize fadeContainer=_fadeContainer;
@property(retain, nonatomic) NSArray *titleLabels; // @synthesize titleLabels=_titleLabels;
@property(retain, nonatomic) NSDictionary *titleLabelsMap; // @synthesize titleLabelsMap=_titleLabelsMap;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) CAGradientLayer *fadeLayer; // @synthesize fadeLayer=_fadeLayer;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) double separation; // @synthesize separation=_separation;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIScrollView *labelContainer; // @synthesize labelContainer=_labelContainer;
@property(nonatomic) __weak id <SGScrollTabControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTitleLabelOffsetsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateFadeLayerLocations;
- (void)updateScrollViewWithOffset:(struct CGPoint)arg1;
- (void)navigateToInitialIndex:(long long)arg1;
- (void)navigateToIndex:(long long)arg1;
@property(copy, nonatomic) NSString *selectedTitle;
- (void)didTapTitleLabel:(id)arg1;
- (void)layoutSubviews;
- (id)commonInitForScrollTabControl;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

