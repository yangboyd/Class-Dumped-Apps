//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDKFileQuery, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GDKQuerySuggestionService <NSObject>
- (void)fetchMatchingFilesForQuery:(GDKFileQuery *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchSuggestionsForQuery:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(GDKQuerySuggestResponse *))arg3;
@end

