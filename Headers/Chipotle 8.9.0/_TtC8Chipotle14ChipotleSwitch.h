//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface _TtC8Chipotle14ChipotleSwitch : UIView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: sliderView
    // Error parsing type: , name: thumbView
    // Error parsing type: , name: isSwitchOn
    // Error parsing type: , name: isOn
    // Error parsing type: , name: thumbOffColor
    // Error parsing type: , name: sliderColor
    // Error parsing type: , name: thumbOnColor
    // Error parsing type: , name: thumbViewLeadingConstraint
}

- (void).cxx_destruct;
- (void)handleRightSwipe;
- (void)handleLeftSwipe;
- (void)handleTap;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) UIColor *thumbOnColor; // @synthesize thumbOnColor;
@property(nonatomic, retain) UIColor *sliderColor; // @synthesize sliderColor;
@property(nonatomic, retain) UIColor *thumbOffColor; // @synthesize thumbOffColor;
@property(nonatomic) _Bool isOn; // @synthesize isOn;

@end

