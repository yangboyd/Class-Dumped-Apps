//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTURISubtypeHandler-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTDataLoaderCancellationToken, SPTMetaViewController, SPTPlayer;

@interface SPTLiveVideoSubtypeHandler : NSObject <SPTPlayerObserver, SPTDataLoaderDelegate, SPTURISubtypeHandler>
{
    id <SPTPlayer> _player;
    id <SPTMetaViewController> _metaViewController;
    SPTDataLoader *_dataLoader;
    id <SPTDataLoaderCancellationToken> _dataLoaderCancellationToken;
    NSString *_UID;
}

@property(copy, nonatomic) NSString *UID; // @synthesize UID=_UID;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> dataLoaderCancellationToken; // @synthesize dataLoaderCancellationToken=_dataLoaderCancellationToken;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)setupLivePlayerWithDictionary:(id)arg1;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (id)initWithPlayer:(id)arg1 metaViewController:(id)arg2 dataLoader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

