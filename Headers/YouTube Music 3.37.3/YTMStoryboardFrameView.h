//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, YTStoryboardFrame;

@interface YTMStoryboardFrameView : UIView
{
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_timeLabel;
    UIView *_handleView;
    YTStoryboardFrame *_storyboardFrame;
    double _mediaTime;
    double _handleHeight;
}

@property(nonatomic) double handleHeight; // @synthesize handleHeight=_handleHeight;
@property(nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(retain, nonatomic) YTStoryboardFrame *storyboardFrame; // @synthesize storyboardFrame=_storyboardFrame;
- (void).cxx_destruct;
- (void)setHandleViewBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

