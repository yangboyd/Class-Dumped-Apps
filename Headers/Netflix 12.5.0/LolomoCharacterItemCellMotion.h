//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LolomoCharacterItemCell.h"

#import "NFUIPlayerDelegate-Protocol.h"

@class NSString, UIImageView, UIView;

@interface LolomoCharacterItemCellMotion : LolomoCharacterItemCell <NFUIPlayerDelegate>
{
    unsigned char _tryToPlay;
    UIView *_playerView;
    NSString *_playerId;
    UIImageView *_characterImage;
}

+ (id)dequeueForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 withLolomoViewDelegate:(id)arg3;
+ (void)registerInCollectionView:(id)arg1 withLolomoViewDelegate:(id)arg2;
@property(retain, nonatomic) UIImageView *characterImage; // @synthesize characterImage=_characterImage;
@property(nonatomic) unsigned char tryToPlay; // @synthesize tryToPlay=_tryToPlay;
@property(retain, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)handleNotActive;
- (void)handleActive;
- (void)itemCellWillDisplay;
- (void)itemCellDidEndDisplaying;
- (void)player:(id)arg1 error:(id)arg2;
- (void)player:(id)arg1 stateChange:(unsigned long long)arg2 previous:(unsigned long long)arg3;
- (id)trackingInfo:(id)arg1;
- (void)removeBackgroundLayer;
- (void)insertBackgroundLayer:(long long)arg1;
- (void)prepareForReuse;
- (id)playerCollection;
- (void)addPlayerSubViewIfNecessary:(id)arg1;
- (id)initializePlayerWithViewModel:(id)arg1;
- (id)createPlaybackRequest:(id)arg1;
- (void)configureWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

