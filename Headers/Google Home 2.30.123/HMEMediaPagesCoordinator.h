//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEMediaAppsTaskCoordinatorDelegate-Protocol.h"
#import "HMEMediaHighlightCoordinatorDelegate-Protocol.h"
#import "HMEMediaPagesCoordinator-Protocol.h"

@class HMESetupNavigationController, NSString, SetupAnalyticsLogger, SetupCastDevice;
@protocol GCAConfigurationFlags, HMEMediaAppsTaskCoordinator, HMEMediaHighlightCoordinator, HMEMediaPagesCoordinatorDelegate;

@interface HMEMediaPagesCoordinator : NSObject <HMEMediaAppsTaskCoordinatorDelegate, HMEMediaHighlightCoordinatorDelegate, HMEMediaPagesCoordinator>
{
    id <HMEMediaPagesCoordinatorDelegate> _delegate;
    id <GCAConfigurationFlags> _flags;
    SetupAnalyticsLogger *_setupAnalyticsLogger;
    id <HMEMediaAppsTaskCoordinator> _audioAppsCoordinator;
    id <HMEMediaAppsTaskCoordinator> _radioAppsCoordinator;
    id <HMEMediaAppsTaskCoordinator> _videoAppsCoordinator;
    id <HMEMediaAppsTaskCoordinator> _liveTvAppsCoordinator;
    id <HMEMediaHighlightCoordinator> _mediaHighlightCoordinator;
    NSString *_structureServerID;
    HMESetupNavigationController *_navigationController;
    SetupCastDevice *_device;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SetupCastDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) HMESetupNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSString *structureServerID; // @synthesize structureServerID=_structureServerID;
@property(readonly, nonatomic) id <HMEMediaHighlightCoordinator> mediaHighlightCoordinator; // @synthesize mediaHighlightCoordinator=_mediaHighlightCoordinator;
@property(readonly, nonatomic) id <HMEMediaAppsTaskCoordinator> liveTvAppsCoordinator; // @synthesize liveTvAppsCoordinator=_liveTvAppsCoordinator;
@property(readonly, nonatomic) id <HMEMediaAppsTaskCoordinator> videoAppsCoordinator; // @synthesize videoAppsCoordinator=_videoAppsCoordinator;
@property(readonly, nonatomic) id <HMEMediaAppsTaskCoordinator> radioAppsCoordinator; // @synthesize radioAppsCoordinator=_radioAppsCoordinator;
@property(readonly, nonatomic) id <HMEMediaAppsTaskCoordinator> audioAppsCoordinator; // @synthesize audioAppsCoordinator=_audioAppsCoordinator;
@property(readonly, nonatomic) SetupAnalyticsLogger *setupAnalyticsLogger; // @synthesize setupAnalyticsLogger=_setupAnalyticsLogger;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(nonatomic) __weak id <HMEMediaPagesCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startMediaAppsCoordinator:(id)arg1;
- (void)startLiveTvAppsSetup;
- (void)startVideoAppsSetup;
- (void)startRadioAppsSetup;
- (void)startAudioAppsSetup;
- (void)didCompleteOrSkipHighlightedFirstPageSetup;
- (void)didCompleteOrSkipLiveTvAppsSetup;
- (void)didCompleteOrSkipVideoAppsSetup;
- (void)didCompleteOrSkipRadioAppsSetup;
- (void)didCompleteOrSkipAudioAppsSetup;
- (void)didCompleteOrSkipMediaAppsWithContentType:(long long)arg1;
- (void)mediaHighlightCoordinatorDidFinish:(id)arg1 shouldSkipServicePage:(_Bool)arg2;
- (void)mediaAppsTaskCoordinatorDidSkip:(id)arg1;
- (void)mediaAppsTaskCoordinatorDidCancel:(id)arg1;
- (void)mediaAppsTaskCoordinatorDidComplete:(id)arg1;
- (void)preloadDataForDevice:(id)arg1;
- (void)startInNavigationController:(id)arg1 forDevice:(id)arg2 structureServerID:(id)arg3;
- (id)initWithMediaAppsTaskCoordinatorFactory:(CDUnknownBlockType)arg1 mediaHighlightCoordinatorFactory:(CDUnknownBlockType)arg2 experimentFlags:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

