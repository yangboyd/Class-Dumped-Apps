//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIColor;

@interface _TtC10SmartGlass21SGSettingPickerButton : UIControl
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: valueLabel
    // Error parsing type: , name: chevronLabel
    // Error parsing type: , name: localizedTitleKey
    // Error parsing type: , name: valueText
    // Error parsing type: , name: normalTextColor
    // Error parsing type: , name: highlightedTextColor
    // Error parsing type: , name: disabledTextColor
    // Error parsing type: , name: fontName
    // Error parsing type: , name: pointSize
}

- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double fontSize;
@property(nonatomic, copy) NSString *fontName; // @synthesize fontName;
@property(nonatomic, retain) UIColor *disabledTextColor; // @synthesize disabledTextColor;
@property(nonatomic, retain) UIColor *highlightedTextColor; // @synthesize highlightedTextColor;
@property(nonatomic, retain) UIColor *normalTextColor; // @synthesize normalTextColor;
@property(nonatomic, copy) NSString *valueText; // @synthesize valueText;
@property(nonatomic, copy) NSString *localizedTitleKey; // @synthesize localizedTitleKey;

@end

