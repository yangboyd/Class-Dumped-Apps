//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <Core/WAAppState-Protocol.h>
#import <Core/WAAppStatePushNameLoading-Protocol.h>
#import <Core/WAAppStatePushNameMutating-Protocol.h>

@interface _TtC4Core37AppStateKeyValueMutationTargetManager : _TtCs12_SwiftObject <WAAppStatePushNameLoading, WAAppStatePushNameMutating, WAAppState>
{
    // Error parsing type: , name: store
    // Error parsing type: , name: userDefaults
    // Error parsing type: , name: storeAccessGranter
    // Error parsing type: , name: cache
    // Error parsing type: , name: cacheQueue
}

- (void)handleReleaseDidChange:(id)arg1;
- (id)loadPushNameWithoutThrowing;
- (_Bool)deletePushName:(id *)arg1;
- (_Bool)savePushName:(id)arg1 error:(id *)arg2;
- (_Bool)savePushName:(id)arg1 from:(long long)arg2 error:(id *)arg3;

@end

