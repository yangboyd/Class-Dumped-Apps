//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBSnackbarQueueItem, NSMutableArray, UIViewController;
@protocol DBSnackbarPresenting;

@interface DBSnackbarPresenter : NSObject
{
    NSMutableArray *_queue;
    DBSnackbarQueueItem *_currentlyPresentedItem;
    UIViewController<DBSnackbarPresenting> *_defaultPresentingViewController;
}

+ (id)sharedPresenter;
@property(readonly, nonatomic) __weak UIViewController<DBSnackbarPresenting> *defaultPresentingViewController; // @synthesize defaultPresentingViewController=_defaultPresentingViewController;
@property(retain, nonatomic) DBSnackbarQueueItem *currentlyPresentedItem; // @synthesize currentlyPresentedItem=_currentlyPresentedItem;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)db_dismissSnackbarAnimated:(_Bool)arg1;
- (void)db_swipePerformed:(id)arg1;
- (void)db_dismissTimerFiredWithModel:(id)arg1;
- (void)db_presentNextSnackbar;
- (void)db_dismissOrRemoveItem:(id)arg1 animated:(_Bool)arg2;
- (void)db_enqueueItem:(id)arg1;
- (id)db_queueItemForModel:(id)arg1;
- (void)clearAllEnqueuedSnackbars;
- (void)dismissSnackbar:(id)arg1 animated:(_Bool)arg2;
- (void)presentSnackbar:(id)arg1 onViewController:(id)arg2 delegate:(id)arg3;
- (void)presentSnackbar:(id)arg1 onViewController:(id)arg2;
- (void)setDefaultPresentingViewController:(id)arg1 dismissingSnackbarIfNecessary:(_Bool)arg2;
- (id)init;

@end

