//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WA2Tuple, WAMediaPickerStats, WAMultiSendPreviewViewController;

@protocol WAMultiSendPreviewViewControllerDelegate <NSObject>
- (void)multiSendPreviewViewController:(WAMultiSendPreviewViewController *)arg1 didRequestAddContactWithDetails:(WA2Tuple *)arg2;
- (void)multiSendPreviewViewControllerDidRequestRetakePhoto:(WAMultiSendPreviewViewController *)arg1;
- (void)multiSendPreviewViewControllerDidCancel:(WAMultiSendPreviewViewController *)arg1;
- (void)multiSendPreviewViewController:(WAMultiSendPreviewViewController *)arg1 didConfirmItems:(NSArray *)arg2 pickerStatistics:(WAMediaPickerStats *)arg3;

@optional
- (void)multiSendPreviewViewControllerGIFDidFailBecauseOfNetworkError:(WAMultiSendPreviewViewController *)arg1;
@end

