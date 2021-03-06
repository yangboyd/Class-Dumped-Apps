//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsTasksSharedDataImplDatamodelDataModelImpl_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> clockProvider_;
    id <JavaxInjectProvider> performanceClockProvider_;
    id <JavaxInjectProvider> timeServiceProvider_;
    id <JavaxInjectProvider> dataStoreProvider_;
    id <JavaxInjectProvider> accountDataStoreProvider_;
    id <JavaxInjectProvider> dataReaderProvider_;
    id <JavaxInjectProvider> shardProvider_;
    id <JavaxInjectProvider> userProvider_;
    id <JavaxInjectProvider> enableI18nProvider_;
    id <JavaxInjectProvider> syncControlProvider_;
    id <JavaxInjectProvider> platformRuntimeFlagsProvider_;
    id <JavaxInjectProvider> platformProtoLoggerProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

