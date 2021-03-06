//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileNowPlayingViewPodcastEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileNowPlayingViewPodcastEventFactoryImplementation : NSObject <SPTUBIMobileNowPlayingViewPodcastEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPageIdentifier:(id)arg1 pageUri:(id)arg2;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)swipeUiHide;
- (id)dragUiReveal;
- (id)scrollComponentsFactory;
- (id)bottomBarFactory;
- (id)mainControlsFactory;
- (id)playbackProgressFactory;
- (id)trackInformationFactory;
- (id)coverArtFactory;
- (id)topBarFactory;
- (id)_location;
- (id)initWithPageIdentifier:(id)arg1 pageUri:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

