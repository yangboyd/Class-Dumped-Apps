//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLPreviewControllerDataSource-Protocol.h"
#import "QLPreviewControllerDelegate-Protocol.h"

@class GBTMediaPreviewItem, MediaData, NSString, QLPreviewController;
@protocol MediaPreviewManagerDelegate;

@interface MediaPreviewManager : NSObject <QLPreviewControllerDataSource, QLPreviewControllerDelegate>
{
    MediaData *_currentMediaData;
    GBTMediaPreviewItem *_currentPreviewItem;
    QLPreviewController *_previewController;
    id <MediaPreviewManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MediaPreviewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)previewControllerDidDismiss:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)previewMediaData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

