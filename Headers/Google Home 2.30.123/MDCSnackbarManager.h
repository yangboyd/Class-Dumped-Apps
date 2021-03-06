//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDCElevationOverriding-Protocol.h"

@class MDCSnackbarManagerInternal, NSMutableDictionary, UIColor, UIFont;
@protocol MDCSnackbarManagerDelegate;

@interface MDCSnackbarManager : NSObject <MDCElevationOverriding>
{
    UIColor *_snackbarMessageViewBackgroundColor;
    UIColor *_snackbarMessageViewShadowColor;
    double _messageElevation;
    UIColor *_messageTextColor;
    UIFont *_messageFont;
    UIFont *_buttonFont;
    _Bool _uppercaseButtonTitle;
    double _disabledButtonAlpha;
    UIColor *_buttonInkColor;
    NSMutableDictionary *_buttonTitleColors;
    _Bool _mdc_adjustsFontForContentSizeCategory;
    _Bool _shouldApplyStyleChangesToVisibleSnackbars;
    _Bool _adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable;
    _Bool _shouldEnableAccessibilityViewIsModal;
    unsigned int _focusAccessibilityNotification;
    double _mdc_overrideBaseElevation;
    CDUnknownBlockType _traitCollectionDidChangeBlockForMessageView;
    CDUnknownBlockType _mdc_elevationDidChangeBlockForMessageView;
    MDCSnackbarManagerInternal *_internalManager;
}

+ (id)defaultManager;
- (void).cxx_destruct;
@property(retain, nonatomic) MDCSnackbarManagerInternal *internalManager; // @synthesize internalManager=_internalManager;
@property(copy, nonatomic) CDUnknownBlockType mdc_elevationDidChangeBlockForMessageView; // @synthesize mdc_elevationDidChangeBlockForMessageView=_mdc_elevationDidChangeBlockForMessageView;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlockForMessageView; // @synthesize traitCollectionDidChangeBlockForMessageView=_traitCollectionDidChangeBlockForMessageView;
@property(nonatomic) _Bool shouldEnableAccessibilityViewIsModal; // @synthesize shouldEnableAccessibilityViewIsModal=_shouldEnableAccessibilityViewIsModal;
@property(nonatomic) _Bool adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable; // @synthesize adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable=_adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable;
@property(nonatomic) unsigned int focusAccessibilityNotification; // @synthesize focusAccessibilityNotification=_focusAccessibilityNotification;
@property(nonatomic) double mdc_overrideBaseElevation; // @synthesize mdc_overrideBaseElevation=_mdc_overrideBaseElevation;
@property(nonatomic) _Bool shouldApplyStyleChangesToVisibleSnackbars;
@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory;
- (id)buttonTitleColorForState:(unsigned long long)arg1;
- (void)setButtonTitleColor:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic) UIColor *buttonInkColor;
@property(nonatomic) double disabledButtonAlpha;
@property(nonatomic) _Bool uppercaseButtonTitle;
@property(retain, nonatomic) UIFont *buttonFont;
@property(retain, nonatomic) UIFont *messageFont;
@property(retain, nonatomic) UIColor *messageTextColor;
@property(nonatomic) double messageElevation;
@property(retain, nonatomic) UIColor *snackbarMessageViewShadowColor;
@property(retain, nonatomic) UIColor *snackbarMessageViewBackgroundColor;
- (void)runSnackbarUpdatesOnMainThread:(CDUnknownBlockType)arg1;
- (void)resumeMessagesWithToken:(id)arg1;
- (void)handleInvalidatedIdentifier:(id)arg1 forCategory:(id)arg2;
- (id)suspendAllMessages;
- (id)suspendMessagesWithCategory:(id)arg1;
@property(nonatomic) long long alignment;
- (void)setBottomOffset:(double)arg1;
- (void)dismissAndCallCompletionBlocksWithCategory:(id)arg1;
- (_Bool)hasMessagesShowingOrQueued;
- (void)setPresentationHostView:(id)arg1;
- (void)showMessage:(id)arg1;
@property(nonatomic) __weak id <MDCSnackbarManagerDelegate> delegate;
- (id)init;
- (void)ogl_showRemoveAccountSnackbar:(id)arg1 oglTheme:(id)arg2;
- (void)gmdc_applyTypographyThemeWithScheme:(id)arg1;
- (void)gmdc_applyColorThemeWithScheme:(id)arg1;
- (void)gmdc_applyThemeWithScheme:(id)arg1;

@end

