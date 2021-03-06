//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDARequestAccessNotificationCategoryDelegate-Protocol.h"

@class GDKSharingClient, NSArray, NSMutableDictionary, NSString;
@protocol GDANotificationsActionHandlerDelegate, SSOService;

@interface GDANotificationsActionHandler : NSObject <GDARequestAccessNotificationCategoryDelegate>
{
    _Bool _handleResourceKeys;
    id <GDANotificationsActionHandlerDelegate> _delegate;
    NSMutableDictionary *_gunsCategoryMap;
    NSMutableDictionary *_chimeCategoryMap;
    GDKSharingClient *_sharingClient;
    id <SSOService> _SSOService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool handleResourceKeys; // @synthesize handleResourceKeys=_handleResourceKeys;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
@property(readonly, nonatomic) GDKSharingClient *sharingClient; // @synthesize sharingClient=_sharingClient;
@property(readonly, nonatomic) NSMutableDictionary *chimeCategoryMap; // @synthesize chimeCategoryMap=_chimeCategoryMap;
@property(readonly, nonatomic) NSMutableDictionary *gunsCategoryMap; // @synthesize gunsCategoryMap=_gunsCategoryMap;
@property(nonatomic) __weak id <GDANotificationsActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)postNotificationWithCategoryID:(id)arg1 actionID:(id)arg2 userID:(id)arg3 textInputValue:(id)arg4;
- (void)addChimeCategory:(id)arg1;
- (void)addGUNSCategory:(id)arg1;
- (void)createCategories;
- (void)viewFileActionWasActivatedWithFileID:(id)arg1;
- (_Bool)handleActionWithID:(id)arg1 userInfo:(id)arg2 userText:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithSharingClient:(id)arg1 SSOService:(id)arg2 handleResourceKeys:(_Bool)arg3;
@property(readonly, copy, nonatomic) NSArray *chimeCategories;
@property(readonly, copy, nonatomic) NSArray *gunsCategories;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

