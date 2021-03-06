//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/IFNoFreshSetTimerDelegate-Protocol.h>

@class IFNumberBlock, NSLayoutConstraint, NSString, UIColor, UIFont, UILabel;

@interface IFTimerView : UIView <IFNoFreshSetTimerDelegate>
{
    struct CGSize _maxSize;
    unsigned long long _style;
    UIColor *_color;
    UIView *_contentView;
    UIFont *_font;
    IFNumberBlock *_hoursLabel;
    UILabel *_hmSeparatorLabel;
    IFNumberBlock *_minutesLabel;
    UILabel *_msSeparator;
    IFNumberBlock *_secondsLabel;
    NSLayoutConstraint *_hoursBlockWidth;
    NSLayoutConstraint *_minutesBlockWidth;
    NSLayoutConstraint *_secondsBlockWidth;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_msSeparatorHeight;
    NSLayoutConstraint *_hmSeparatorHeight;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSLayoutConstraint *hmSeparatorHeight; // @synthesize hmSeparatorHeight=_hmSeparatorHeight;
@property(nonatomic) __weak NSLayoutConstraint *msSeparatorHeight; // @synthesize msSeparatorHeight=_msSeparatorHeight;
@property(nonatomic) __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *secondsBlockWidth; // @synthesize secondsBlockWidth=_secondsBlockWidth;
@property(nonatomic) __weak NSLayoutConstraint *minutesBlockWidth; // @synthesize minutesBlockWidth=_minutesBlockWidth;
@property(nonatomic) __weak NSLayoutConstraint *hoursBlockWidth; // @synthesize hoursBlockWidth=_hoursBlockWidth;
@property(nonatomic) __weak IFNumberBlock *secondsLabel; // @synthesize secondsLabel=_secondsLabel;
@property(nonatomic) __weak UILabel *msSeparator; // @synthesize msSeparator=_msSeparator;
@property(nonatomic) __weak IFNumberBlock *minutesLabel; // @synthesize minutesLabel=_minutesLabel;
@property(nonatomic) __weak UILabel *hmSeparatorLabel; // @synthesize hmSeparatorLabel=_hmSeparatorLabel;
@property(nonatomic) __weak IFNumberBlock *hoursLabel; // @synthesize hoursLabel=_hoursLabel;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)updateWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2 seconds:(unsigned long long)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateContentByFrame:(struct CGRect)arg1;
- (void)updateNumberBlockWidth:(double)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

