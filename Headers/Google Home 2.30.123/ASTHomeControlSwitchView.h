//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTHomeControlBodyView.h"

@class UIButton, UILabel;

@interface ASTHomeControlSwitchView : ASTHomeControlBodyView
{
    UILabel *_onOffLabel;
    UIButton *_onOffButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *onOffButton; // @synthesize onOffButton=_onOffButton;
@property(retain, nonatomic) UILabel *onOffLabel; // @synthesize onOffLabel=_onOffLabel;
- (void)deviceStatusUpdated;
- (id)onOfButtonTitle;
- (void)onOffButtonTapped;
- (void)updateOnOffLabel;
- (void)createSubviews;

@end

