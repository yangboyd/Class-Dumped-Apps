//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IABAutofillData, IGIABAutofillUserOptOutResult, NSNumber, NSString;
@protocol IABAutofillDataManagerConforming;

@protocol IGIABAutofillDataManagerDelegate <NSObject>
- (void)autofillDataManager:(id <IABAutofillDataManagerConforming>)arg1 didDeleteAutofillDataWithSuccess:(_Bool)arg2;
- (void)autofillDataManager:(id <IABAutofillDataManagerConforming>)arg1 didMutateAutofillData:(IABAutofillData *)arg2 success:(_Bool)arg3;
- (void)autofillDataManager:(id <IABAutofillDataManagerConforming>)arg1 didFetchAutofillData:(IABAutofillData *)arg2;
- (void)autofillDataManager:(id <IABAutofillDataManagerConforming>)arg1 didFetchUserOptOutResult:(IGIABAutofillUserOptOutResult *)arg2;
- (void)autofillDataManager:(id <IABAutofillDataManagerConforming>)arg1 didFetchDomainOptOutResult:(NSNumber *)arg2 forDomain:(NSString *)arg3;
@end

