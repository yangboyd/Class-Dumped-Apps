//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesReadReceiptUploadingProcessing-Protocol.h"

@class NSString, SCDocObjectContext, SCQueuePerformer, SCSessionRequestManager;
@protocol SCUsernameToSnapchatterFetching;

@interface SCStoriesSnapReadReceiptUploadingProcessor : NSObject <SCStoriesReadReceiptUploadingProcessing>
{
    SCDocObjectContext *_docObjectContext;
    SCSessionRequestManager *_sessionRequestManager;
    id <SCUsernameToSnapchatterFetching> _usernameToSnapchatterFetcher;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_markInTransmitReadReceiptsAsComplete:(_Bool)arg1 inTransmitReadReceipts:(id)arg2;
- (void)_sendRequestWithParameters:(id)arg1 inTransmitReadReceipts:(id)arg2;
- (void)_prepareParametersForInTransmitReadReceipts:(id)arg1;
- (void)_startToSendRequestWithBatchLimit:(long long)arg1;
- (void)_startToSendRequestForSnap:(id)arg1;
- (void)uploadUnsentReadReceiptsIfNecessary;
- (void)uploadUnsentReadReceipts;
- (void)uploadReadReceiptForSnap:(id)arg1 action:(unsigned long long)arg2;
- (id)initWithDocObjectContext:(id)arg1 sessionRequestManager:(id)arg2 usernameToSnapchatterFetcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

