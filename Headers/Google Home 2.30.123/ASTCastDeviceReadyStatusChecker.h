//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTCastSetupRequester, NSString;

@interface ASTCastDeviceReadyStatusChecker : NSObject
{
    NSString *_ipAddress;
    NSString *_userID;
    long long _checkType;
    long long _retryCount;
    _Bool _usesHTTPS;
    long long _currentNumberOfRetries;
    double _retryInterval;
    ASTCastSetupRequester *_castSetupRequester;
    CDUnknownBlockType _completion;
    _Bool _treatsErrorAsSuccess;
}

+ (_Bool)isValidCheckType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool treatsErrorAsSuccess; // @synthesize treatsErrorAsSuccess=_treatsErrorAsSuccess;
- (void)setCastSetupRequester:(id)arg1;
- (id)castSetupRequester;
- (void)completeWithError:(id)arg1;
- (void)completeWithSuccess;
- (void)completeWithReady:(id)arg1 canEnroll:(id)arg2 enrollmentState:(id)arg3 errorCode:(id)arg4 error:(id)arg5;
- (id)requestJSONDictionary;
- (void)sendCheckReadyStatusRequest;
- (void)checkWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDeviceIPAddress:(id)arg1 userID:(id)arg2 checkType:(long long)arg3 retryCount:(long long)arg4 usesHTTPS:(_Bool)arg5 retryInterval:(double)arg6;
- (id)initWithDeviceIPAddress:(id)arg1 userID:(id)arg2 checkType:(long long)arg3 retryCount:(long long)arg4 usesHTTPS:(_Bool)arg5;

@end

