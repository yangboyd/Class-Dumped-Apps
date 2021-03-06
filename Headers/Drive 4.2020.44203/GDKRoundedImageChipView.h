//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCChipView.h"

#import "GDKThemable-Protocol.h"
#import "GDKThemeUpdatable-Protocol.h"

@class GDKTheme, NSString, UITraitCollection;

@interface GDKRoundedImageChipView : MDCChipView <GDKThemable, GDKThemeUpdatable>
{
    int _style;
    GDKTheme *_theme;
}

- (void).cxx_destruct;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
- (void)applyTheme:(id)arg1;
- (void)updateTheme:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

