//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol IGVideoPlayerWatchAndMoreViewDelegate;

@interface IGVideoPlayerWatchAndMoreView : UIView
{
    UIButton *_watchAndMoreEntryButton;
    UIButton *_watchAndMoreExitButton;
    id <IGVideoPlayerWatchAndMoreViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoPlayerWatchAndMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapWatchAndMoreExitButton;
- (void)_didTapWatchAndMoreEntryButton;
- (void)toggleWatchAndMoreButtonWithType:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

