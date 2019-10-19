//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCStoriesSnapReadReceiptService : NSObject
{
    SCLazy *_lazySnapReadStateDataCoordinator;
    SCLazy *_lazySnapReadStateDataFetcher;
    SCLazy *_lazySnapReadReceiptLogger;
}

@property(readonly, nonatomic) SCLazy *lazySnapReadReceiptLogger; // @synthesize lazySnapReadReceiptLogger=_lazySnapReadReceiptLogger;
@property(readonly, nonatomic) SCLazy *lazySnapReadStateDataFetcher; // @synthesize lazySnapReadStateDataFetcher=_lazySnapReadStateDataFetcher;
@property(readonly, nonatomic) SCLazy *lazySnapReadStateDataCoordinator; // @synthesize lazySnapReadStateDataCoordinator=_lazySnapReadStateDataCoordinator;
- (void).cxx_destruct;
- (id)initWithSnapReadStateDataCoordinator:(id)arg1 dataFetcher:(id)arg2 logger:(id)arg3;

@end

