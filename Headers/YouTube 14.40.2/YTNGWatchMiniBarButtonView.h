//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"

@class FLXLayout, MDCInkTouchController, NSString, YTQTMButton;

@interface YTNGWatchMiniBarButtonView : UIView <YTPageStyling>
{
    FLXLayout *_layout;
    MDCInkTouchController *_inkTouchController;
    YTQTMButton *_button;
}

@property(readonly, nonatomic) YTQTMButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *root;
- (void)resetLayout;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1 accessibilityLabel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

