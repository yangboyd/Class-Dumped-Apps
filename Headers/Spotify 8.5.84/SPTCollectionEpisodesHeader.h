//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface SPTCollectionEpisodesHeader : NSObject
{
    NSString *_title;
    NSMutableArray *_headerEpisodes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *headerEpisodes; // @synthesize headerEpisodes=_headerEpisodes;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)sortEpisodesWithDescriptor:(id)arg1;
@property(readonly, nonatomic) unsigned long long episodeCount;
@property(readonly, nonatomic) NSArray *episodes;
- (void)removeEpisode:(id)arg1;
- (void)appendEpisode:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end

