//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class CAGradientLayer, GLUEButton, NSString, SPTEntityTableHeaderBackgroundView, SPTEntityTableHeaderView, UIImage, UILabel;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTEntityStickyHeaderView : UIView <SPTThemableView>
{
    _Bool _shouldDisplayAlternateTitle;
    _Bool _everythingButTitleLabelHidden;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UILabel *_titleLabel;
    UILabel *_alternateTitleLabel;
    GLUEButton *_actionButton;
    SPTEntityTableHeaderBackgroundView *_backgroundView;
    UIView *_headerViewWrapperView;
    UIView *_imageViewWrapperView;
    UIView *_bottomGradientView;
    CAGradientLayer *_bottomViewGradientLayer;
    SPTEntityTableHeaderView *_entityTableHeaderView;
}

+ (id)stickyHeaderViewForHeaderView:(id)arg1 withFrame:(struct CGRect)arg2;
@property(nonatomic) __weak SPTEntityTableHeaderView *entityTableHeaderView; // @synthesize entityTableHeaderView=_entityTableHeaderView;
@property(retain, nonatomic) CAGradientLayer *bottomViewGradientLayer; // @synthesize bottomViewGradientLayer=_bottomViewGradientLayer;
@property(retain, nonatomic) UIView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) UIView *imageViewWrapperView; // @synthesize imageViewWrapperView=_imageViewWrapperView;
@property(retain, nonatomic) UIView *headerViewWrapperView; // @synthesize headerViewWrapperView=_headerViewWrapperView;
@property(retain, nonatomic) SPTEntityTableHeaderBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isEverythingButTitleLabelHidden) _Bool everythingButTitleLabelHidden; // @synthesize everythingButTitleLabelHidden=_everythingButTitleLabelHidden;
@property(nonatomic) _Bool shouldDisplayAlternateTitle; // @synthesize shouldDisplayAlternateTitle=_shouldDisplayAlternateTitle;
@property(retain, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *alternateTitleLabel; // @synthesize alternateTitleLabel=_alternateTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)actionButtonTapped;
- (void)applyThemeLayout;
@property(readonly, nonatomic) struct CGSize stickyHeaderBackgroundViewSize;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(copy, nonatomic) NSString *alternateTitle;
@property(copy, nonatomic) NSString *title;
- (id)categoryTitle;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

