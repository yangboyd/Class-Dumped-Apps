//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGSundialVideoTrimmer, UIControl;

@interface IGStoryClipsVideoTrimmingFooterView : UIView
{
    IGSundialVideoTrimmer *_videoTrimmer;
    UIControl *_confirmButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(readonly, nonatomic) IGSundialVideoTrimmer *videoTrimmer; // @synthesize videoTrimmer=_videoTrimmer;
@property(nonatomic) _Bool confirmButtonVisible;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

