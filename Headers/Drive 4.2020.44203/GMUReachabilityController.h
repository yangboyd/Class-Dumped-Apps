//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTMSessionFetcher, GTMSessionFetcherService, NSURLRequest;
@protocol GMUReachabilityControllerDelegate;

@interface GMUReachabilityController : NSObject
{
    _Bool _isReachable;
    _Bool _cellularAllowed;
    _Bool _retryScheduled;
    GTMSessionFetcher *_currentFetcher;
    id <GMUReachabilityControllerDelegate> _delegate;
    NSURLRequest *_request;
    GTMSessionFetcherService *_fetcherService;
    double _currentBackoff;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool retryScheduled; // @synthesize retryScheduled=_retryScheduled;
@property(nonatomic) double currentBackoff; // @synthesize currentBackoff=_currentBackoff;
@property(readonly, nonatomic) GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <GMUReachabilityControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool cellularAllowed; // @synthesize cellularAllowed=_cellularAllowed;
@property _Bool isReachable; // @synthesize isReachable=_isReachable;
@property(retain) GTMSessionFetcher *currentFetcher; // @synthesize currentFetcher=_currentFetcher;
- (void)updateReachability;
- (id)initWithCellularAllowed:(_Bool)arg1 fetcherService:(id)arg2 delegate:(id)arg3;
- (id)initWithCellularAllowed:(_Bool)arg1 delegate:(id)arg2;

@end

