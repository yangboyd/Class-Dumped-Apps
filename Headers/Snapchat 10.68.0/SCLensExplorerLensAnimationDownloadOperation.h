//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSOperationQueue, NSString, SCFuture, SCLensExplorerLensItem, SCPromise;
@protocol SCRequestManager;

@interface SCLensExplorerLensAnimationDownloadOperation : NSOperation
{
    id <SCRequestManager> _requestManager;
    SCPromise *_promise;
    NSMutableArray *_images;
    NSOperationQueue *_downloadingQueue;
    NSString *_name;
    struct CGSize _preferredSize;
    SCLensExplorerLensItem *_lensExplorerItem;
    SCFuture *_downloadResult;
}

@property(readonly, nonatomic) SCFuture *downloadResult; // @synthesize downloadResult=_downloadResult;
@property(readonly, nonatomic) SCLensExplorerLensItem *lensExplorerItem; // @synthesize lensExplorerItem=_lensExplorerItem;
- (void).cxx_destruct;
- (id)name;
- (void)cancel;
- (void)completeOperation;
- (void)main;
- (id)initWithRequestManager:(id)arg1 lensExplorerItem:(id)arg2 preferredSize:(struct CGSize)arg3;

@end

