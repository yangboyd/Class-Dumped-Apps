//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTProductState, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicFilterSortRuleFactory : NSObject
{
    id <SPTProductState> _productState;
    id <SPTYourLibraryMusicTestManager> _testManager;
}

+ (id)nameSortRule:(id)arg1 title:(id)arg2;
+ (id)nameSortRuleWithIdentifier:(id)arg1 title:(id)arg2;
+ (id)nameSortRuleWithIdentifier:(id)arg1 title:(id)arg2 groupLabel:(_Bool)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (id)customPlaylistsSortRuleWithOptions;
- (id)namePlaylistsSortRule;
- (id)relevancePlaylistsSortRule;
- (id)recentlyPlayedPlaylistsSortRuleWithOptions;
- (id)recentlyAddedPlaylistsSortRuleWithOptions;
- (id)recentlyAddedSongsSortRule;
- (id)recentlyAddedSortRule;
- (id)songsAlbumSortRule;
- (id)artistNameSortRule:(id)arg1 groupLabel:(_Bool)arg2;
- (id)albumArtistNameSortRule;
- (id)songsArtistNameSortRule;
- (id)albumNameSortRule;
- (id)artistNameSortRule;
- (id)songsNameSortRule;
- (id)recentlyPlayedCollectionEntitySortRuleWithIdentifier:(id)arg1;
- (id)downloadedPlaylistsFilterRule;
- (id)downloadedFilterRule;
- (id)songsAvailableFilterRules;
- (long long)songsDefaultSortRuleIndex;
- (id)songsAvailableSortRules;
- (id)playlistsAvailableFilterRules;
- (long long)playlistsDefaultSortRuleIndex;
- (id)playlistsAvailableSortRules;
- (id)artistsAvailableFilterRules;
- (long long)artistsDefaultSortRuleIndex;
- (id)artistsAvailableSortRules;
- (id)albumsAvailableFilterRules;
- (long long)albumsDefaultSortRuleIndex;
- (id)albumsAvailableSortRules;
- (id)initWithProductState:(id)arg1 testManager:(id)arg2;

@end

