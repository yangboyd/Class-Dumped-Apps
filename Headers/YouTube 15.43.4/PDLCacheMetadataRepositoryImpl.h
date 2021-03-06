//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/PDLCacheMetadataRepository-Protocol.h>

@class NSString;
@protocol PDLDatabaseProvider, PDLMetricsLogger;

@interface PDLCacheMetadataRepositoryImpl : NSObject <PDLCacheMetadataRepository>
{
    id <PDLDatabaseProvider> _databaseProvider;
    id <PDLMetricsLogger> _metricsLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PDLMetricsLogger> metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(readonly, nonatomic) __weak id <PDLDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
- (_Bool)deleteCacheMetadataWithCacheMetadataType:(long long)arg1 withDatabase:(id)arg2;
- (id)queryEntityWithCacheMetadataType:(long long)arg1 withDatabase:(id)arg2;
- (_Bool)updateEntity:(id)arg1 withDatabase:(id)arg2;
- (_Bool)deleteCacheMetadataWithCacheMetadataType:(long long)arg1;
- (id)queryWithCacheMetadataType:(long long)arg1;
- (_Bool)updateEntity:(id)arg1;
- (id)initWithDatabaseProvider:(id)arg1 metricsLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

