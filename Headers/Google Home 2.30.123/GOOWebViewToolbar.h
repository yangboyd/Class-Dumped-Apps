//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface GOOWebViewToolbar : UIView
{
    UIButton *_backButton;
    UIButton *_forwardButton;
    UIButton *_reloadButton;
    UIButton *_actionButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(readonly, nonatomic) UIButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void)updateButtonFramesWithSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (void)safeAreaInsetsDidChange;
- (id)buttonWithImage:(id)arg1 disabledImage:(id)arg2 autoresizingMask:(unsigned long long)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

