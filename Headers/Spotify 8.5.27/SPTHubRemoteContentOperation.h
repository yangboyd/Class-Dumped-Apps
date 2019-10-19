//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSError, NSString, SPTDataLoader;
@protocol HUBContentOperationDelegate, HUBViewModelBuilder, SPTHubRemoteContentOperationURLResolver, SPTOfflineModeState;

@interface SPTHubRemoteContentOperation : NSObject <SPTDataLoaderDelegate, SPTOfflineModeStateObserver, HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTHubRemoteContentOperationURLResolver> _contentURLResolver;
    NSString *_sourceIdentifier;
    id <HUBViewModelBuilder> _viewModelBuilder;
    NSError *_previousError;
}

@property(retain, nonatomic) NSError *previousError; // @synthesize previousError=_previousError;
@property(retain, nonatomic) id <HUBViewModelBuilder> viewModelBuilder; // @synthesize viewModelBuilder=_viewModelBuilder;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, nonatomic) id <SPTHubRemoteContentOperationURLResolver> contentURLResolver; // @synthesize contentURLResolver=_contentURLResolver;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishAfterPerformingOperation:(_Bool)arg1;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (void)dealloc;
- (id)initWithDataLoaderFactory:(id)arg1 offlineStateMode:(id)arg2 contentURLResolver:(id)arg3 sourceIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

