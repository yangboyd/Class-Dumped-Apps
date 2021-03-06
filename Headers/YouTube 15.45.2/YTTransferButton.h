//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTQTMButton.h>

#import <Module_Framework/YTReusableView-Protocol.h>
#import <Module_Framework/YTTintableActionSheetButtonProtocol-Protocol.h>

@class NSString, UIColor, UIImageView, YTTimedAction, YTTransferButtonActivityIndicator;

@interface YTTransferButton : YTQTMButton <YTReusableView, YTTintableActionSheetButtonProtocol>
{
    YTTransferButtonActivityIndicator *_activityIndicator;
    YTTimedAction *_arrowAction;
    unsigned long long _stateChangeCounter;
    UIColor *_tintColorOverride;
    UIImageView *_backgroundImageView;
    long long _transferButtonState;
    long long _transferButtonStyle;
    double _progressingToPendingHysteresisDelay;
    UIColor *_defaultTintColor;
    UIColor *_disabledTintColor;
}

+ (id)defaultColorForState:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *disabledTintColor; // @synthesize disabledTintColor=_disabledTintColor;
@property(retain, nonatomic) UIColor *defaultTintColor; // @synthesize defaultTintColor=_defaultTintColor;
@property(nonatomic) double progressingToPendingHysteresisDelay; // @synthesize progressingToPendingHysteresisDelay=_progressingToPendingHysteresisDelay;
@property(nonatomic) long long transferButtonStyle; // @synthesize transferButtonStyle=_transferButtonStyle;
@property(nonatomic) long long transferButtonState; // @synthesize transferButtonState=_transferButtonState;
- (id)arrowAction;
- (void)resetImageTint;
- (_Bool)isAnimatingState:(long long)arg1;
- (void)stopArrowAnimation;
- (void)startArrowAnimation;
- (void)setProgressImageForStep:(unsigned long long)arg1;
- (void)updateTransferButtonImage;
- (id)imageForTransferStep:(unsigned long long)arg1;
- (id)imageForTransferButtonState:(long long)arg1;
- (_Bool)shouldTintCurrentImageForActionSheet;
- (void)pageStyleDidChange:(long long)arg1;
- (void)setTransferButtonState:(long long)arg1 overrideDelay:(_Bool)arg2;
@property(nonatomic) double progress;
- (void)setTintColor:(id)arg1;
- (void)setVisible:(_Bool)arg1 dimmed:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setPlaylistStatus:(int)arg1;
- (void)setVideoStatus:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

