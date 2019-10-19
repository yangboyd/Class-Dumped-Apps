//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDLQueryProcessorBase.h"

@class GPCPromise;

@interface PDLDeviceContactQueryProcessor : PDLQueryProcessorBase
{
    id <PDLCacheService> _cacheService;
    GPCPromise *_deviceContactCacheLoadedPromise;
}

@property(retain, nonatomic) GPCPromise *deviceContactCacheLoadedPromise; // @synthesize deviceContactCacheLoadedPromise=_deviceContactCacheLoadedPromise;
@property(readonly, nonatomic) id <PDLCacheService> cacheService; // @synthesize cacheService=_cacheService;
- (void).cxx_destruct;
- (long long)queryProcessorType;
- (void)cancel;
- (void)processQuery;
- (id)initWithDelegate:(id)arg1 context:(id)arg2 filter:(id)arg3 loadResultsQueue:(id)arg4;

@end

