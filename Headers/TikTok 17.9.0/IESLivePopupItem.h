//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CABasicAnimation, UIColor, UIView;
@protocol HTSLiveViewHierarchyProvider, IESLivePopupView, IESLiveSettings;

@interface IESLivePopupItem : NSObject
{
    _Bool _hideWhenTapBackgroundView;
    _Bool _hideWhenPanedown;
    _Bool _enableCornerRadii;
    _Bool _subViewsMayPassThroughCornerRadii;
    _Bool _enableCornerRadiiLandScape;
    _Bool _subViewsMayPassThroughCornerRadiiLandScape;
    UIView *_view;
    UIView *_backgroundContainer;
    UIColor *_backgroundColor;
    long long _itemType;
    long long _viewType;
    double _portraitHeight;
    UIView<IESLivePopupView> *_popupView;
    CDUnknownBlockType _onShowCompletion;
    CDUnknownBlockType _onHideStart;
    CDUnknownBlockType _onHideCompletion;
    double _offsetWhenKeyboardShow;
    CABasicAnimation *_customAnimation;
    double _cornerRadii;
    unsigned long long _rectCorner;
    double _cornerRadiiLandScape;
    unsigned long long _rectCornerLandScape;
    double _leftRightInsets;
    double _upBottomInsetsLandScape;
    double _rightOffsetLandScape;
    double _widthLandScape;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveSettings> _settings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) double widthLandScape; // @synthesize widthLandScape=_widthLandScape;
@property(nonatomic) double rightOffsetLandScape; // @synthesize rightOffsetLandScape=_rightOffsetLandScape;
@property(nonatomic) double upBottomInsetsLandScape; // @synthesize upBottomInsetsLandScape=_upBottomInsetsLandScape;
@property(nonatomic) double leftRightInsets; // @synthesize leftRightInsets=_leftRightInsets;
@property(nonatomic) _Bool subViewsMayPassThroughCornerRadiiLandScape; // @synthesize subViewsMayPassThroughCornerRadiiLandScape=_subViewsMayPassThroughCornerRadiiLandScape;
@property(nonatomic) unsigned long long rectCornerLandScape; // @synthesize rectCornerLandScape=_rectCornerLandScape;
@property(nonatomic) double cornerRadiiLandScape; // @synthesize cornerRadiiLandScape=_cornerRadiiLandScape;
@property(nonatomic) _Bool enableCornerRadiiLandScape; // @synthesize enableCornerRadiiLandScape=_enableCornerRadiiLandScape;
@property(nonatomic) _Bool subViewsMayPassThroughCornerRadii; // @synthesize subViewsMayPassThroughCornerRadii=_subViewsMayPassThroughCornerRadii;
@property(nonatomic) unsigned long long rectCorner; // @synthesize rectCorner=_rectCorner;
@property(nonatomic) double cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(nonatomic) _Bool enableCornerRadii; // @synthesize enableCornerRadii=_enableCornerRadii;
@property(nonatomic) _Bool hideWhenPanedown; // @synthesize hideWhenPanedown=_hideWhenPanedown;
@property(nonatomic) _Bool hideWhenTapBackgroundView; // @synthesize hideWhenTapBackgroundView=_hideWhenTapBackgroundView;
@property(retain, nonatomic) CABasicAnimation *customAnimation; // @synthesize customAnimation=_customAnimation;
@property(nonatomic) double offsetWhenKeyboardShow; // @synthesize offsetWhenKeyboardShow=_offsetWhenKeyboardShow;
@property(copy, nonatomic) CDUnknownBlockType onHideCompletion; // @synthesize onHideCompletion=_onHideCompletion;
@property(copy, nonatomic) CDUnknownBlockType onHideStart; // @synthesize onHideStart=_onHideStart;
@property(copy, nonatomic) CDUnknownBlockType onShowCompletion; // @synthesize onShowCompletion=_onShowCompletion;
@property(retain, nonatomic) UIView<IESLivePopupView> *popupView; // @synthesize popupView=_popupView;
@property(nonatomic) double portraitHeight; // @synthesize portraitHeight=_portraitHeight;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) __weak UIView *backgroundContainer; // @synthesize backgroundContainer=_backgroundContainer;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (_Bool)enablePopupPan;
- (struct CGSize)containerViewSize;
- (void)dealloc;
- (id)init;

@end

