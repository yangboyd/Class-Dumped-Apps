//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTAssistedWritingFutures.h"

@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@interface JBTAutoValue_AssistedWritingFutures : JBTAssistedWritingFutures
{
    id <ComGoogleCommonUtilConcurrentListenableFuture> smartcompose_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> autocorrect_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> subjectSuggest_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> dataProtection_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> spellingAndGrammar_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> blacklistResponse_;
}

- (void)dealloc;
- (id)blacklistResponse;
- (id)spellingAndGrammar;
- (id)dataProtection;
- (id)subjectSuggest;
- (id)autocorrect;
- (id)smartcompose;

@end

