//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol HTSLiveCameraEffectProvider, HTSLiveStreamEngineProvider, IESLiveAppInfo, IESLiveEnvironment, IESLiveHTTPClient, IESLiveMonitor, IESLiveRoomService, IESLiveUserService;

@interface HTSLiveStatsApi : NSObject
{
    NSString *_streamUrl;
    NSString *_startRoomMemory;
    NSDictionary *_optimizeInfo;
    long long _statsType;
    id <IESLiveUserService> _userService;
    id <HTSLiveCameraEffectProvider> _cameraEffectProvider;
    id <HTSLiveStreamEngineProvider> _streamEngineProvider;
    id <IESLiveHTTPClient> _client;
    id <IESLiveAppInfo> _appInfo;
    id <IESLiveMonitor> _monitor;
    id <IESLiveRoomService> _roomService;
    id <IESLiveEnvironment> _appEnvironment;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appEnvironment; // @synthesize appEnvironment=_appEnvironment;
@property(retain, nonatomic) id <IESLiveRoomService> roomService; // @synthesize roomService=_roomService;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveAppInfo> appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) id <IESLiveHTTPClient> client; // @synthesize client=_client;
@property(nonatomic) __weak id <HTSLiveStreamEngineProvider> streamEngineProvider; // @synthesize streamEngineProvider=_streamEngineProvider;
@property(nonatomic) __weak id <HTSLiveCameraEffectProvider> cameraEffectProvider; // @synthesize cameraEffectProvider=_cameraEffectProvider;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(nonatomic) long long statsType; // @synthesize statsType=_statsType;
@property(retain, nonatomic) NSDictionary *optimizeInfo; // @synthesize optimizeInfo=_optimizeInfo;
@property(copy, nonatomic) NSString *startRoomMemory; // @synthesize startRoomMemory=_startRoomMemory;
@property(copy, nonatomic) NSString *streamUrl; // @synthesize streamUrl=_streamUrl;
- (void).cxx_destruct;
- (void)statsWithInfo:(id)arg1;
- (void)stats:(id)arg1;
- (id)initWithStreamUrl:(id)arg1 startRoomMemory:(id)arg2 streamOptimizeInfo:(id)arg3 statsType:(long long)arg4;
- (id)initWithStreamUrl:(id)arg1 startRoomMemory:(id)arg2 statsType:(long long)arg3;

@end

