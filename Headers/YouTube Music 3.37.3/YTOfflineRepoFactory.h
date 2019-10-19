//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLOfflineRepoFactory-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, MLOfflineRepo, NSString;
@protocol YTIdentityProvider;

@interface YTOfflineRepoFactory : NSObject <YTUserChangedObserver, MLOfflineRepoFactory>
{
    MLOfflineRepo *_currentOfflineRepo;
    id <YTIdentityProvider> _identityProvider;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)userDidChange;
- (id)offlineRepo;
- (void)overrideDefaultIdentityProvider:(id)arg1;
- (id)offlineRepoForUserID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

