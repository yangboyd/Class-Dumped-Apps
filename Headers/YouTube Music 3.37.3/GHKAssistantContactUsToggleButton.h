//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage;

@interface GHKAssistantContactUsToggleButton : UIButton
{
    UIImage *_upArrowIcon;
    UIImage *_downArrowIcon;
    _Bool _toggleState;
}

+ (id)buttonWithTarget:(id)arg1 selector:(SEL)arg2 frameWidth:(double)arg3;
- (void).cxx_destruct;
- (void)configureForToggleState;
- (void)layoutSubviews;
- (_Bool)currentToggleState;
- (void)toggleButton;
- (id)initInternal;

@end

