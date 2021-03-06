//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEListDataController, NSArray;
@protocol AWEHttpTask, AWERelationListDataProtocol;

@interface AWEIMGroupInviteFollowerDataController : NSObject
{
    _Bool _isSearchMode;
    _Bool _searchHasMore;
    AWEListDataController<AWERelationListDataProtocol> *_relationListDataController;
    NSArray *_followerSearchList;
    id <AWEHttpTask> _searchTask;
    long long _searchCursor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool searchHasMore; // @synthesize searchHasMore=_searchHasMore;
@property(nonatomic) long long searchCursor; // @synthesize searchCursor=_searchCursor;
@property(retain, nonatomic) id <AWEHttpTask> searchTask; // @synthesize searchTask=_searchTask;
@property(retain, nonatomic) NSArray *followerSearchList; // @synthesize followerSearchList=_followerSearchList;
@property(retain, nonatomic) AWEListDataController<AWERelationListDataProtocol> *relationListDataController; // @synthesize relationListDataController=_relationListDataController;
@property(nonatomic) _Bool isSearchMode; // @synthesize isSearchMode=_isSearchMode;
@property(readonly, nonatomic) _Bool hasMore;
@property(readonly, nonatomic) NSArray *followerUserList;
- (void)resetSearchStateIsLoadMore:(_Bool)arg1;
- (void)search:(id)arg1 loadMore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchFollowerUserListIsLoadMore:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

