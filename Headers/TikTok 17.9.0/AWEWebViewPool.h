//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSTimer;

@interface AWEWebViewPool : NSObject
{
    int _maxNumberOfInstances;
    int _memoryWarningProtectDuration;
    NSLock *_lock;
    NSMutableArray *_webviews;
    NSTimer *_memoryWarningProtectTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *memoryWarningProtectTimer; // @synthesize memoryWarningProtectTimer=_memoryWarningProtectTimer;
@property(retain, nonatomic) NSMutableArray *webviews; // @synthesize webviews=_webviews;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) int memoryWarningProtectDuration; // @synthesize memoryWarningProtectDuration=_memoryWarningProtectDuration;
- (id)defaultSettings;
- (id)generatWebView;
- (void)produceWebViewWhenMainThreadIdle;
@property(nonatomic) int maxNumberOfInstances; // @synthesize maxNumberOfInstances=_maxNumberOfInstances;
- (_Bool)needRemoveInstance;
- (_Bool)needAddInstance;
- (id)fetchWithFrame:(struct CGRect)arg1 bridgeClass:(Class)arg2 settings:(id)arg3;
- (id)fetchWebViewWithSettings:(id)arg1;
- (id)fetchWebView;
- (void)updatePoolIfNeeded;
- (void)protectTimerTimeout:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

@end

