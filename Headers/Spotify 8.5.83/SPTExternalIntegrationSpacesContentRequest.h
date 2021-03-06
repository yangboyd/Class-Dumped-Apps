//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, NSURL, SPTDataLoader, SPTExternalIntegrationSpacesContentURLResolver, SPTPersistentCache;
@protocol SPTExternalIntegrationContentRequestOrigin;

@interface SPTExternalIntegrationSpacesContentRequest : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    SPTPersistentCache *_cache;
    SPTExternalIntegrationSpacesContentURLResolver *_URLResolver;
    NSURL *_URI;
    NSString *_locale;
    id <SPTExternalIntegrationContentRequestOrigin> _requestOrigin;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) id <SPTExternalIntegrationContentRequestOrigin> requestOrigin; // @synthesize requestOrigin=_requestOrigin;
@property(readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) SPTExternalIntegrationSpacesContentURLResolver *URLResolver; // @synthesize URLResolver=_URLResolver;
@property(readonly, nonatomic) SPTPersistentCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (id)cacheKey;
- (void)handleErrorResponse:(id)arg1;
- (void)handleSuccessfulResponse:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDataLoader:(id)arg1 contentURLResolver:(id)arg2 persistentCache:(id)arg3 spacesLocaleOverride:(id)arg4 URI:(id)arg5 requestOrigin:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

