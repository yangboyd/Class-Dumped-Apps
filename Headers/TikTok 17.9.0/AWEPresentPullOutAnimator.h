//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;

@interface AWEPresentPullOutAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _isInteractive;
    long long _transitionType;
    UIView *_blackBackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *blackBackView; // @synthesize blackBackView=_blackBackView;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

