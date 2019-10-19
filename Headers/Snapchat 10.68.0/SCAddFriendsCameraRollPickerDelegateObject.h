//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsCameraRollPickerDriverDelegate-Protocol.h"
#import "SCScanResultViewControllerDelegate-Protocol.h"

@class NSString, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCStartChatDelegate;

@interface SCAddFriendsCameraRollPickerDelegateObject : NSObject <SCScanResultViewControllerDelegate, SCAddFriendsCameraRollPickerDriverDelegate>
{
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
    UIViewController *_viewController;
    long long _scanSource;
    SCUserSession *_userSession;
    _Bool _shouldScanCell;
}

- (void).cxx_destruct;
- (void)scanResultViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2;
- (id)scanResultViewController:(id)arg1 cardToReplaceScanCard:(id)arg2;
- (void)scanResultViewController:(id)arg1 didPressSnapForUsername:(id)arg2;
- (void)scanResultViewController:(id)arg1 didPressChatForUsername:(id)arg2;
- (_Bool)scanResultViewController:(id)arg1 shouldShowCard:(id)arg2;
- (void)addFriendsCameraRollPickerDriverDidStartScan:(id)arg1;
- (void)addFriendsCameraRollPickerDriverDidFinishScan:(id)arg1;
- (_Bool)addFriendsCameraRollPickerDriverShouldScan:(id)arg1;
- (void)addFriendsCameraRollPickerDriver:(id)arg1 didScanImageWithScannedData:(id)arg2;
- (id)initWithStartChatDelegate:(id)arg1 navigationDelegate:(id)arg2 scanSource:(long long)arg3 userSession:(id)arg4 shouldScanCell:(_Bool)arg5 viewController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

