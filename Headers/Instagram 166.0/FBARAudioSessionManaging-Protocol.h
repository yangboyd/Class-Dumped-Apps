//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol FBARAudioSessionManagingClient;

@protocol FBARAudioSessionManaging <NSObject>
@property(readonly, nonatomic) long long currentOutputType;
- (void)unregisterDeactivatingClient:(id <FBARAudioSessionManagingClient>)arg1 completion:(void (^)(_Bool))arg2;
- (void)reloadStateForActiveClient:(id <FBARAudioSessionManagingClient>)arg1 completion:(void (^)(_Bool))arg2;
- (void)registerActivatingClient:(id <FBARAudioSessionManagingClient>)arg1 completion:(void (^)(_Bool))arg2;
@end

