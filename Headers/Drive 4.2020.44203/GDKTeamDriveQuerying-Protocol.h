//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol GDKTeamDriveQueryingDelegate, OS_dispatch_queue;

@protocol GDKTeamDriveQuerying <NSObject>
- (void)listTeamDrivesWithSkipLocalstore:(_Bool)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)queryTeamDrivesWithDelegate:(id <GDKTeamDriveQueryingDelegate>)arg1;
@end

