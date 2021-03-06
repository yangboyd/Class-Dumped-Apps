//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface YTReelWatchEduOverlayView : UIView
{
    UILabel *_swipeLabel;
    UILabel *_swipeSublabel;
    UILabel *_nextSublabel;
    UILabel *_nextLabel;
    UILabel *_previousLabel;
    UILabel *_previousSublabel;
    UILabel *_pauseLabel;
    UILabel *_pauseSublabel;
    UILabel *_tapHint;
    UIImageView *_previousIcon;
    UIImageView *_nextIcon;
    UIImageView *_swipeIcon;
    UIImageView *_pauseIcon;
}

+ (id)createSublabelWithText:(id)arg1;
+ (id)createLabelWithText:(id)arg1;
- (void).cxx_destruct;
- (void)layoutGroupWithIcon:(id)arg1 label:(id)arg2 sublabel:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

