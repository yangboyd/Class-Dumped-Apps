//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class SCCameraTimerCollapsedView;

@interface SCMapTransitionCameraButton : UIControl
{
    double _percentVisible;
    SCCameraTimerCollapsedView *_collapsedView;
}

@property(retain, nonatomic) SCCameraTimerCollapsedView *collapsedView; // @synthesize collapsedView=_collapsedView;
@property(nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

