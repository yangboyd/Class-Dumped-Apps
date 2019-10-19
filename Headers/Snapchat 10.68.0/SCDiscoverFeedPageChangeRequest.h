//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString;

@interface SCDiscoverFeedPageChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    long long _pageType;
    NSArray *_feedTypes;
}

+ (id)deletionRequestForDiscoverFeedPage:(id)arg1;
+ (id)changeRequestForDiscoverFeedPage:(id)arg1;
+ (id)creationRequestWithDiscoverFeedPage:(id)arg1;
@property(copy, nonatomic) NSArray *feedTypes; // @synthesize feedTypes=_feedTypes;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_discoverFeedPage;
- (id)initWithRowid:(long long)arg1 pageType:(long long)arg2 feedTypes:(id)arg3;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

