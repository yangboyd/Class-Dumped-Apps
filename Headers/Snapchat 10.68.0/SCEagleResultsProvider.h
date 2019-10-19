//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCExperimentManager, SCLazy, SCSessionRequestManager;

@interface SCEagleResultsProvider : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
    SCLazy *_snapTokenProvider;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (void)_submitRequest:(id)arg1 searchType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchProductsWithSearchRequest:(id)arg1 searchType:(id)arg2 sessionId:(id)arg3 queryId:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchProductsBarcode:(id)arg1 sessionId:(id)arg2 queryId:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchProductsForImage:(id)arg1 sessionId:(id)arg2 queryId:(long long)arg3 metadata:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithSessionRequestManager:(id)arg1 snapTokenProvider:(id)arg2 experimentManager:(id)arg3;

@end

