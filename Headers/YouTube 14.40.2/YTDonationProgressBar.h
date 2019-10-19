//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"

@class NSString, YTFormattedStringLabel, YTProgressView;

@interface YTDonationProgressBar : UIView <YTPageStyling>
{
    YTProgressView *_progressBar;
    YTFormattedStringLabel *_startLabel;
    YTFormattedStringLabel *_endLabel;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setEntry:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

