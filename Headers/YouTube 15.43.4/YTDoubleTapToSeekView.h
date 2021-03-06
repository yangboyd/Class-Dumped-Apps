//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>
#import <Module_Framework/YTDoubleTapIndicatorViewDataSource-Protocol.h>

@class NSString, UIGestureRecognizer, YTDoubleTapToSkipGestureRecognizer, YTInlinePlayerDoubleTapIndicatorView;
@protocol YTDoubleTapToSeekViewDataSource;

@interface YTDoubleTapToSeekView : UIView <UIGestureRecognizerDelegate, YTDoubleTapIndicatorViewDataSource>
{
    YTInlinePlayerDoubleTapIndicatorView *_doubleTapIndicatorView;
    YTDoubleTapToSkipGestureRecognizer *_doubleTapToSkipGestureRecognizer;
    id <YTDoubleTapToSeekViewDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTDoubleTapToSeekViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) UIGestureRecognizer *doubleTapToSkipGestureRecognizer; // @synthesize doubleTapToSkipGestureRecognizer=_doubleTapToSkipGestureRecognizer;
- (id)chapterTitleForInlinePlayerDoubleTapIndicatorView:(id)arg1;
- (void)setDoubleTapGestureRecognizerEnabled:(_Bool)arg1;
- (void)removeDidDoubleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidDoubleTapTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)shouldTrackTouchAtLocation:(struct CGPoint)arg1;
- (void)resetDoubleTapSecondsLabelCount;
- (void)showDoubleTapSeekFeedbackWithPoint:(struct CGPoint)arg1 seekTimeInterval:(double)arg2 direction:(long long)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

