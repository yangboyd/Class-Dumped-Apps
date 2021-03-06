//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKTeamDriveQuerying-Protocol.h"

@class NSPointerArray, NSString;
@protocol GDKCelloExecuting, GDKCelloObserverRegistering;

@interface GDKCelloTeamDriveQuerent : NSObject <GDKTeamDriveQuerying>
{
    id <GDKCelloExecuting> _cello;
    id <GDKCelloObserverRegistering> _celloObserverRegistrar;
    NSPointerArray *_teamDriveDelegates;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPointerArray *teamDriveDelegates; // @synthesize teamDriveDelegates=_teamDriveDelegates;
@property(readonly, nonatomic) id <GDKCelloObserverRegistering> celloObserverRegistrar; // @synthesize celloObserverRegistrar=_celloObserverRegistrar;
@property(readonly, nonatomic) id <GDKCelloExecuting> cello; // @synthesize cello=_cello;
- (void)registerTeamDrivesObserverForDelegate:(id)arg1;
- (void)registerTeamDriveChangedObserver:(CDUnknownBlockType)arg1;
- (void)listTeamDrives:(id)arg1 onResult:(CDUnknownBlockType)arg2;
- (void)listTeamDrivesWithSkipLocalstore:(_Bool)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryTeamDrivesWithDelegate:(id)arg1;
- (id)initWithCello:(id)arg1 celloObserverRegistrar:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

