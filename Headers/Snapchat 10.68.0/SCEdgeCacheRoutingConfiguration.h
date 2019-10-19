//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCServerConfigListener-Protocol.h"

@class NSSet, NSString;

@interface SCEdgeCacheRoutingConfiguration : NSObject <SCServerConfigListener>
{
    NSString *_oldJsonifiedSetOfEndpoints;
    NSSet *_whitelistedCDNEndpoints;
    NSString *_edgeCachehost;
}

+ (id)shared;
@property(retain) NSString *edgeCachehost; // @synthesize edgeCachehost=_edgeCachehost;
@property(retain) NSSet *whitelistedCDNEndpoints; // @synthesize whitelistedCDNEndpoints=_whitelistedCDNEndpoints;
- (void).cxx_destruct;
- (void)serverConfigDidChange:(id)arg1;
- (void)updateConfiguration:(id)arg1;
- (_Bool)allowEdgeCacheRoutingForHost:(id)arg1;
- (_Bool)allowEdgeCacheRoutingForEndpoint:(id)arg1;
- (_Bool)allowEdgeCacheRoutingWithHttpMethod:(id)arg1;
- (_Bool)allowEdgeCacheRoutingWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

