//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/UIGestureRecognizerDelegate-Protocol.h>

@class NSString;

@interface FacebookAdViewMissclickFixWrapper : UIView <UIGestureRecognizerDelegate>
{
    UIView *_fbAdView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *fbAdView; // @synthesize fbAdView=_fbAdView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)onTap:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFBAdView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

