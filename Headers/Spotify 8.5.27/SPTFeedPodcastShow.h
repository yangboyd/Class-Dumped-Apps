//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFeedEntity.h"

@class NSArray, NSString, NSURL;

@interface SPTFeedPodcastShow : SPTFeedEntity
{
    NSURL *URI;
    NSString *_name;
    NSURL *_imageURL;
    NSArray *_tracks;
}

@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI;
- (void).cxx_destruct;
- (void)processDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

