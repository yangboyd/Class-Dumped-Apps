//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFSDKiAdClient : NSObject
{
    id _AdSupportBundleRef;
}

@property(retain, nonatomic) id AdSupportBundleRef; // @synthesize AdSupportBundleRef=_AdSupportBundleRef;
- (void).cxx_destruct;
- (id)loadFramework;
- (void)executeIDFARequest:(_Bool)arg1:(_Bool *)arg2:(id *)arg3:(id *)arg4;
- (void)executeAttributionRequest:(int)arg1:(CDUnknownBlockType)arg2;
- (void)requestAttributionDetails:(CDUnknownBlockType)arg1;

@end

