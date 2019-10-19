//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString;

@interface SCStoriesCustomStoryPlaybackSequenceChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_publicationId;
    NSString *_mischiefId;
    NSArray *_storySnaps;
}

+ (id)deletionRequestForStoriesCustomStoryPlaybackSequence:(id)arg1;
+ (id)changeRequestForStoriesCustomStoryPlaybackSequence:(id)arg1;
+ (id)creationRequestWithStoriesCustomStoryPlaybackSequence:(id)arg1;
@property(copy, nonatomic) NSArray *storySnaps; // @synthesize storySnaps=_storySnaps;
@property(copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
@property(copy, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_storiesCustomStoryPlaybackSequence;
- (id)initWithRowid:(long long)arg1 publicationId:(id)arg2 mischiefId:(id)arg3 storySnaps:(id)arg4;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

