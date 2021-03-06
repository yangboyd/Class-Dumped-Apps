//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager;

@interface FBWatchdogTimerContext : NSObject
{
    _Bool _shouldRun;
    _Bool _shouldLog;
    _Bool _checked;
    NSFileManager *_fileManager;
    struct mutex _mutex;
}

+ (id)sharedContext;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)disableWatchdogInProduction;
- (void)enableWatchdogInProductionWithStallLoggingEnabled:(_Bool)arg1;
- (_Bool)shouldRunInProduction;
- (void)_readDiskStateIfNecessary;
@property(readonly, nonatomic) _Bool shouldLogStallAssertionsInProduction;
- (void)_setShouldLogStallAssertionsInProduction:(_Bool)arg1;
- (id)initWithFileManager:(id)arg1;

@end

