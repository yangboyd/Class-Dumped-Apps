//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIPSyncLogger-Protocol.h"

@protocol GIPLogFilter;

@interface GSCErrorHandler : NSObject <GIPSyncLogger>
{
    id <GIPLogFilter> _filter;
    int _errorCount;
    CDUnknownBlockType _errorHandlerBlock;
}

+ (void)register;
+ (id)sharedInstance;
+ (int)errorCountInBlock:(CDUnknownBlockType)arg1;
+ (void)assertBlockDoesNotReportError:(CDUnknownBlockType)arg1;
+ (void)assertBlockReportsError:(CDUnknownBlockType)arg1;
+ (void)resetAfterTest;
@property(copy, nonatomic) CDUnknownBlockType errorHandlerBlock; // @synthesize errorHandlerBlock=_errorHandlerBlock;
@property(nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
- (void).cxx_destruct;
- (void)logWithMessage:(id)arg1;
- (id)filter;
- (void)registerErrorHandlerBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType defaultErrorHandlerBlock;
- (id)init;

@end

