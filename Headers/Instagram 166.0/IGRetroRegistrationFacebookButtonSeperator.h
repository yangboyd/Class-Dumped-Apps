//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IGRetroRegistrationFacebookButtonSeperator : UIView
{
    UILabel *_textLabel;
    UIView *_lineLeft;
    UIView *_lineRight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineRight; // @synthesize lineRight=_lineRight;
@property(retain, nonatomic) UIView *lineLeft; // @synthesize lineLeft=_lineLeft;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (id)_createTextLabelWithColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithIsUsedOnDarkBackground:(_Bool)arg1;

@end

