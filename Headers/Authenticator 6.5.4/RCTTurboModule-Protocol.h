//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReactCommon/NSObject-Protocol.h>

@protocol RCTTurboModuleLookupDelegate, RCTTurboModulePerformanceLogger;

@protocol RCTTurboModule <NSObject>

@optional
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;
- (shared_ptr_3725e3cd)getTurboModuleWithJsInvoker:(shared_ptr_cb283e74)arg1 nativeInvoker:(shared_ptr_cb283e74)arg2 perfLogger:(id <RCTTurboModulePerformanceLogger>)arg3;
@end

