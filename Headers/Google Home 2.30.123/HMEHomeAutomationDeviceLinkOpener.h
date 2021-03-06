//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEHomeAutomationDeviceLinkOpener-Protocol.h"

@class NSString;
@protocol ASTHomeAutomationManagerProtocol, HMELinkOpener;

@interface HMEHomeAutomationDeviceLinkOpener : NSObject <HMEHomeAutomationDeviceLinkOpener>
{
    id <HMELinkOpener> _linkOpener;
    id <ASTHomeAutomationManagerProtocol> _homeAutomationManager;
}

+ (id)mergeQueryParamsToURL:(id)arg1 params:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <ASTHomeAutomationManagerProtocol> homeAutomationManager; // @synthesize homeAutomationManager=_homeAutomationManager;
@property(readonly, nonatomic) id <HMELinkOpener> linkOpener; // @synthesize linkOpener=_linkOpener;
- (void)openDeepLinkForDevice:(id)arg1;
- (void)openDeepLinkForDevice:(id)arg1 analyticsValues:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canOpenDeepLinkToNestAppOrStore;
- (id)initWithHomeAutomationManager:(id)arg1 linkOpener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

