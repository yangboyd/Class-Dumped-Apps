//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSURL, SPTPodcastEpisodeCoverArtViewModel;

@protocol SPTPodcastEpisodeCoverArtViewModelDelegate <NSObject>
- (struct CGSize)viewModel:(SPTPodcastEpisodeCoverArtViewModel *)arg1 sizeForDisplayingImageURL:(NSURL *)arg2;
- (void)viewModel:(SPTPodcastEpisodeCoverArtViewModel *)arg1 didUpdateWithError:(NSError *)arg2;
@end

