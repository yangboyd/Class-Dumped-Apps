//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCSharedContentObserver-Protocol.h>

@class NSMapTable, NSString;

@interface DSCRootModel : NSObject <DSCSharedContentObserver>
{
    NSMapTable *_models;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cardListModelDidCommitAllDismisses:(id)arg1;
- (void)cardListModel:(id)arg1 didUndoDismissForContent:(id)arg2;
- (void)cardListModel:(id)arg1 didDismissContent:(id)arg2;
- (id)createCardListModelWithIdentifier:(id)arg1 token:(id)arg2 channelType:(long long)arg3 cacheDirectoryURL:(id)arg4 options:(id)arg5;
- (id)cardListModelForIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

