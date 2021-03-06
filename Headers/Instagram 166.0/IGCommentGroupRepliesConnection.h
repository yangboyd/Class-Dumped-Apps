//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGCommentGroupRepliesConnection : NSObject
{
    _Bool _hasMorePreviousReplies;
    _Bool _hasMoreRecentReplies;
    NSArray *_previewComments;
    NSString *_minCursor;
    NSString *_maxCursor;
    long long _previousRepliesCount;
    long long _recentRepliesCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long recentRepliesCount; // @synthesize recentRepliesCount=_recentRepliesCount;
@property(readonly, nonatomic) _Bool hasMoreRecentReplies; // @synthesize hasMoreRecentReplies=_hasMoreRecentReplies;
@property(readonly, nonatomic) long long previousRepliesCount; // @synthesize previousRepliesCount=_previousRepliesCount;
@property(readonly, nonatomic) _Bool hasMorePreviousReplies; // @synthesize hasMorePreviousReplies=_hasMorePreviousReplies;
@property(readonly, copy, nonatomic) NSString *maxCursor; // @synthesize maxCursor=_maxCursor;
@property(readonly, copy, nonatomic) NSString *minCursor; // @synthesize minCursor=_minCursor;
@property(readonly, copy, nonatomic) NSArray *previewComments; // @synthesize previewComments=_previewComments;
- (_Bool)hasCursor;
@property(readonly, nonatomic) _Bool hasChildComments;
- (id)newInstance;
- (id)repliesConnectionByAddingComment:(id)arg1;
- (id)initWithPreviewComments:(id)arg1 minCursor:(id)arg2 maxCursor:(id)arg3 hasMorePreviousReplies:(_Bool)arg4 previousRepliesCount:(long long)arg5 hasMoreRecentReplies:(_Bool)arg6 recentRepliesCount:(long long)arg7;

@end

