//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConfigServiceProtocol-Protocol.h"

@class ARCBuiltInConfigProvider, ARCMetricLogger, ARCPersistentConfigProvider, NSDictionary, NSLock, NSString, SNPFileStore;

@interface ARCRuntimeConfigService : NSObject <APSConfigServiceProtocol>
{
    SNPFileStore *_store;
    NSDictionary *_cache;
    NSLock *_lock;
    ARCBuiltInConfigProvider *_builtIn;
    ARCPersistentConfigProvider *_persistentConfig;
    ARCMetricLogger *_logger;
}

@property(retain, nonatomic) ARCMetricLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) ARCPersistentConfigProvider *persistentConfig; // @synthesize persistentConfig=_persistentConfig;
@property(retain, nonatomic) ARCBuiltInConfigProvider *builtIn; // @synthesize builtIn=_builtIn;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) SNPFileStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (_Bool)isPersistentConfigEnabled;
- (id)getCachedResultForName:(id)arg1;
- (void)cacheResult:(id)arg1 forName:(id)arg2;
- (void)scheduleFetchForName:(id)arg1;
- (id)configDataWithNamespace:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

