//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDKThemable-Protocol.h"

@class GDKFileIconView, GDKTheme, NSString, UIButton, UILabel, UIStackView, UITraitCollection;

@interface GDKContextMenuHeader : UIView <GDKThemable>
{
    UILabel *_headerTitle;
    GDKFileIconView *_iconView;
    UIButton *_closeButton;
    UIStackView *_headerStackView;
    UIView *_separator;
    GDKTheme *_theme;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(readonly, nonatomic) UIStackView *headerStackView; // @synthesize headerStackView=_headerStackView;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) GDKFileIconView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) UILabel *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void)applyTheme:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)addTargetForCloseButton:(id)arg1 action:(SEL)arg2;
- (void)configureConstraints;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 icon:(id)arg3 tintColor:(id)arg4 showShortcutOverlay:(_Bool)arg5 theme:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

