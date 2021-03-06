//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/CAAnimationDelegate-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, TFNTappableHighlightView, TFNTouchDownGestureRecognizer, UIColor, UIImage, UIImageView, UILabel, UITapGestureRecognizer;

@interface T1AmbientNotificationTitleView : UIView <CAAnimationDelegate, UIGestureRecognizerDelegate>
{
    _Bool _highlighted;
    unsigned long long _displayType;
    UIImage *_icon;
    NSString *_message;
    UIView *_secondaryActionView;
    CDUnknownBlockType _primaryActionHandler;
    CDUnknownBlockType _secondaryActionHandler;
    TFNTappableHighlightView *_primaryActionContentView;
    UILabel *_primaryActionLabel;
    UIImageView *_primaryActionImageView;
    UIImageView *_primaryActionChevronImageView;
    UIView *_secondaryActionContentView;
    UITapGestureRecognizer *_secondaryActionViewTapGestureRecognizer;
    UIView *_verticalSeparatorView;
    UIView *_notificationBackgroundView;
    UIColor *_titleBackgroundColor;
    TFNTouchDownGestureRecognizer *_touchDownRecognizer;
}

+ (id)_defaultBackgroundColor;
+ (id)imageTintColor;
+ (id)_primaryActionChevronImage;
@property(readonly, nonatomic) TFNTouchDownGestureRecognizer *touchDownRecognizer; // @synthesize touchDownRecognizer=_touchDownRecognizer;
@property(readonly, nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIColor *titleBackgroundColor; // @synthesize titleBackgroundColor=_titleBackgroundColor;
@property(readonly, nonatomic) UIView *notificationBackgroundView; // @synthesize notificationBackgroundView=_notificationBackgroundView;
@property(readonly, nonatomic) UIView *verticalSeparatorView; // @synthesize verticalSeparatorView=_verticalSeparatorView;
@property(retain, nonatomic) UITapGestureRecognizer *secondaryActionViewTapGestureRecognizer; // @synthesize secondaryActionViewTapGestureRecognizer=_secondaryActionViewTapGestureRecognizer;
@property(readonly, nonatomic) UIView *secondaryActionContentView; // @synthesize secondaryActionContentView=_secondaryActionContentView;
@property(readonly, nonatomic) UIImageView *primaryActionChevronImageView; // @synthesize primaryActionChevronImageView=_primaryActionChevronImageView;
@property(readonly, nonatomic) UIImageView *primaryActionImageView; // @synthesize primaryActionImageView=_primaryActionImageView;
@property(readonly, nonatomic) UILabel *primaryActionLabel; // @synthesize primaryActionLabel=_primaryActionLabel;
@property(readonly, nonatomic) TFNTappableHighlightView *primaryActionContentView; // @synthesize primaryActionContentView=_primaryActionContentView;
@property(copy, nonatomic) CDUnknownBlockType secondaryActionHandler; // @synthesize secondaryActionHandler=_secondaryActionHandler;
@property(copy, nonatomic) CDUnknownBlockType primaryActionHandler; // @synthesize primaryActionHandler=_primaryActionHandler;
@property(retain, nonatomic) UIView *secondaryActionView; // @synthesize secondaryActionView=_secondaryActionView;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
- (void).cxx_destruct;
- (void)_t1_touchDownAction:(id)arg1;
- (void)_secondaryActionViewWasTapped:(id)arg1;
- (void)_primaryActionViewWasTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)tfn_fontSizeChanged;
- (_Bool)_t1_shouldHideVerticalSeparator;
- (_Bool)_hasPrimaryAction;
- (_Bool)_hasSecondaryAction;
- (void)animateArrivalWithCompletion:(CDUnknownBlockType)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_removeAnimationsFromAnimatedLayer:(id)arg1;
- (void)_removeAnimationsFromAnimatedLayers;
- (CDStruct_e287b37a)_t1_layoutWithLayoutMetrics:(id)arg1;
- (void)layoutSubviews;
- (void)transitionToDisplayType:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentWithBackgroundColor:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_t1_resetNotificationTransition;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) long long optimalNumberOfLines;
- (id)_t1_textAttributes;
- (void)_t1_refreshPrimaryActionLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

