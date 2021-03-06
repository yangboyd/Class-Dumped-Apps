//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, YTIMdxGlobalConfig;

@protocol MDXConfig <NSObject>
@property(readonly, nonatomic) _Bool enableMDXFiji;
@property(readonly, nonatomic) long long MDXServerEnvironment;
@property(readonly, nonatomic) YTIMdxGlobalConfig *MDXGlobalConfig;
@property(readonly, nonatomic) int innerTubeClientName;

@optional
@property(readonly, nonatomic) NSArray *notificationTriggers;
@property(readonly, nonatomic) NSArray *notifications;
@property(readonly, nonatomic) long long notificationCounterReferenceID;
@property(readonly, nonatomic) _Bool enableMDXAutoplay;
@property(readonly, nonatomic) _Bool enableMDXQueue;
@property(readonly, nonatomic) _Bool enableMDXStoryboard;
@property(readonly, nonatomic) _Bool enableMDXLockScreenControls;
@property(readonly, nonatomic) _Bool enableMDXFijiSkippableAd;
@property(readonly, nonatomic) _Bool enableMDXOneCast;
@property(readonly, nonatomic) _Bool enableMDXMemento;
@property(readonly, nonatomic) NSString *additionalDIALLaunchParameters;
@property(readonly, nonatomic, getter=isAudioCastEnabled) _Bool audioCastEnabled;
@property(readonly, nonatomic, getter=isMDXVerboseLoggingEnabled) _Bool MDXVerboseLoggingEnabled;
@property(readonly, nonatomic) _Bool enableCastSDKLogging;
@property(readonly, nonatomic) _Bool disableMDXDeviceDiscovery;
@property(readonly, nonatomic) long long MDXLocalTransportType;
@property(readonly, nonatomic) long long MDXForcedPromotionElementType;
@end

