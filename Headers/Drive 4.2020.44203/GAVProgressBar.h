//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GOOIndeterminateProgressBar, MDCProgressView, UIColor;

@interface GAVProgressBar : UIView
{
    float _progress;
    UIColor *_color;
    MDCProgressView *_progressBar;
    GOOIndeterminateProgressBar *_indeterminateProgressBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GOOIndeterminateProgressBar *indeterminateProgressBar; // @synthesize indeterminateProgressBar=_indeterminateProgressBar;
@property(retain, nonatomic) MDCProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)addLayoutConstraintsForView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

