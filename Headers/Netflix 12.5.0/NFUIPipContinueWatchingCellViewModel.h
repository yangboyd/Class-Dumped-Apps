//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUIBookmark, NFUIPipContinueWatchingEntity, NFUIPipTrickplayEntity, NFUITrickPlayInfo, NSDictionary, NSIndexPath;

@interface NFUIPipContinueWatchingCellViewModel : NSObject
{
    NFUIPipContinueWatchingEntity *_pipEntity;
    NFUIBookmark *_bookmark;
    NSIndexPath *_indexPath;
    NSDictionary *_continueWatchingList;
    NFUIPipTrickplayEntity *_trickplayEntity;
    NFUITrickPlayInfo *_trickplayInfo;
}

@property(retain, nonatomic) NFUITrickPlayInfo *trickplayInfo; // @synthesize trickplayInfo=_trickplayInfo;
@property(retain, nonatomic) NFUIPipTrickplayEntity *trickplayEntity; // @synthesize trickplayEntity=_trickplayEntity;
@property(copy, nonatomic) NSDictionary *continueWatchingList; // @synthesize continueWatchingList=_continueWatchingList;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NFUIBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(retain, nonatomic) NFUIPipContinueWatchingEntity *pipEntity; // @synthesize pipEntity=_pipEntity;
- (void).cxx_destruct;
- (id)formatTrickplayUrl:(id)arg1 withIndex:(unsigned long long)arg2;
- (id)trickplayUrlsForCurrentBookmark;
- (id)trickplayUrls;
- (id)trickplayUrlsWithTitleCard;
- (id)seasonEpisodeString;
- (id)remainingTimeString;
- (id)runtimeString;
- (unsigned long long)numberOfItems;
- (double)position;
- (double)runtime;
- (void)refresh:(CDUnknownBlockType)arg1;
- (id)initWithPipEntity:(id)arg1;

@end

