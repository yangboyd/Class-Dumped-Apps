//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TDLDatabaseInitializer-Protocol.h"

@class JavaIoFile, NSString;

@interface TDLIosDatabaseInitializer : NSObject <TDLDatabaseInitializer>
{
    JavaIoFile *databaseFile_;
}

- (void)dealloc;
- (id)initializeDatabaseWithJavaUtilConcurrentExecutor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

