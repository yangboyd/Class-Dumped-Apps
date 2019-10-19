//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistFetcher-Protocol.h"

@class FriendStories, NSString, SCDeepLinkURL, SCUserSession;
@protocol SCOperaPlaylistFetcherDelegate;

@interface SCStoryDeeplinkHandler : NSObject <SCOperaPlaylistFetcher>
{
    SCDeepLinkURL *_deepLinkURL;
    unsigned long long _loadingState;
    NSString *_sharedIdToDisplay;
    SCUserSession *_userSession;
    FriendStories *_friendStories;
    NSString *_username;
    id <SCOperaPlaylistFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaPlaylistFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) FriendStories *friendStories; // @synthesize friendStories=_friendStories;
- (void).cxx_destruct;
- (void)setLoadingState:(unsigned long long)arg1;
- (unsigned long long)loadingState;
- (void)_didFetchLiveStoryMetadataWithResponse:(id)arg1 username:(id)arg2;
- (void)_fetchLiveStoryMetadata:(id)arg1;
- (void)_resolveHttpsURLIfNecessary;
- (void)fetchPlaylist;
- (id)firstDisplayGroupDataModel;
- (id)resolvedDataModels;
- (id)currentLoadingProperties;
- (void)_deeplinkValidationDidFail;
- (void)_wasDeniedDeepLinkingWithError:(id)arg1;
- (void)_didSucceedValidatingDeeplinkWithFriendStories:(id)arg1;
- (id)initWithURL:(id)arg1 additionalInfo:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

