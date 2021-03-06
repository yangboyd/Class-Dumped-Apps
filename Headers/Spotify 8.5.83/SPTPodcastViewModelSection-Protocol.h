//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol SPTPodcast, SPTPodcastPlayer;

@protocol SPTPodcastViewModelSection <NSObject>
@property(readonly, nonatomic) double headerHeight;
- (long long)identifier;
- (void)updateWithPodcastPlayer:(id <SPTPodcastPlayer>)arg1;
- (void)updateWithPodcast:(id <SPTPodcast>)arg1;
- (UIView *)header;
- (unsigned long long)numberOfRows;
@end

