//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAppBarViewController.h"

@protocol HMEMediaImmersiveCardsViewControllerDelegate;

@interface HMEMediaImmersiveCardsViewController : HMEAppBarViewController
{
    // Error parsing type: , name: sessionManager
    // Error parsing type: , name: unifiedDeviceData
    // Error parsing type: , name: homeAutomationData
    // Error parsing type: , name: configData
    // Error parsing type: , name: analyticsLogger
    // Error parsing type: , name: flags
    // Error parsing type: , name: mediaService
    // Error parsing type: , name: linkableMediaModel
    // Error parsing type: , name: defaultMediaProvider
    // Error parsing type: , name: sessions
    // Error parsing type: , name: tableView
    // Error parsing type: , name: batchedSessionUpdates
    // Error parsing type: , name: isSessionUpdateInProgress
    // Error parsing type: , name: cellHeightCache
    // Error parsing type: , name: tableHeightUpdateNeeded
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSessionManager:(id)arg1 unifiedDeviceData:(id)arg2 homeAutomationData:(id)arg3 configData:(id)arg4 analyticsLogger:(id)arg5 flags:(id)arg6 mediaService:(id)arg7;
@property(nonatomic) __weak id <HMEMediaImmersiveCardsViewControllerDelegate> delegate; // @synthesize delegate;

@end

