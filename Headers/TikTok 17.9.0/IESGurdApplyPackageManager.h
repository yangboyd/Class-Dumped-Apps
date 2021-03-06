//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESGurdApplyPackageManagerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol IESGurdApplyPackageManagerDelegate;

@interface IESGurdApplyPackageManager : NSObject <IESGurdApplyPackageManagerDelegate>
{
    id <IESGurdApplyPackageManagerDelegate> _delegate;
    NSMutableDictionary *_applyCompletionDictionary;
    NSMutableArray *_unzippingTempDirectorys;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *unzippingTempDirectorys; // @synthesize unzippingTempDirectorys=_unzippingTempDirectorys;
@property(retain, nonatomic) NSMutableDictionary *applyCompletionDictionary; // @synthesize applyCompletionDictionary=_applyCompletionDictionary;
@property(nonatomic) __weak id <IESGurdApplyPackageManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)gurdDidApplyPackageWithInactiveMeta:(id)arg1;
- (void)traceEventWithInactiveMeta:(id)arg1 message:(id)arg2 hasError:(_Bool)arg3;
- (void)notifyApplyResult:(_Bool)arg1 error:(id)arg2 inactiveMeta:(id)arg3;
- (void)reportApplyResult:(_Bool)arg1 error:(id)arg2 inactiveMeta:(id)arg3 duration:(long long)arg4;
- (void)updateResourcesWithMetaData:(id)arg1 tempDirectory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)innerUnzipWebCacheWithMeta:(id)arg1 zipFilePath:(id)arg2 tempDirectory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unzipWebCacheWithMeta:(id)arg1 zipFilePath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unzipInactiveCacheWithMeta:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyInactiveCacheWithMeta:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearTempFiles;
- (void)saveInactivePackageMetaDataWithAccessKey:(id)arg1 config:(id)arg2 isPatch:(_Bool)arg3;
- (void)applyInactiveCacheForAccessKey:(id)arg1 channel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyAllInactiveCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)applyPackageManager:(id)arg1 didApplyPackageForAccessKey:(id)arg2 channel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

