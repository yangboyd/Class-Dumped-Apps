//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIView, YTShareDialogLoggingProxyController;

@protocol YTShareServices <NSObject>
@property(nonatomic) __weak UIView *tappedShareButtonView;
@property(retain, nonatomic) id <YTInnerTubeResponseCacheKey> sharePanelCacheKey;
@property(nonatomic) __weak YTShareDialogLoggingProxyController *permissionDialogsLoggingProxy;
@property(retain, nonatomic) NSArray *cachedAddressbookContacts;
- (NSArray *)supportedSharingServiceIds;
- (NSArray *)reactrSharerClasses;
- (NSArray *)sharerClasses;
@end

