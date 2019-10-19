//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationCardsProvider-Protocol.h"

@class NSString, SPTAssistedCurationCardModelImplementation;
@protocol SPTAssistedCurationCardsProviderDelegate, SPTCosmosDictionaryDataLoader;

@interface SPTAssistedCurationRecentlyPlayedCardProvider : NSObject <SPTAssistedCurationCardsProvider>
{
    id <SPTAssistedCurationCardsProviderDelegate> _delegate;
    SPTAssistedCurationCardModelImplementation *_currentCard;
    id <SPTCosmosDictionaryDataLoader> _cosmosDataLoader;
}

+ (id)identifier;
@property(retain, nonatomic) id <SPTCosmosDictionaryDataLoader> cosmosDataLoader; // @synthesize cosmosDataLoader=_cosmosDataLoader;
@property(retain, nonatomic) SPTAssistedCurationCardModelImplementation *currentCard; // @synthesize currentCard=_currentCard;
@property(nonatomic) __weak id <SPTAssistedCurationCardsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tracksFromResponseDictionary:(id)arg1;
- (void)fetchTrackWithCompletion:(CDUnknownBlockType)arg1;
- (void)provideCardsForCurrentTracks:(id)arg1 andPlaylistName:(id)arg2;
- (id)initWithCosmosDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

