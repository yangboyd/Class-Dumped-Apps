//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UILabel;

@interface DBIntroAuthenticateButton : UIControl
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: backgroundImageView
    // Error parsing type: , name: imageView
    // Error parsing type: , name: centerableStackView
    // Error parsing type: , name: buttonStyle
    // Error parsing type: , name: lightImage
    // Error parsing type: , name: darkImage
    // Error parsing type: , name: lightBackgroundImage
    // Error parsing type: , name: darkBackgroundImage
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithButtonStyle:(long long)arg1 lightImage:(id)arg2 darkImage:(id)arg3 lightBackgroundImage:(id)arg4 darkBackgroundImage:(id)arg5;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
@property(nonatomic) struct NSDirectionalEdgeInsets contentEdgeInsets;
@property(nonatomic, readonly) UILabel *titleLabel; // @synthesize titleLabel;

@end

