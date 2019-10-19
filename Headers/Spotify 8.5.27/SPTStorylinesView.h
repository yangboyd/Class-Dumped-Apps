//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEImageView, NSArray, SPTStorylinesInteractiveView, UIStackView;

@interface SPTStorylinesView : UIView
{
    GLUEImageView *_imageView;
    SPTStorylinesInteractiveView *_interactiveView;
    UIStackView *_progressStackView;
    NSArray *_progressBars;
}

@property(copy, nonatomic) NSArray *progressBars; // @synthesize progressBars=_progressBars;
@property(retain, nonatomic) UIStackView *progressStackView; // @synthesize progressStackView=_progressStackView;
@property(retain, nonatomic) SPTStorylinesInteractiveView *interactiveView; // @synthesize interactiveView=_interactiveView;
@property(retain, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)addProgressBars:(unsigned long long)arg1;
- (void)removeProgressBars:(unsigned long long)arg1;
- (void)updateProgressBarWithProgress:(double)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setupProgressBarsForNumberOfCards:(long long)arg1;
- (void)setupConstraints;
- (void)setupInteractiveView;
- (void)setupProgressView;
- (void)setupImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

