//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HMEPulsingRippleView, MDCButton;
@protocol HMETalkbackButtonViewDelegate;

@interface HMETalkbackButtonView : UIView
{
    id <HMETalkbackButtonViewDelegate> _delegate;
    long long _state;
    HMEPulsingRippleView *_rippleView;
    MDCButton *_talkbackButton;
    double _talkbackButtonRadius;
}

+ (id)accessibilityLabelForState:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) double talkbackButtonRadius; // @synthesize talkbackButtonRadius=_talkbackButtonRadius;
@property(retain, nonatomic) MDCButton *talkbackButton; // @synthesize talkbackButton=_talkbackButton;
@property(retain, nonatomic) HMEPulsingRippleView *rippleView; // @synthesize rippleView=_rippleView;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <HMETalkbackButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopTalkbackButtonAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)didTapTalkbackButton;
- (id)initWithTalkbackButtonDiameter:(double)arg1 outerPulseDiameter:(double)arg2 backgroundColor:(id)arg3;

@end

