//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIEventFactoryLocation-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIEventFactoryLocationImplementation : NSObject <SPTUBIEventFactoryLocation>
{
    _Bool _impressionEnabled;
    NSString *_applicationId;
    NSString *_specificationId;
    NSString *_pageReason;
    NSString *_specificationCommitHash;
    NSString *_generatorCommitHash;
    NSArray *_nameComponents;
    NSArray *_identifierComponents;
    NSArray *_positionComponents;
    NSArray *_uriComponents;
    NSArray *_reasonComponents;
}

@property(readonly, nonatomic) _Bool impressionEnabled; // @synthesize impressionEnabled=_impressionEnabled;
@property(readonly, copy, nonatomic) NSArray *reasonComponents; // @synthesize reasonComponents=_reasonComponents;
@property(readonly, copy, nonatomic) NSArray *uriComponents; // @synthesize uriComponents=_uriComponents;
@property(readonly, copy, nonatomic) NSArray *positionComponents; // @synthesize positionComponents=_positionComponents;
@property(readonly, copy, nonatomic) NSArray *identifierComponents; // @synthesize identifierComponents=_identifierComponents;
@property(readonly, copy, nonatomic) NSArray *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(readonly, copy, nonatomic) NSString *generatorCommitHash; // @synthesize generatorCommitHash=_generatorCommitHash;
@property(readonly, copy, nonatomic) NSString *specificationCommitHash; // @synthesize specificationCommitHash=_specificationCommitHash;
@property(readonly, copy, nonatomic) NSString *pageReason; // @synthesize pageReason=_pageReason;
@property(readonly, copy, nonatomic) NSString *specificationId; // @synthesize specificationId=_specificationId;
@property(readonly, copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (void).cxx_destruct;
- (id)eventComponentsWithPageURI:(id)arg1 pageId:(id)arg2;
- (id)initWithLocation:(id)arg1;
- (id)initWithApplicationId:(id)arg1 specificationId:(id)arg2 pageReason:(id)arg3 specificationCommitHash:(id)arg4 generatorCommitHash:(id)arg5 nameComponents:(id)arg6 identifierComponents:(id)arg7 positionComponents:(id)arg8 uriComponents:(id)arg9 reasonComponents:(id)arg10 impressionEnabled:(_Bool)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

