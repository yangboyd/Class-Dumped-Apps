//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTShortsLoggingProxy-Protocol.h"

@class NSString, YTInteractionLoggingProxyButton, YTShortsTrimFilmstripView, YTShortsTrimmerControl;
@protocol YTInteractionLoggingButtonProtocol, YTShortsTrimToolViewDelegate;

@interface YTShortsTrimToolView : UIView <YTShortsLoggingProxy>
{
    YTShortsTrimmerControl *_trimmerControl;
    YTShortsTrimFilmstripView *_filmstripView;
    UIView *_leftFadeView;
    UIView *_rightFadeView;
    YTInteractionLoggingProxyButton *_proxyButton;
    UIView *_mostRecentlyFocusedView;
    id <YTShortsTrimToolViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTShortsTrimToolViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <YTInteractionLoggingButtonProtocol> yt_loggingProxyButton;
- (void)layoutRightFadeView;
- (void)layoutLeftFadeView;
- (void)configureWithModel:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

