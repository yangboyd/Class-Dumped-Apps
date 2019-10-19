//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;
@protocol SPTExternalIntegrationDriverDistractionObserver;

@protocol SPTExternalIntegrationDriverDistractionController <NSObject>
@property(readonly, nonatomic, getter=isDriverDistractionEnabled) _Bool driverDistractionEnabled;
- (void)removeObserver:(id <SPTExternalIntegrationDriverDistractionObserver>)arg1;
- (void)addObserver:(id <SPTExternalIntegrationDriverDistractionObserver>)arg1;
- (void)disableDriverDistractionWithIdentifier:(NSString *)arg1;
- (void)enableDriverDistractionWithoutLockscreenWithIdentifier:(NSString *)arg1;
- (void)enableDriverDistractionWithIdentifier:(NSString *)arg1 withLockscreenImage:(UIImage *)arg2 dismissibleLockscreen:(_Bool)arg3;
@end

