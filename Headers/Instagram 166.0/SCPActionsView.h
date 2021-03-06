//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol SCPActionsViewDelegate;

@interface SCPActionsView : UIView
{
    id <SCPActionsViewDelegate> _delegate;
    _Bool _isHybridModeEnabled;
    unsigned long long _state;
    UIButton *_requirementsButton;
    UIView *_shutterButtonContainer;
    UIView *_shutterButtonBackground;
    UIButton *_shutterButton;
}

- (void).cxx_destruct;
- (void)setButtonsEnabled:(_Bool)arg1;
- (void)layoutShutter;
- (void)layoutRequirementsButton;
- (void)layoutSubviews;
- (void)requirementsButtonPressed;
- (void)shutterButtonPressed;
- (id)requirementsButton;
- (void)setHybridModeToEnabled;
- (void)setState:(unsigned long long)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setRequirementsButtonImage:(id)arg1 withBackgroundImage:(id)arg2;
- (id)init;

@end

