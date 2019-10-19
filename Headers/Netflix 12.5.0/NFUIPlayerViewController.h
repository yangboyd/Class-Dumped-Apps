//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NFPlayerViewProvider-Protocol.h"
#import "NFUIShakeRecognizerDelegate-Protocol.h"

@class NFUIPlaybackAuxiliaryDisplayProvider, NFUIPlayerView, NSDictionary, NSString, UIView;
@protocol NFUIPlayerControllerProtocol, NFUIPlayerViewControllerDelegate;

@interface NFUIPlayerViewController : UIViewController <NFUIShakeRecognizerDelegate, NFPlayerViewProvider>
{
    _Bool _useNFPlayer;
    _Bool _videoVisible;
    _Bool _replacingPlayerController;
    UIView *_placeholderView;
    id <NFUIPlayerViewControllerDelegate> _delegate;
    NFUIPlayerView *_playerView;
    UIView *_imageBasedSubtitlesHostView;
    NFUIPlaybackAuxiliaryDisplayProvider *_imageBasedSubtitlesController;
    id <NFUIPlayerControllerProtocol> _playerController;
    NSDictionary *_aspectDetails;
}

+ (_Bool)videoShouldBeVisibleForPlayerState:(unsigned long long)arg1;
@property(nonatomic) _Bool replacingPlayerController; // @synthesize replacingPlayerController=_replacingPlayerController;
@property(nonatomic) _Bool videoVisible; // @synthesize videoVisible=_videoVisible;
@property(readonly, nonatomic) NSDictionary *aspectDetails; // @synthesize aspectDetails=_aspectDetails;
@property(retain, nonatomic) id <NFUIPlayerControllerProtocol> playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) NFUIPlaybackAuxiliaryDisplayProvider *imageBasedSubtitlesController; // @synthesize imageBasedSubtitlesController=_imageBasedSubtitlesController;
@property(retain, nonatomic) UIView *imageBasedSubtitlesHostView; // @synthesize imageBasedSubtitlesHostView=_imageBasedSubtitlesHostView;
@property(retain, nonatomic) NFUIPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <NFUIPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useNFPlayer; // @synthesize useNFPlayer=_useNFPlayer;
- (void).cxx_destruct;
- (id)auxiliaryDisplayProvider;
- (void)presentPlayer:(id)arg1 forPlaybackId:(id)arg2;
- (id)prepareLayerForPlayer:(id)arg1 playbackId:(id)arg2;
- (void)handlePlayerControllerStateChange:(id)arg1 observer:(id)arg2;
- (void)handlePlayerLayerReadyForDisplayChange:(id)arg1 observer:(id)arg2;
- (void)handlePlayerViewPlayerLayerChange:(id)arg1 observer:(id)arg2;
- (void)hideVideo:(_Bool)arg1;
- (void)showVideo:(_Bool)arg1;
- (void)setVideoVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)removeViewIfNeeded:(id)arg1;
- (void)insertPlaceholderViewIfNeeded;
- (void)insertPlayerViewIfNeeded;
- (void)resetPlayerView;
- (void)initPlayerView;
- (void)avPlayerInitialized:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (id)createPlayerView;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithPlayerController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)shakeDetected;
- (id)init;
- (void)commonInitWithPlayerController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

