//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTOfflineModeObserver.h"
#import "YTSystemNotificationsObserver.h"
#import "YTUserChangedObserver.h"

@class GIMMe, NSMutableArray, NSString, YTSystemNotifications, YTUserDefaults;

@interface YTEntitlementRefreshController : NSObject <YTOfflineModeObserver, YTSystemNotificationsObserver, YTUserChangedObserver>
{
    NSMutableArray *_refreshableServices;
    id <YTOfflineModeProvider> _offlineModeProvider;
    YTSystemNotifications *_systemNotifications;
    YTUserDefaults *_userDefaults;
    id <YTIdentityProvider> _identityProvider;
    GIMMe *_gimme;
}

+ (double)refreshThreshold;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)shouldRefresh;
- (void)offlineModeDidChange;
- (void)appWillEnterForeground:(id)arg1;
- (void)userDidChange;
- (void)refresh;
- (void)addRefreshableService:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

