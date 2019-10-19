//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, SCExperimentManager, SCLazy, SCLensRequestManager;
@protocol SCPerforming;

@interface SCLensURLDataFetcher : NSObject
{
    SCLazy *_lensCache;
    id <SCPerforming> _performer;
    SCLensRequestManager *_requestManager;
    NSFileManager *_fileManager;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)_resourceWithType:(long long)arg1 URLString:(id)arg2 signature:(id)arg3 checksum:(id)arg4;
- (id)requestKeyForPath:(id)arg1;
- (void)_logCacheMetric:(id)arg1 value:(long long)arg2 type:(id)arg3;
- (void)logCacheUsage;
- (void)removeContentForURL:(id)arg1 resourceType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeExpiredContentWithCacheCondition:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markLocallyCachedContentUsageForURL:(id)arg1 resourceType:(long long)arg2 lensID:(id)arg3 domain:(id)arg4 expirationDate:(id)arg5;
- (void)boostRequest:(id)arg1 setting:(id)arg2;
- (void)_requestdidFinishWithData:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchWithManagedLocalUrl:(id)arg1 requestKey:(id)arg2 metadata:(id)arg3 resourceUrlString:(id)arg4 requestSettings:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_fetchURLContentDataPath:(id)arg1 withType:(long long)arg2 signature:(id)arg3 checksum:(id)arg4 lensID:(id)arg5 cacheDomain:(id)arg6 expirationDate:(id)arg7 requestSettings:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (id)fetchURLContentDataPath:(id)arg1 lensID:(id)arg2 cacheDomain:(id)arg3 expirationDate:(id)arg4 requestSettings:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)fetchURLImage:(id)arg1 lensID:(id)arg2 cacheDomain:(id)arg3 expirationDate:(id)arg4 requestSettings:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)resetCache:(CDUnknownBlockType)arg1;
- (id)initWithRequestManager:(id)arg1 fileManager:(id)arg2 legacyCache:(id)arg3 preferencesStorage:(id)arg4 downloadTracker:(id)arg5 experimentManager:(id)arg6 performer:(id)arg7;
- (id)initWithRequestManager:(id)arg1 preferencesStorage:(id)arg2 downloadTracker:(id)arg3 experimentManager:(id)arg4;

@end

