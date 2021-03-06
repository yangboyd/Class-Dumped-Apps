//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGMediaIndicatorDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGMediaIndicator, NSString, UITapGestureRecognizer;
@protocol IGShoppingPDPLightboxVideoPlayerOverlayDelegate;

@interface IGShoppingPDPLightboxVideoPlayerOverlay : UIView <IGMediaIndicatorDelegate, UIGestureRecognizerDelegate>
{
    IGMediaIndicator *_audioIndicator;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _audioEnabled;
    _Bool _assetHasSound;
    id <IGShoppingPDPLightboxVideoPlayerOverlayDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) _Bool assetHasSound; // @synthesize assetHasSound=_assetHasSound;
@property(nonatomic) __weak id <IGShoppingPDPLightboxVideoPlayerOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setAudioIndicatorState;
- (void)_didTapCell:(id)arg1;
- (void)mediaIndicator:(id)arg1 didChangeToState:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)mediaIndicator:(id)arg1 willChangeToState:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)mediaIndicatorTapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

