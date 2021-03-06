//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileListDataProviderProtocol-Protocol.h"

@class DBRecentsBaseDataProvider, NSString;

@interface DBRecentsServerInfoDataProvider : NSObject <DBFileListDataProviderProtocol>
{
    DBRecentsBaseDataProvider *_dataProvider;
    unsigned long long _recentsSource;
}

- (void).cxx_destruct;
- (void)removeErrorObserver:(id)arg1;
- (id)addErrorObserver:(CDUnknownBlockType)arg1;
- (unsigned long long)revisionID;
- (void)removeUpdateObserver:(id)arg1;
- (id)addUpdateObserver:(CDUnknownBlockType)arg1;
- (id)allEntries;
- (_Bool)hasCachedData;
- (_Bool)refresh;
- (id)initWithUserState:(id)arg1 recentsSource:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

