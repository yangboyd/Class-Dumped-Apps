//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel;

@interface WANoChatsView : UIView
{
    UIView *_contentView;
    UILabel *_textLabel;
    NSArray *_actions;
    NSArray *_buttons;
}

+ (id)separatorView;
- (void).cxx_destruct;
- (id)actions;
- (id)helperTextWithFont:(id)arg1;
- (void)fontSizeDidChange:(id)arg1;
- (void)updateFonts;
- (void)installConstraints;
- (void)stackView:(id)arg1 toView:(id)arg2 spacing:(double)arg3 leadingMargin:(_Bool)arg4;
- (void)handleButtonTap:(id)arg1;
- (void)updateBackgroundImageOfButton:(id)arg1;
- (void)updateColors;
- (void)createButtons;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

