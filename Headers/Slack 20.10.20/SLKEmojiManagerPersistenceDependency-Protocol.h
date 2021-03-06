//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString, SLKTraceContext;

@protocol SLKEmojiManagerPersistenceDependency
- (void)clearCache;
- (NSDictionary *)removeCustomEmojiWithNames:(NSArray *)arg1 traceContext:(SLKTraceContext *)arg2;
- (NSDictionary *)insertCustomEmojiWithName:(NSString *)arg1 value:(NSString *)arg2 traceContext:(SLKTraceContext *)arg3;
- (void)updateCachedEmojiListResponse:(NSDictionary *)arg1 cacheTs:(NSString *)arg2 traceContext:(SLKTraceContext *)arg3;
- (NSDictionary *)fetchCachedEmojiListResponseWith:(SLKTraceContext *)arg1;
@end

