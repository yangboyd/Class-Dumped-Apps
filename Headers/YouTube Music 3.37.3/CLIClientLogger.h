//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIPAsyncLogger-Protocol.h"

@class CCTClearcutLogger, CLIClientEventMetadata, NSString;
@protocol GIPLogFilter, OS_dispatch_queue;

@interface CLIClientLogger : NSObject <GIPAsyncLogger>
{
    NSString *_applicationName;
    CCTClearcutLogger *_logger;
    id <GIPLogFilter> _filter;
    NSObject<OS_dispatch_queue> *_queue;
    CLIClientEventMetadata *_eventMetadata;
}

+ (id)formattedSymbolStringWithIndex:(unsigned long long)arg1 codeModuleFileName:(id)arg2 address:(void *)arg3;
@property(readonly, nonatomic) CLIClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) CCTClearcutLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
- (void).cxx_destruct;
- (id)dummyEventID;
- (void)logWithMessage:(id)arg1;
- (id)filter;
- (id)operationQueue;
- (id)initWithApplicationName:(id)arg1 clearcutLogger:(id)arg2 filter:(id)arg3;
- (id)initWithApplicationName:(id)arg1 clearcutLogger:(id)arg2;
- (id)initWithApplicationName:(id)arg1 filter:(id)arg2;
- (id)initWithApplicationName:(id)arg1;

@end

