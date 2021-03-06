//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GOOCopyableHeaderConfiguration-Protocol.h>

@class NSArray, NSString, UIButton, UIColor, UIScrollView, UIView;

@interface GOOHeaderConfiguration : NSObject <GOOCopyableHeaderConfiguration>
{
    _Bool _trackingScrollViewIsBeingScrubbed;
    _Bool _minMaxHeightIncludesSafeArea;
    _Bool _canOverExtend;
    _Bool _inFrontOfInfiniteContent;
    _Bool _sharedWithManyScrollViews;
    _Bool _headerViewInFrontOfContent;
    _Bool _showsOnlyContentViews;
    float _visibleShadowOpacity;
    UIScrollView *_trackingScrollView;
    double _minimumHeight;
    double _maximumHeight;
    long long _behavior;
    UIColor *_backgroundColor;
    UIColor *_tintColor;
    UIColor *_titleColor;
    long long _statusBarStyle;
    UIView *_contentView;
    UIView *_bottomBar;
    UIButton *_floatingActionButton;
    double _floatingActionButtonMargin;
    NSArray *_contentViews;
    NSArray *_touchForwardingViews;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *touchForwardingViews; // @synthesize touchForwardingViews=_touchForwardingViews;
@property(nonatomic) _Bool showsOnlyContentViews; // @synthesize showsOnlyContentViews=_showsOnlyContentViews;
@property(copy, nonatomic) NSArray *contentViews; // @synthesize contentViews=_contentViews;
@property(nonatomic) double floatingActionButtonMargin; // @synthesize floatingActionButtonMargin=_floatingActionButtonMargin;
@property(retain, nonatomic) UIButton *floatingActionButton; // @synthesize floatingActionButton=_floatingActionButton;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(copy, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) _Bool headerViewInFrontOfContent; // @synthesize headerViewInFrontOfContent=_headerViewInFrontOfContent;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) float visibleShadowOpacity; // @synthesize visibleShadowOpacity=_visibleShadowOpacity;
@property(nonatomic) _Bool sharedWithManyScrollViews; // @synthesize sharedWithManyScrollViews=_sharedWithManyScrollViews;
@property(nonatomic, getter=isInFrontOfInfiniteContent) _Bool inFrontOfInfiniteContent; // @synthesize inFrontOfInfiniteContent=_inFrontOfInfiniteContent;
@property(nonatomic) _Bool canOverExtend; // @synthesize canOverExtend=_canOverExtend;
@property(nonatomic) long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) _Bool minMaxHeightIncludesSafeArea; // @synthesize minMaxHeightIncludesSafeArea=_minMaxHeightIncludesSafeArea;
@property(nonatomic) _Bool trackingScrollViewIsBeingScrubbed; // @synthesize trackingScrollViewIsBeingScrubbed=_trackingScrollViewIsBeingScrubbed;
@property(nonatomic) __weak UIScrollView *trackingScrollView; // @synthesize trackingScrollView=_trackingScrollView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

