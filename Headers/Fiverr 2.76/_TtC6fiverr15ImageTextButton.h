//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIColor, UIFont, UIImage;

@interface _TtC6fiverr15ImageTextButton : UIControl
{
    // Error parsing type: , name: autoTint
    // Error parsing type: , name: textAlignment
    // Error parsing type: , name: highlightedBackgroundColor
    // Error parsing type: , name: autoCornerAndRadius
    // Error parsing type: , name: autoShadow
    // Error parsing type: , name: _titleColor
    // Error parsing type: , name: _highlightedTitleColor
    // Error parsing type: , name: imageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: titleLabelContainer
    // Error parsing type: , name: stackView
    // Error parsing type: , name: labelHeightConstraint
    // Error parsing type: , name: containerView
}

- (void).cxx_destruct;
- (void)setTitleFirst:(_Bool)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long contentMode;
@property(nonatomic) _Bool autoShadow; // @synthesize autoShadow;
@property(nonatomic) _Bool autoCornerAndRadius; // @synthesize autoCornerAndRadius;
@property(nonatomic, retain) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment;
@property(nonatomic) _Bool autoTint; // @synthesize autoTint;
@property(nonatomic, retain) UIColor *highlightedTitleColor;
@property(nonatomic, retain) UIColor *titleColor;
@property(nonatomic) double titleHeight;
@property(nonatomic, retain) UIImage *image;
@property(nonatomic, retain) UIFont *font;
@property(nonatomic, copy) NSString *title;

@end

