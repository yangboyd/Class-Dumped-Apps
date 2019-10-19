//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDService.h"

@class NSString;
@protocol IDApplicationManagementServiceDelegate;

@interface IDApplicationManagementService : IDService
{
    id <IDApplicationManagementServiceDelegate> _delegate;
    NSString *_uniqueIdentifier;
}

@property(retain) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property __weak id <IDApplicationManagementServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)session:(id)arg1 applicationManagementService:(long long)arg2 handleApplicationManagementServiceEvent:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 appIdentifier:(id)arg5;
- (void)removeAppEventHandler;
- (void)addAppEventHandler;
- (void)registerFeatureInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)disposeWithError:(id *)arg1;
- (void)setupApplicationManagementService;
- (id)initWithEtchSession:(id)arg1 handle:(long long)arg2;
- (id)initWithEtchSession:(id)arg1 handle:(long long)arg2 identifier:(id)arg3;

@end

