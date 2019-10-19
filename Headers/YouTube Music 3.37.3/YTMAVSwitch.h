//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol YTMAVSwitchDelegate;

@interface YTMAVSwitch : UIView
{
    UILabel *_audioLabel;
    UILabel *_videoLabel;
    UIView *_outlineView;
    double _pillPadding;
    unsigned long long _userContentMode;
    id <YTMAVSwitchDelegate> _delegate;
}

@property(readonly, nonatomic) UIView *videoLabel; // @synthesize videoLabel=_videoLabel;
@property(readonly, nonatomic) UIView *audioLabel; // @synthesize audioLabel=_audioLabel;
@property(retain, nonatomic) id <YTMAVSwitchDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long userContentMode; // @synthesize userContentMode=_userContentMode;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

