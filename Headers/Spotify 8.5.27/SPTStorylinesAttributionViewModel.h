//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FollowModelObserver-Protocol.h"
#import "SPTStorylinesAttributionLoaderDelegate-Protocol.h"

@class NSCache, NSString, NSURL, SPTStorylinesAttributionLoader, SPTStorylinesLogger;
@protocol SPTLinkDispatcher, SPTPageRegistry, SPTStorylinesAttributionViewModelDelegate;

@interface SPTStorylinesAttributionViewModel : NSObject <SPTStorylinesAttributionLoaderDelegate, FollowModelObserver>
{
    id <SPTStorylinesAttributionViewModelDelegate> _delegate;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPageRegistry> _pageRegistry;
    SPTStorylinesAttributionLoader *_attributionLoader;
    SPTStorylinesLogger *_logger;
    NSCache *_followModelCache;
    NSURL *_pendingUri;
}

@property(retain, nonatomic) NSURL *pendingUri; // @synthesize pendingUri=_pendingUri;
@property(retain, nonatomic) NSCache *followModelCache; // @synthesize followModelCache=_followModelCache;
@property(retain, nonatomic) SPTStorylinesLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTStorylinesAttributionLoader *attributionLoader; // @synthesize attributionLoader=_attributionLoader;
@property(readonly, nonatomic) id <SPTPageRegistry> pageRegistry; // @synthesize pageRegistry=_pageRegistry;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTStorylinesAttributionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)didLoadFollowModel:(id)arg1;
- (void)didLoadAvatarImage:(id)arg1 forArtist:(id)arg2;
- (void)setTextForFollowState:(id)arg1;
- (void)fetchFollowModelForUri:(id)arg1;
- (void)fetchAvatarArtistImageForStorylines:(id)arg1;
- (void)resetAttributionForStorylines:(id)arg1;
- (void)toggleFollowForArtistURI:(id)arg1 forTrackURI:(id)arg2 currentCardIndex:(unsigned long long)arg3;
- (void)navigateToPageForStorylines:(id)arg1;
- (id)initWithLinkDispatcher:(id)arg1 pageRegistry:(id)arg2 attributionLoader:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

