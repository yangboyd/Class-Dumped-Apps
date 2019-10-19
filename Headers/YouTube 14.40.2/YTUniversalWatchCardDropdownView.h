//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTReusableView.h"

@class NSString, YTDropdownButton, YTFormattedStringLabel, YTIWatchCardSectionDropdownRenderer;

@interface YTUniversalWatchCardDropdownView : UIView <YTReusableView>
{
    YTIWatchCardSectionDropdownRenderer *_renderer;
    YTDropdownButton *_dropdownButton;
    YTFormattedStringLabel *_subtitleLabel;
}

@property(retain, nonatomic) YTFormattedStringLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) YTDropdownButton *dropdownButton; // @synthesize dropdownButton=_dropdownButton;
- (void).cxx_destruct;
- (_Bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)setDropdownViewDelegate:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setDropdownSelectedOption:(long long)arg1;
- (void)setRenderer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

