//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ElectrodeContainer/ElectrodePluginConfig-Protocol.h>

@class NSString;

@interface ElectrodeContainerConfig : NSObject <ElectrodePluginConfig>
{
    _Bool _debugEnabled;
    NSString *_packagerHost;
    NSString *_packagerPort;
    NSString *_bundleStoreHostPort;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleStoreHostPort; // @synthesize bundleStoreHostPort=_bundleStoreHostPort;
@property(copy, nonatomic) NSString *packagerPort; // @synthesize packagerPort=_packagerPort;
@property(copy, nonatomic) NSString *packagerHost; // @synthesize packagerHost=_packagerHost;
@property(nonatomic) _Bool debugEnabled; // @synthesize debugEnabled=_debugEnabled;
- (id)allJSBundleFiles;
- (void)setupConfigWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *codePushWithIDString;
@property(readonly, copy, nonatomic) NSString *codePushWithServerURLString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

