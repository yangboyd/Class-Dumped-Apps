//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, SGMEncrptProtocol, SGMVerificationProtocol;

@interface SGMSafeGuardManager : NSObject
{
    _Bool _requestSettings;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_uploadTimer;
    NSObject<OS_dispatch_source> *_fetchSettingsTimer;
    NSString *_scene;
    NSDictionary *_customInfoDic;
    struct _void *_settings;
    id <SGMVerificationProtocol> _verifyDelegate;
    id <SGMEncrptProtocol> _encryptDelegate;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SGMEncrptProtocol> encryptDelegate; // @synthesize encryptDelegate=_encryptDelegate;
@property(retain, nonatomic) id <SGMVerificationProtocol> verifyDelegate; // @synthesize verifyDelegate=_verifyDelegate;
@property(nonatomic) struct _void *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSDictionary *customInfoDic; // @synthesize customInfoDic=_customInfoDic;
@property(nonatomic) _Bool requestSettings; // @synthesize requestSettings=_requestSettings;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *fetchSettingsTimer; // @synthesize fetchSettingsTimer=_fetchSettingsTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)updateCustomInfo:(id)arg1;
- (id)retFromDelegateSelector:(SEL)arg1;
- (void)performInWorkQueue:(CDUnknownBlockType)arg1;
- (void)changedVersionB;
- (void)setupVersionB;
- (id)hybrid_CurrentHost;
- (id)currentHost;
- (id)currentVersion;
- (void)setVersionA:(CDUnknownBlockType)arg1;
- (void)setHostDic:(id)arg1;
- (void)p_stopManualTaskWithCompletion:(CDUnknownBlockType)arg1;
- (void)p_stopScheduledTask:(_Bool)arg1;
- (void)updateSettings:(struct _void *)arg1;
- (id)mlist;
- (void)p_schedulSafeGuard;
- (void)p_requestSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)p_startManualGuardForScene:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)Y2Q3ZjA4YjNhYTE1MjU5ODRiYzFjYWJjNWJhZTliZmEK:(id)arg1;
- (void)rdr2:(id)arg1;
- (void)p_requestEncryptStartConfig;
- (id)sgm_encode_v03:(id)arg1;
- (void)sgm_stopManualGuard;
- (void)sgm_startManualGuardForScene:(id)arg1;
- (void)sgm_scheduleSafeGuard:(_Bool)arg1;
- (void)sgm_scheduleSafeGuard;
- (void)sgm_startWithHybridDelegate:(id)arg1;
- (void)sgm_startWithConfig:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)testMsgLog_Ori:(id)arg1;
- (id)testMsgLog:(id)arg1;
- (void)sgm_adjustWithServerTime:(long long)arg1;
- (id)sgm_encryptURLWithURL:(id)arg1 formData:(id)arg2;
- (id)deprecated_initialVector;
- (id)deprecated_secretKey;
- (id)sgm_deprecated_decryptString_cfb8:(id)arg1;
- (id)sgm_deprecated_encryptString_cfb8:(id)arg1;
- (id)sgm_deprecated_decryptString:(id)arg1;
- (id)sgm_deprecated_encryptString:(id)arg1;

@end

