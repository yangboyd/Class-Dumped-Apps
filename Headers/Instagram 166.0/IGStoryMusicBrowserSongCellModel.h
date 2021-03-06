//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>

@class IGStoryMusicTrack, NSArray;

@interface IGStoryMusicBrowserSongCellModel : NSObject <IGListDiffable>
{
    _Bool _didViewStory;
    IGStoryMusicTrack *_track;
    NSArray *_storyReels;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didViewStory; // @synthesize didViewStory=_didViewStory;
@property(copy, nonatomic) NSArray *storyReels; // @synthesize storyReels=_storyReels;
@property(readonly, copy, nonatomic) IGStoryMusicTrack *track; // @synthesize track=_track;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTrack:(id)arg1 storyReels:(id)arg2 isBookmarked:(_Bool)arg3;

@end

