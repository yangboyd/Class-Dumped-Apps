//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTStorageControllerObserver.h"
#import "YTSystemNotificationsObserver.h"

@class GIMMe, NSString, YTStorageController;

@interface YTOfflineStorageUsageController : NSObject <YTStorageControllerObserver, YTSystemNotificationsObserver>
{
    YTStorageController *_storageController;
    id <YTOfflineStorageUsageControllerDelegate> _delegate;
    _Bool _fetchingUsedStorageBytes;
    GIMMe *_gimme;
    unsigned long long _usedStorageBytes;
}

@property(readonly, nonatomic) _Bool fetchingUsedStorageBytes; // @synthesize fetchingUsedStorageBytes=_fetchingUsedStorageBytes;
@property(readonly, nonatomic) unsigned long long usedStorageBytes; // @synthesize usedStorageBytes=_usedStorageBytes;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)appWillEnterForeground:(id)arg1;
- (void)usedStorageDidChange;
- (void)fetchUsedStorageBytes;
- (unsigned long long)freeStorageBytes;
- (_Bool)hasCurrentStorageData;
- (id)storageFullMessage;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

