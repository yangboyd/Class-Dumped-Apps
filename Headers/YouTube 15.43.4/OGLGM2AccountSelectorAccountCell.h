//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/OGLGM2AccountSelectorAccountCellBase.h>

@class MDCButton, OGLAccountMenuCriticalAlertView, OGLIgnoreTapView, UIImageView, UILabel, UIView;

@interface OGLGM2AccountSelectorAccountCell : OGLGM2AccountSelectorAccountCellBase
{
    _Bool _isAvatarTappable;
    _Bool _signedIn;
    UIImageView *_trailingImageView;
    OGLAccountMenuCriticalAlertView *_criticalAlertView;
    OGLIgnoreTapView *_ignoreTapView;
    UIView *_separatorView;
    MDCButton *_signInButton;
    UIImageView *_logoView;
    UIView *_rippleTouchAreaView;
    MDCButton *_tappableAvatarButton;
    UILabel *_accessoryViewLabel;
}

+ (double)cachedAccountLockupHeight:(id)arg1 constrainToCellWidth:(double)arg2;
+ (void)resetLayoutCache;
+ (double)heightWithItem:(id)arg1 constrainToCellWidth:(double)arg2 tableView:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *accessoryViewLabel; // @synthesize accessoryViewLabel=_accessoryViewLabel;
@property(retain, nonatomic) MDCButton *tappableAvatarButton; // @synthesize tappableAvatarButton=_tappableAvatarButton;
@property(retain, nonatomic) UIView *rippleTouchAreaView; // @synthesize rippleTouchAreaView=_rippleTouchAreaView;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) MDCButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) OGLIgnoreTapView *ignoreTapView; // @synthesize ignoreTapView=_ignoreTapView;
@property(retain, nonatomic) OGLAccountMenuCriticalAlertView *criticalAlertView; // @synthesize criticalAlertView=_criticalAlertView;
@property(retain, nonatomic) UIImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(nonatomic, getter=isSignedIn) _Bool signedIn; // @synthesize signedIn=_signedIn;
- (_Bool)isAvatarTappable;
- (void)applyTheme;
- (void)rippleTouchController:(id)arg1 insertRippleView:(id)arg2 intoView:(id)arg3;
- (_Bool)rippleTouchController:(id)arg1 shouldProcessRippleTouchesAtTouchLocation:(struct CGPoint)arg2;
- (void)accountParticleDiscViewDidUpdateBadge:(id)arg1;
- (void)didTapAvatar:(id)arg1;
- (void)stopFauxbakeAnimationIfNeeded;
- (void)startFauxbakeAnimationIfNeeded;
- (void)updateFauxbakeAnimationWithOnState:(_Bool)arg1;
- (void)layoutSubviews;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (void)setUpAccessibility;
- (void)setAccessibilityLabel:(id)arg1;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (void)updateWithItem:(id)arg1;
- (void)setAccessoryViewText:(id)arg1;
- (void)setIsAvatarTappable:(_Bool)arg1;

@end

