//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataStorageApiSqliteStorageConfigComponent, ComGoogleAppsBigtopDataStorageApiStorageReadyComponent, JBTRuntimeOptionsComponent;
@protocol ComGoogleAppsBigtopDataCommonCommonComponent, JBTLoggingEventLoggingComponent;

@interface ComGoogleAppsBigtopDataStorageDaggerIosStorageComponentImpl_Builder : NSObject
{
    id <ComGoogleAppsBigtopDataCommonCommonComponent> commonComponent_;
    id <JBTLoggingEventLoggingComponent> eventLoggingComponent_;
    JBTRuntimeOptionsComponent *runtimeOptionsComponent_;
    ComGoogleAppsBigtopDataStorageApiSqliteStorageConfigComponent *sqliteStorageConfigComponent_;
    ComGoogleAppsBigtopDataStorageApiStorageReadyComponent *storageReadyComponent_;
}

- (void)dealloc;
- (id)build;
- (id)storageReadyComponentWithComGoogleAppsBigtopDataStorageApiStorageReadyComponent:(id)arg1;
- (id)sqliteStorageConfigComponentWithComGoogleAppsBigtopDataStorageApiSqliteStorageConfigComponent:(id)arg1;
- (id)runtimeOptionsComponentWithJBTRuntimeOptionsComponent:(id)arg1;
- (id)eventLoggingComponentWithJBTLoggingEventLoggingComponent:(id)arg1;
- (id)commonComponentWithComGoogleAppsBigtopDataCommonCommonComponent:(id)arg1;

@end

