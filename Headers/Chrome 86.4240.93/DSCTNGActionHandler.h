//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCTNGActionNetworkRequestHandler-Protocol.h>
#import <ChromeInternal/DSCTNGNetworkRequestHandler-Protocol.h>

@class DSCCacheFile, DSCDispatchQueue, FEEDConsistencyToken, NSMutableArray, NSString;
@protocol DSCTNGActionHandlerDelegate, DSCTNGViewActionProvider;

@interface DSCTNGActionHandler : NSObject <DSCTNGActionNetworkRequestHandler, DSCTNGNetworkRequestHandler>
{
    id <DSCTNGActionHandlerDelegate> _delegate;
    id <DSCTNGViewActionProvider> _viewActionProvider;
    NSMutableArray *_actionsQueue;
    FEEDConsistencyToken *_consistencyToken;
    NSString *_userID;
    DSCCacheFile *_cacheFile;
    DSCDispatchQueue *_dispatchQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DSCDispatchQueue *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) DSCCacheFile *cacheFile; // @synthesize cacheFile=_cacheFile;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) FEEDConsistencyToken *consistencyToken; // @synthesize consistencyToken=_consistencyToken;
@property(retain, nonatomic) NSMutableArray *actionsQueue; // @synthesize actionsQueue=_actionsQueue;
- (unsigned long long)internalPendingActionsCount;
- (_Bool)internalHasPendingActions;
- (id)internalDequeueActionsIncludingViews:(_Bool)arg1;
- (id)consistencyTokenKey;
- (id)actionsInCache;
- (_Bool)cacheActions:(id)arg1;
- (void)inspectActionResponse:(id)arg1 responseError:(id)arg2;
- (void)addRequestHeaders:(id)arg1;
- (void)annotateActionRequest:(id)arg1 withReason:(unsigned long long)arg2;
- (void)annotateRequest:(id)arg1 ofType:(long long)arg2;
- (id)dequeueActionsIncludingViews:(_Bool)arg1;
@property(nonatomic) __weak id <DSCTNGActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DSCTNGViewActionProvider> viewActionProvider; // @synthesize viewActionProvider=_viewActionProvider;
- (void)enqueueActions:(id)arg1 uploadImmediately:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long pendingActionsCount;
@property(readonly, nonatomic) _Bool hasPendingActions;
- (id)initWithUserID:(id)arg1 cacheDirectoryURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

