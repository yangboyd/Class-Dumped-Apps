//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString, SCStoriesSequenceInfo;

@interface SCStoriesFriendStoryPlaybackSequenceChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_userId;
    NSString *_username;
    NSArray *_storySnaps;
    SCStoriesSequenceInfo *_sequenceInfo;
}

+ (id)deletionRequestForStoriesFriendStoryPlaybackSequence:(id)arg1;
+ (id)changeRequestForStoriesFriendStoryPlaybackSequence:(id)arg1;
+ (id)creationRequestWithStoriesFriendStoryPlaybackSequence:(id)arg1;
@property(copy, nonatomic) SCStoriesSequenceInfo *sequenceInfo; // @synthesize sequenceInfo=_sequenceInfo;
@property(copy, nonatomic) NSArray *storySnaps; // @synthesize storySnaps=_storySnaps;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_storiesFriendStoryPlaybackSequence;
- (id)initWithRowid:(long long)arg1 userId:(id)arg2 username:(id)arg3 storySnaps:(id)arg4 sequenceInfo:(id)arg5;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

