//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDiscoveryGridNetworkerDelegate-Protocol.h>

@class IGDiscoveryGridDataStore, IGDiscoveryGridDataValidationBehavior, IGDiscoveryGridNetworker, NSString;
@protocol IGDiscoveryGridDataControllerDelegate;

@interface IGDiscoveryGridDataController : NSObject <IGDiscoveryGridNetworkerDelegate>
{
    id <IGDiscoveryGridDataControllerDelegate> _delegate;
    IGDiscoveryGridDataValidationBehavior *_validationBehavior;
    IGDiscoveryGridNetworker *_networker;
    IGDiscoveryGridDataStore *_dataStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDiscoveryGridDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void)discoveryGridNetworker:(id)arg1 didFailGridRequestWithError:(id)arg2;
- (void)discoveryGridNetworker:(id)arg1 didCompleteGridRequestWithResponse:(id)arg2;
@property(readonly, nonatomic, getter=isFetching) _Bool fetching;
- (_Bool)requestData;
- (id)initWithUserSession:(id)arg1 validationBehavior:(id)arg2 networkContextProvider:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

