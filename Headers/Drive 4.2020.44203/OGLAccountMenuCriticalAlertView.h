//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MDCRippleTouchControllerDelegate-Protocol.h"

@class MDCFlatButton, MDCRippleTouchController, NSString, OGLCriticalAlert, UILabel;
@protocol OGLCriticalAlertActionHandler, OGLTheming, OGLUILogger;

@interface OGLAccountMenuCriticalAlertView : UIView <MDCRippleTouchControllerDelegate>
{
    id <OGLCriticalAlertActionHandler> _actionHandler;
    OGLCriticalAlert *_criticalAlert;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MDCFlatButton *_actionButton;
    MDCRippleTouchController *_rippleTouchController;
    id <OGLUILogger> _uiLogger;
}

+ (double)heightForCriticalAlert:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <OGLUILogger> uiLogger; // @synthesize uiLogger=_uiLogger;
@property(retain, nonatomic) MDCRippleTouchController *rippleTouchController; // @synthesize rippleTouchController=_rippleTouchController;
@property(retain, nonatomic) MDCFlatButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) OGLCriticalAlert *criticalAlert; // @synthesize criticalAlert=_criticalAlert;
@property(nonatomic) __weak id <OGLCriticalAlertActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) id <OGLTheming> oglTheme;
- (double)containerWidthFromWidthConstraint:(double)arg1;
- (void)actionButtonDidTap;
- (void)alertViewDidTap;
- (_Bool)rippleTouchController:(id)arg1 shouldProcessRippleTouchesAtTouchLocation:(struct CGPoint)arg2;
- (void)applyTheme;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void)instrumentVisualElements;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToSuperview;
- (id)initWithCriticalAlert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

