//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TTPushManager;
@protocol IESLiveWsManagerDelegate;

@interface IESLiveWsManager : NSObject
{
    id <IESLiveWsManagerDelegate> _liveWsDelegate;
    NSArray *_errorCodeArray;
    TTPushManager *_wsPushManager;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) TTPushManager *wsPushManager; // @synthesize wsPushManager=_wsPushManager;
@property(retain, nonatomic) NSArray *errorCodeArray; // @synthesize errorCodeArray=_errorCodeArray;
@property(nonatomic) __weak id <IESLiveWsManagerDelegate> liveWsDelegate; // @synthesize liveWsDelegate=_liveWsDelegate;
- (int)p_getClientVersionNumber;
- (int)p_currentNetworkStatus;
- (int)p_currentPlatform;
- (_Bool)p_isLiveWsURL:(id)arg1;
- (_Bool)p_isLiveChannel:(id)arg1;
- (void)p_handleNetworkChange:(long long)arg1;
- (void)liveAppDidBecomeActive:(id)arg1;
- (void)liveReachabilityChangedNotification:(id)arg1;
- (void)livePushManagerConnectionStateChanged:(id)arg1;
- (void)livePushManagerConnectionError:(id)arg1;
- (void)livePushManagerReceivingMessage:(id)arg1;
- (void)p_removeObservers;
- (void)p_addObservers;
- (void)sendAckMessageWithExt:(id)arg1 logID:(unsigned long long)arg2;
- (void)closeConnect;
- (void)connect;
- (_Bool)isConnected;
- (void)configLCSWithAppKey:(id)arg1 fpId:(id)arg2 deviceId:(id)arg3 appId:(id)arg4 installId:(id)arg5 sessionId:(id)arg6 wsURLs:(id)arg7 customParams:(id)arg8;
- (id)init;
- (void)dealloc;

@end

