//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDeviceSession, IGUserSession;
@protocol IGSessionManaging;

@interface IGAppStartupSetupSessionsContext : NSObject
{
    _Bool _currentUserWillRemainLoggedIn;
    IGDeviceSession *_deviceSession;
    id <IGSessionManaging> _sessionManager;
    IGUserSession *_initialUserSession;
}

@property(readonly, nonatomic) _Bool currentUserWillRemainLoggedIn; // @synthesize currentUserWillRemainLoggedIn=_currentUserWillRemainLoggedIn;
@property(readonly, nonatomic) IGUserSession *initialUserSession; // @synthesize initialUserSession=_initialUserSession;
@property(readonly, nonatomic) id <IGSessionManaging> sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, nonatomic) IGDeviceSession *deviceSession; // @synthesize deviceSession=_deviceSession;
- (void).cxx_destruct;
- (id)initWithDeviceSession:(id)arg1 sessionManager:(id)arg2 initialUserSession:(id)arg3 currentUserWillRemainLoggedIn:(_Bool)arg4;

@end

