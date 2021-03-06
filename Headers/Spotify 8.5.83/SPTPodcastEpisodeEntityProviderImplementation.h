//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastEpisodeEntityProvider-Protocol.h"

@class NSString;
@protocol SPTPodcastDataLoader, SPTPodcastDataLoaderRequestToken, SPTPodcastEpisodeEntityProviderDelegate, SPTPodcastEpisodeFactory, SPTPodcastFactory, SPTPodcastRequestFactory;

@interface SPTPodcastEpisodeEntityProviderImplementation : NSObject <SPTPodcastEpisodeEntityProvider>
{
    id <SPTPodcastEpisodeEntityProviderDelegate> _delegate;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastRequestFactory> _podcastRequestFactory;
    id <SPTPodcastEpisodeFactory> _episodeFactory;
    id <SPTPodcastFactory> _podcastFactory;
    id <SPTPodcastDataLoaderRequestToken> _episodeRequestToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPodcastDataLoaderRequestToken> episodeRequestToken; // @synthesize episodeRequestToken=_episodeRequestToken;
@property(retain, nonatomic) id <SPTPodcastFactory> podcastFactory; // @synthesize podcastFactory=_podcastFactory;
@property(retain, nonatomic) id <SPTPodcastEpisodeFactory> episodeFactory; // @synthesize episodeFactory=_episodeFactory;
@property(retain, nonatomic) id <SPTPodcastRequestFactory> podcastRequestFactory; // @synthesize podcastRequestFactory=_podcastRequestFactory;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTPodcastEpisodeEntityProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unsubscribe;
- (void)loadShowForEpisodeURI:(id)arg1 numberOfEpisodes:(unsigned long long)arg2;
- (void)loadEpisodeWithURI:(id)arg1 withSubscription:(_Bool)arg2;
- (id)initWithDataLoader:(id)arg1 podcastRequestFactory:(id)arg2 episodeFactory:(id)arg3 podcastFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

