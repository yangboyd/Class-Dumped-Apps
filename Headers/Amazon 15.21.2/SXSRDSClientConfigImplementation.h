//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SRDSClientConfigDefaults.h"

#import "SRDSClientConfigRequired-Protocol.h"

@class NSString;

@interface SXSRDSClientConfigImplementation : SRDSClientConfigDefaults <SRDSClientConfigRequired>
{
}

- (id)searchParameterOverride;
- (id)serverOverride;
- (long long)server;
- (id)loggingDelegate;
- (id)imageResolution;
- (_Bool)shouldCropImages;
- (_Bool)shouldIgnoreInvalidSchema;
- (id)userAgent;
- (long long)marketplace;
- (long long)dataVersion;
- (id)clientID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

