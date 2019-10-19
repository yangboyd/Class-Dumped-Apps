//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOverscrolling-Protocol.h"

@class NSString, SCLazy, SCSearchNavigationBar;

@interface SCSearchContainerView : UIView <SCOverscrolling>
{
    UIView *_contentView;
    unsigned long long _contentViewNavigationStyle;
    UIView *_targetView;
    unsigned long long _targetViewNavigationStyle;
    unsigned long long _numberOfDisplayedContentViewsWithNavigationBar;
    struct UIEdgeInsets _originalLayoutInsets;
    _Bool _navigationBarTopInsetFixed;
    SCSearchNavigationBar *_navigationBar;
    SCLazy *_blurView;
    SCLazy *_blurOverlay;
    long long _backgroundStyle;
    double _overscrollPercent;
    double _overscrollOffset;
    double _navigationBarFixedOffsetY;
    long long _contentViewPosition;
    long long _targetViewPosition;
    struct CGPoint _contentViewOffset;
    struct CGPoint _targetViewOffset;
    struct UIEdgeInsets _layoutInsets;
}

@property(nonatomic) long long targetViewPosition; // @synthesize targetViewPosition=_targetViewPosition;
@property(nonatomic) long long contentViewPosition; // @synthesize contentViewPosition=_contentViewPosition;
@property(nonatomic) _Bool navigationBarTopInsetFixed; // @synthesize navigationBarTopInsetFixed=_navigationBarTopInsetFixed;
@property(nonatomic) double navigationBarFixedOffsetY; // @synthesize navigationBarFixedOffsetY=_navigationBarFixedOffsetY;
@property(nonatomic) struct CGPoint targetViewOffset; // @synthesize targetViewOffset=_targetViewOffset;
@property(nonatomic) struct CGPoint contentViewOffset; // @synthesize contentViewOffset=_contentViewOffset;
@property(nonatomic) double overscrollOffset; // @synthesize overscrollOffset=_overscrollOffset;
@property(nonatomic) double overscrollPercent; // @synthesize overscrollPercent=_overscrollPercent;
@property(nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(readonly, nonatomic) SCLazy *blurOverlay; // @synthesize blurOverlay=_blurOverlay;
@property(readonly, nonatomic) SCLazy *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) SCSearchNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)updatePercentOverscrolled:(double)arg1;
- (void)setTransitionTargetView:(id)arg1 position:(long long)arg2 navigationStyle:(unsigned long long)arg3 isAboveContentView:(_Bool)arg4;
- (void)cleanUpTransition:(_Bool)arg1;
- (void)replaceContentViewWithTransitionTargetView:(_Bool)arg1;
- (void)setTransitionTargetViewPosition:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

