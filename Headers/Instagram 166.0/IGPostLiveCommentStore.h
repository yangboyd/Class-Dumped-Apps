//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IGPostLiveCommentStore : NSObject
{
    long long _latestOffset;
    long long _nextFetchOffset;
    NSMutableDictionary *_offsetToCommentModels;
    NSMutableDictionary *_offsetToPinnedCommentModel;
}

- (void).cxx_destruct;
- (id)pinnedCommentForOffset:(long long)arg1;
- (id)commentsForOffset:(long long)arg1;
- (long long)nextFetchOffset;
- (long long)latestOffset;
- (void)removeComment:(id)arg1;
- (void)processCommentsChunk:(id)arg1;
- (id)init;

@end

