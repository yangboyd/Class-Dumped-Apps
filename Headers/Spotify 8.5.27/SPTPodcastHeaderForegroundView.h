//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VISREFNavigationBarForegroundView.h"

@class VISREFGradientView;

@interface SPTPodcastHeaderForegroundView : VISREFNavigationBarForegroundView
{
    VISREFGradientView *_overlayGradient;
}

@property(retain, nonatomic) VISREFGradientView *overlayGradient; // @synthesize overlayGradient=_overlayGradient;
- (void).cxx_destruct;
- (void)showNavigationBar:(_Bool)arg1;
- (void)headerViewNormalizedProgressUpdate:(double)arg1;
- (void)updateWithGradientOverlay:(id)arg1;
- (void)setupOverlay;
- (id)initWithFrame:(struct CGRect)arg1;

@end

