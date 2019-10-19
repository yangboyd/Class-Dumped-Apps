//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTModerationReportURLBuilder-Protocol.h"

@class NSMutableArray, NSString, NSURL;

@interface SPTModerationReportURLBuilderImplementation : NSObject <SPTModerationReportURLBuilder>
{
    NSURL *_baseURL;
    NSURL *_viewURI;
    NSURL *_entityURL;
    double _entityTimestamp;
    NSMutableArray *_otherEntityURLs;
}

@property(retain, nonatomic) NSMutableArray *otherEntityURLs; // @synthesize otherEntityURLs=_otherEntityURLs;
@property(nonatomic) double entityTimestamp; // @synthesize entityTimestamp=_entityTimestamp;
@property(readonly, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(readonly, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)urisItem;
- (id)entityURLStringWithTimestamp;
@property(readonly, nonatomic) NSURL *URL;
- (void)addOtherEntityURL:(id)arg1;
- (id)initWithEntityURL:(id)arg1 viewURI:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

