//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SCProgressView : UIView
{
    float _currentProgress;
    UIView *_progressBarView;
}

@property(nonatomic) float currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) UIView *progressBarView; // @synthesize progressBarView=_progressBarView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) UIColor *progressBarColor;

@end

