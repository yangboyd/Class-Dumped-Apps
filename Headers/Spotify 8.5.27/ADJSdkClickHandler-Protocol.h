//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ADJActivityPackage;
@protocol ADJActivityHandler;

@protocol ADJSdkClickHandler
- (void)teardown;
- (void)sendSdkClick:(ADJActivityPackage *)arg1;
- (void)resumeSending;
- (void)pauseSending;
- (id)initWithActivityHandler:(id <ADJActivityHandler>)arg1 startsSending:(_Bool)arg2;
@end

