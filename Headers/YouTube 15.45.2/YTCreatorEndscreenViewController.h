//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTEndscreenElementViewControllerDelegate-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>
#import <Module_Framework/YTSubscribeSwitchContainer-Protocol.h>

@class GIMMe, NSMutableArray, NSString, YTCreatorEndscreenView, YTIEndscreenElementRenderer, YTIEndscreenRenderer, YTImageService, YTNotificationMultiToggleButton, YTNotificationPreferenceToggleButton, YTSubscribeSwitch, YTSubscribeSwitchController;
@protocol YTCreatorEndscreenControllerDelegate, YTResponder;

@interface YTCreatorEndscreenViewController : UIViewController <YTEndscreenElementViewControllerDelegate, YTSubscribeSwitchContainer, YTResponder>
{
    YTImageService *_imageService;
    YTIEndscreenRenderer *_endscreenRenderer;
    YTCreatorEndscreenView *_creatorEndscreenView;
    NSMutableArray *_endscreenElementControllers;
    NSMutableArray *_thumbnailControllers;
    YTSubscribeSwitchController *_subscribeSwitchController;
    YTIEndscreenElementRenderer *_activeEndscreenElementRenderer;
    _Bool _endscreenActivated;
    _Bool _wasPlaying;
    _Bool _isDoubleTapToSeekActive;
    _Bool _hasLoggedImpression;
    long long _playerState;
    int _playerViewLayout;
    id <YTCreatorEndscreenControllerDelegate> _endscreenDelegate;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    double _mediaTime;
}

- (void).cxx_destruct;
@property(nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(nonatomic) int playerViewLayout; // @synthesize playerViewLayout=_playerViewLayout;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTCreatorEndscreenControllerDelegate> endscreenDelegate; // @synthesize endscreenDelegate=_endscreenDelegate;
- (_Bool)endscreenActivated;
- (void)hideInfoCardsIfNecessary;
- (void)closeHoverCard;
- (void)closeHoverCardWithLogging;
- (void)executeEndpoint;
- (void)updateThumbnailMappingsWithMappings:(id)arg1;
- (_Bool)isThumbnailMappingEmpty:(id)arg1;
- (_Bool)hasThumbnailMapping:(id)arg1;
- (void)pauseVideo;
- (void)playVideo;
- (void)deactivateEndscreen;
- (void)activateEndscreen;
- (void)updateEndscreenStatus;
- (void)setupEndscreenElements;
- (void)openHovercardWithEndscreenElementRenderer:(id)arg1;
- (void)setNeedsLayout;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton;
@property(readonly, nonatomic) YTNotificationPreferenceToggleButton *notificationToggleButton;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch;
- (void)unfadeCreatorEndscreen;
- (void)fadeCreatorEndscreen;
- (void)doubleTapToSeekWillHide;
- (void)doubleTapToSeekWillShow;
- (void)playerControlsWillHide;
- (void)playerControlsWillShow;
- (void)userDidStopScrubbing;
- (void)playerStateDidChangeToState:(long long)arg1;
@property(readonly, nonatomic) YTCreatorEndscreenView *creatorEndscreenView;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithEndscreenRenderer:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

