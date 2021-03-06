//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSURLSessionTask;

@interface MPURLResolver : NSObject
{
    NSURL *_originalURL;
    NSURL *_currentURL;
    NSURLSessionTask *_task;
    CDUnknownBlockType _completion;
}

+ (id)resolverWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(retain, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
- (void).cxx_destruct;
- (_Bool)shouldEnableClickthroughExperiment;
- (unsigned long long)stringEncodingFromContentType:(id)arg1;
- (id)safariURLForURL:(id)arg1;
- (id)storeItemIdentifierForURL:(id)arg1;
- (_Bool)URLPointsToAMap:(id)arg1;
- (_Bool)URLHasDeeplinkPlusScheme:(id)arg1;
- (_Bool)URLIsHTTPOrHTTPS:(id)arg1;
- (_Bool)URLShouldOpenInApplication:(id)arg1;
- (id)actionInfoFromURL:(id)arg1 error:(id *)arg2;
- (void)safeInvokeAndNilCompletionBlock:(id)arg1 error:(id)arg2;
- (void)cancel;
- (id)httpTaskWithRequest:(id)arg1;
- (void)start;
- (id)initWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

