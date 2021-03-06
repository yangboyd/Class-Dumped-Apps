//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIInteractionEvent, SPTUBIMobileNowPlayingViewFreetier_BottomBarEventFactory, SPTUBIMobileNowPlayingViewFreetier_CoverArtEventFactory, SPTUBIMobileNowPlayingViewFreetier_MainControlsEventFactory, SPTUBIMobileNowPlayingViewFreetier_PlaybackProgressEventFactory, SPTUBIMobileNowPlayingViewFreetier_ScrollComponentsEventFactory, SPTUBIMobileNowPlayingViewFreetier_TopBarEventFactory, SPTUBIMobileNowPlayingViewFreetier_TrackInformationEventFactory;

@protocol SPTUBIMobileNowPlayingViewFreetierEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)swipeUiHide;
- (id <SPTUBIInteractionEvent>)dragUiReveal;
- (id <SPTUBIMobileNowPlayingViewFreetier_ScrollComponentsEventFactory>)scrollComponentsFactory;
- (id <SPTUBIMobileNowPlayingViewFreetier_BottomBarEventFactory>)bottomBarFactory;
- (id <SPTUBIMobileNowPlayingViewFreetier_MainControlsEventFactory>)mainControlsFactory;
- (id <SPTUBIMobileNowPlayingViewFreetier_PlaybackProgressEventFactory>)playbackProgressFactory;
- (id <SPTUBIMobileNowPlayingViewFreetier_TrackInformationEventFactory>)trackInformationFactory;
- (id <SPTUBIMobileNowPlayingViewFreetier_CoverArtEventFactory>)coverArtFactory;
- (id <SPTUBIMobileNowPlayingViewFreetier_TopBarEventFactory>)topBarFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

