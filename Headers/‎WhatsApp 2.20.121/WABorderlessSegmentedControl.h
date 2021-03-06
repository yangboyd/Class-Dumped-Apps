//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISegmentedControl.h>

@class UIColor, UIFont;

@interface WABorderlessSegmentedControl : UISegmentedControl
{
    UIColor *_defaultInternalDividerColor;
    UIColor *_defaultBackgroundColor;
    UIColor *_selectedBackgroundColor;
    UIColor *_defaultTextColor;
    UIColor *_selectedTextColor;
    UIFont *_defaultFont;
    UIFont *_selectedFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *selectedFont; // @synthesize selectedFont=_selectedFont;
@property(retain, nonatomic) UIFont *defaultFont; // @synthesize defaultFont=_defaultFont;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(retain, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (void)setupDefaultDividerImage:(id)arg1 color:(id)arg2 shouldChangeIvar:(_Bool)arg3;
@property(retain, nonatomic) UIColor *defaultDividerColor;
- (void)updateSelectedText;
- (void)updateDefaultText;
- (id)initWithItems:(id)arg1;

@end

