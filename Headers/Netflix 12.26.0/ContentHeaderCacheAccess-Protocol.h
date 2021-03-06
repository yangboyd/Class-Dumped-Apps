//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSString;

@protocol ContentHeaderCacheAccess
- (void)removeAllHeadersForMovieId:(NSString *)arg1;
- (NSData *)getContentHeaderDataForMovieId:(NSString *)arg1 downloadableId:(NSString *)arg2;
- (void)removeContentHeaderDataForDownloadableId:(NSString *)arg1 movieId:(NSString *)arg2;
- (void)copyContentHeaderData:(NSData *)arg1 downloadableId:(NSString *)arg2 movieId:(NSString *)arg3;
- (void)appendContentHeaderData:(NSData *)arg1 downloadableId:(NSString *)arg2 movieId:(NSString *)arg3;
@end

